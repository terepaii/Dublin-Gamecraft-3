#include "Entity.h"
#include <iostream>
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
	bBox.setPosition(getPos());
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

bool Entity::collision(Entity e)
{
	if(r < e.l || l > e.r ||
	   t > e.b || b < e.t)
	{
		return false;
	}
	return true;
}

void Entity::update()
{
	updateBBox();
}

void Entity::updateBBox()
{
	b = bBox.getPosition().y + bBox.getSize().y;
	l = bBox.getPosition().x;
	r = bBox.getPosition().x + bBox.getSize().x;
	t = bBox.getPosition().y;
}