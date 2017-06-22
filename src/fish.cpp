#include "fish.hpp"

#define CONVERSION_RATIO 57.269

using namespace std;

Fish::Fish( const char * texture_loc )
{
	time_at_born.restart();

	if (!texture.loadFromFile(texture_loc))
  {
    cout << "Error loading texture" << endl;
  }

  position = sf::Vector2f(250,250);
  angle = 0;
}

void Fish::update(time_t time_elapsed, float linear_input, float angular_input)
{ 
  angle += angular_input;
	
  position.x += cos(angle / CONVERSION_RATIO) * linear_input;
  position.y += sin(angle / CONVERSION_RATIO) * linear_input;

}


void Fish::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	sf::Time current_time = time_at_born.getElapsedTime();
  sf::Sprite sprite;

	float oscillation_amplitude = 7;
	float oscillation_speed = 0.025;

	sprite.setScale( sf::Vector2f( 0.05f, 0.05f )  );
 	sprite.setTexture( texture );
  sprite.setPosition( position );

	int sprite_angle = (angle - 200) + sin( current_time.asMilliseconds() * oscillation_speed) * oscillation_amplitude;
	sprite.setRotation( sprite_angle );

  target.draw(sprite);
}