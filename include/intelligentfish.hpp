#ifndef DEF_INTELLIGENTFISH
#define DEF_INTELLIGENTFISH

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include <cmath>
#include "fish.hpp"
#include "fishai.hpp"

class IntelligentFish : public Fish, public FishAI
{
public:
  IntelligentFish();
	void update( float linear_input, float angular_input );
	
private:
};


#endif
