#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include <cmath>


class Dolphin : public sf::Drawable
{
public:
  Dolphin();
  void update(time_t time_elapsed, float linear_input, float angular_input);

private:
  virtual void draw(sf::RenderTarget& target, sf::RenderStates states);
  sf::Texture texture;
  sf::Sprite sprite;

  sf::Vector2f position;
  float angle;
};
