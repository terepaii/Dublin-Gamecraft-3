#ifndef BLOCK_H
#define BLOCK_H

#include "Entity.h"

class Block : public Entity
{
public:
	Block(sf::Texture& bTexture);
	~Block();
};

#endif