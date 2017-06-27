#include "intelligentfish.hpp"

#define CONVERSION_RATIO 57.269

using namespace std;

IntelligentFish::IntelligentFish() : Fish("img/dolphin.png"), FishAI(5,5)
{
	
}

void IntelligentFish::update( float linear_input, float angular_input)
{ 
	FishAI::update();


	Fish::update( FishAI::getLinearCommand(), FishAI::getAngularCommand());
}
