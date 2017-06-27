#include "fishai.hpp"

#define RADIANS_TO_DEGREES 57.269

using namespace std;

FishAI::FishAI( float angular_factor_range, float linear_factor_range )
{
	srand(time(NULL));
	position = sf::Vector2f(0.0f,0.0f);
	angle = 0;
	linear_command = 0;
	angular_command = 0;
	factors.angular_reponse = ((rand() % (int)angular_factor_range * 1000) / 1000) - angular_factor_range / 2;
	cout << factors.angular_reponse << endl;
	factors.linear_reponse = 0;
	last_generation_factors = factors;

}

void FishAI::givePosition( sf::Vector2f position , float angle)
{
	this->position = position;
	this->angle = angle;
}




void FishAI::giveSawFishes( std::vector<Fish> * surrounding_fishs ) 
{
	this->surrounding_fishs = surrounding_fishs;
}

void FishAI::update(  )
{
	linear_command = 4;
	for(unsigned int i = 0 ; i < surrounding_fishs->size() ; i++ ) 
	{
		sf::Vector2f fish_pos = (*surrounding_fishs)[i].getPosition();
		int fish_angle = (*surrounding_fishs)[i].getAngle();  
		
		int angle_difference = (fish_angle % 360) - RADIANS_TO_DEGREES * atan(( fish_pos.y - position.y) / (fish_pos.x - position.x));
		cout << angle_difference << " = " << fish_angle % 360 << " - " << (angle_difference - fish_angle % 360) * -1 << endl;
		angular_command = angle_difference * factors.angular_reponse / 10; 
	}	
//	cout << angle_difference << endl;
	//angular_command /= surrounding_fishs->size();

}
