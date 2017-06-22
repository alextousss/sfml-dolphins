#include "gamelevel.hpp"

GameLevel::GameLevel( )
{
 
}

void GameLevel::draw( sf::RenderTarget& target, sf::RenderStates states ) const
{
  target.draw( dolphin );
}

void GameLevel::update( float linear_input, float angular_input )
{
	time_t useless_time;
	dolphin.update( useless_time, linear_input, angular_input );  	
}
