#ifndef DEF_GAMELEVEL
#define DEF_GAMELEVEL

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include "intelligentfish.hpp"
#include "dolphin.hpp"

class GameLevel : public sf::Drawable
{
public:
  GameLevel(  ); 
	void update( float linear_input, float angular_input );
	sf::Vector2f getViewPosition() { return dolphin.getPosition(); }
private:
  virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
  
	IntelligentFish intelligent_fish;
 	Dolphin dolphin;
};


#endif
