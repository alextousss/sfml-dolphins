#ifndef DEFINE_FISH
#define DEFINE_FISH

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include <cmath>


class Fish : public sf::Drawable
{
public:
  Fish(const char * texture_loc);
  virtual void update(time_t time_elapsed, float linear_input, float angular_input);

private:
  virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
  sf::Texture texture;

  sf::Vector2f position;
  float angle;

	sf::Clock time_at_born;
};

#endif
