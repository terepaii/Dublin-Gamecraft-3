#include "Entity.h"

Entity::Entity()
{
}

Entity::Entity(sf::Texture eTexture)
	:eTexture(eTexture)
{
	sprite.setTexture(eTexture);
}

Entity::~Entity()
{
}

void Entity::changePos(sf::Vector2f& v)
{
	sf::Vector2f currentPos = sprite.getPosition();
	sprite.setPosition(currentPos + v);
}

sf::Vector2f Entity::getPos()
{
	return sprite.getPosition();
}

void Entity::changeVelocity(sf::Vector2f& v)
{
	velocity += v;
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
}