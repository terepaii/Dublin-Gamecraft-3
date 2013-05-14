#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics.hpp>
#include "VectorFuncs.h"

class Entity
{
public:
	Entity();
	Entity(sf::Texture& eTexture);
	~Entity(void);

	void updatePos();
	void setPos(float x, float y);
	sf::Vector2f getPos();

	void setVelocity(float x, float y);
	sf::Vector2f getVelocity();

	void update();
	void draw(sf::RenderWindow& rWindow);
	
protected:
	sf::Vector2f velocity;
	sf::Texture eTexture;
	sf::Sprite sprite;
};

#endif