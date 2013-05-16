#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"

class Player : public Entity
{
public:
	Player(sf::Texture& pTexture);
	~Player();
private:
	// Assumes a one row sprite sheet
	void animate(int frames, float frameWidth);
};

#endif