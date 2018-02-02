#include "gamelevel.hpp"

GameLevel::GameLevel( )
{
 
}

void GameLevel::draw( sf::RenderTarget& target, sf::RenderStates states ) const
{
  	target.draw( dolphin );
	target.draw( intelligent_fish );
}

void GameLevel::update( float linear_input, float angular_input )
{
//	time_t useless_time;
	dolphin.update( linear_input, angular_input );  	
	std::vector<Fish> fishs;
	fishs.push_back(dolphin);
  	intelligent_fish.giveSawFishes(&fishs);
	intelligent_fish.update(0, 0);
}
