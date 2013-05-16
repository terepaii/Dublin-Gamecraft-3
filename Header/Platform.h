#ifndef PLATFORM_H
#define PLATFORM_H

#include "Entity.h"

class Platform : public Entity
{
public:
	Platform(sf::Texture pTexture);
	~Platform();
};

#endif