#include "ScreenManager.h"

void ScreenManager::Load()
{
	//load BG Image from file, set it to the texture, then add texture to sprite.


	//Play, Credits, Exit
}
void ScreenManager::Update(InputHandler& input)
{
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		this->menuItemIndex++;
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		this->menuItemIndex--;
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
	{
		//menuItems[menuItemIndex] selected
	}

	if(menuItemIndex < 0 || menuItems.size() < menuItemIndex)
	{
		menuItemIndex = 0;
	}
}

void ScreenManager::Draw(sf::RenderWindow& window)
{
	window.draw(bacgroundSprite);
	for(it = menuItems.begin(); it != menuItems.end(); it++)
	{
		//draw text
	}
	// draw image at postion of menuItems[menuItemIndex] to show what you have currently highlighted.
}