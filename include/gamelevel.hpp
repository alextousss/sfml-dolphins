#ifndef DEF_GAMELEVEL
#define DEF_GAMELEVEL

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include "dolphin.hpp"

class GameLevel : public sf::Drawable
{
public:
  GameLevel(  ); 
  void update( float linear_input, float angular_input );
private:
  virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
  
  Dolphin dolphin;
};


#endif
