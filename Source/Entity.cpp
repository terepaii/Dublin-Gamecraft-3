#include "Entity.h"

Entity::Entity()
{
}

Entity::Entity(sf::Texture& eTexture)
	:eTexture(eTexture)
{
	sprite.setTexture(eTexture);
}

Entity::~Entity()
{
}

void Entity::updatePos()
{
	sf::Vector2f currentPos = sprite.getPosition();
	sprite.setPosition(currentPos + velocity);
}

sf::Vector2f Entity::getPos()
{
	return sprite.getPosition();
}

void Entity::setVelocity(float x, float y)
{
	velocity = sf::Vector2f(x, y);
}

sf::Vector2f Entity::getVelocity()
{
	return velocity;
}

void Entity::draw(sf::RenderWindow& rWindow)
{
	rWindow.draw(sprite);
}

void Entity::update()
{
	// Example of how the input to move could be done
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		setVelocity(1, 0);	
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		setVelocity(-1, 0);
	}
	else
	{
		setVelocity(0, 0);
	}
	updatePos();
}
