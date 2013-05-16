#include "Block.h"

Block::Block(sf::Texture& bTexture)
{
	sprite.setTexture(bTexture);
	bBox.setSize(sf::Vector2f((float)bTexture.getSize().x, 
							  (float)bTexture.getSize().y));
}
Block::~Block()
{
}