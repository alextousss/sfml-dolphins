#ifndef DEF_INTELLIGENCE
#define DEF_INTELLIGENCE

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include "fish.hpp"


#define RADIANS_TO_DEGREES 57.269

struct FishAIContent
{
	float angular_reponse;
	float linear_reponse;
};


class FishAI
{
public:
	FishAI(float angular_factor_range, float linear_factor_range);
	void givePosition( sf::Vector2f position , float angle);
	virtual void giveSawFishes( std::vector<Fish> *  surrounding_fishs ); 
	float getAngularCommand() { return angular_command; } 
	float getLinearCommand() { return linear_command; } 
	void update();
	void mutate(bool was_better);
private:

	sf::Vector2f position;
	float angle;
	std::vector<Fish> * surrounding_fishs;
	float linear_command;
	float angular_command;
	FishAIContent factors;
	FishAIContent last_generation_factors;

};


#endif
