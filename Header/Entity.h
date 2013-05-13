#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics.hpp>
#include "VectorFuncs.h"

class Entity
{
public:
	Entity();
	Entity(sf::Texture eTexture);
	~Entity(void);

	void changePos(sf::Vector2f& v);
	sf::Vector2f getPos();

	void changeVelocity(sf::Vector2f& v);
	sf::Vector2f getVelocity();

	void update();
	void draw(sf::RenderWindow& rWindow);
	
private:
	sf::Vector2f velocity;
	sf::Texture eTexture;
	sf::Sprite sprite;
};

#endif