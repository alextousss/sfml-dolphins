#include "gamelevel.hpp"

GameLevel::GameLevel()
{
  sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML dolphins");
  window.setVerticalSyncEnabled(true);
}

void GameLevel::update(time_t time_elapsed)
{

  updateScreen();
}

void GameLevel::updateScreen()
{
  
}
