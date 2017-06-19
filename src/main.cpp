#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
  sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML Alex");
  window.setVerticalSyncEnabled(true);

  sf::Sprite alien_sprite;
  sf::Texture alien_texture;

  if (!alien_texture.loadFromFile("img/dolphin.png"))
  {
    cout << "Error loading texture" << endl;
  }

  alien_sprite.setTexture( alien_texture );


  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      switch(event.type)
      {
        case  sf::Event::Closed:
          window.close();
          break;

        default:
          break;
      }
    }

    sf::Vector2i localPosition = sf::Mouse::getPosition(window);
    alien_sprite.setPosition(localPosition.x, localPosition.y);
    alien_sprite.setScale(sf::Vector2f(0.05f, 0.05f)); // absolute scale factor
    window.clear();
    window.draw( alien_sprite );
    window.display();
  }

  return 0;
}
