#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include "dolphin.hpp"

class GameLevel
{
public:
  GameLevel();
  void update(time_t time_elapsed);
private:
  void updateScreen();
  sf::RenderWindow window;
  Dolphin dolphin;
};
