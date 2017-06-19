#include "dolphin.hpp"

using namespace std;

Dolphin::Dolphin()
{
  if (!texture.loadFromFile("img/dolphin.png"))
  {
    cout << "Error loading texture" << endl;
  }

  sprite.setTexture( texture );
  position = sf::Vector2f(0,0);
  angle = 0;
}

void Dolphin::update(time_t time_elapsed, float linear_input, float angular_input)
{
  angle += angular_input;
  int x = position.x;
  int y = position.y;
  position.x = (x * cos(angular_input) - y * sin(angular_input));
  position.y = ( x * sin(angular_input) + y * cos(angular_input));
}


void Dolphin::draw(sf::RenderTarget& target, sf::RenderStates states)
{
  sprite.setRotation( angle );
  sprite.setPosition( position );

  target.draw(sprite);
}
