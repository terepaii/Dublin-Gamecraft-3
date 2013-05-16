#include "Platform.h"

Platform::Platform(sf::Texture pTexture)
{
	sprite.setTexture(pTexture);
	bBox.setSize(sf::Vector2f((float)pTexture.getSize().x, 
							  (float)pTexture.getSize().y));
}

Platform::~Platform()
{
}