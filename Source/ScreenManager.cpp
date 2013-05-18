#include "ScreenManager.h"

ScreenManager::ScreenManager()
{}

ScreenManager::~ScreenManager()
{
	//Delete all pointers.
}

void ScreenManager::Load(std::string& filepath)
{
	//load BG Image from file, set it to the texture, then add texture to sprite.7
	this->mainMenuFont.loadFromFile(filepath);

	menuItems.push_back(sf::Text("Play", mainMenuFont));
	menuItems.at(0).setPosition(sf::Vector2f(0,0));
	menuItems.at(0).setStyle(sf::Text::Bold);
	menuItems.at(0).setColor(sf::Color::Blue);

	menuItems.push_back(sf::Text("Credits", mainMenuFont));
	menuItems.at(0).setPosition(sf::Vector2f(0,100));
	menuItems.at(0).setStyle(sf::Text::Bold);
	menuItems.at(0).setColor(sf::Color::Blue);

	menuItems.push_back(sf::Text("Quit", mainMenuFont));
	menuItems.at(0).setPosition(sf::Vector2f(0,300));
	menuItems.at(0).setStyle(sf::Text::Bold);
	menuItems.at(0).setColor(sf::Color::Blue);

	//Play, Credits, Exit
}
void ScreenManager::Update(InputHandler& input)
{
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		menuItems.at(menuItemIndex).setColor(sf::Color::Blue);
		this->menuItemIndex++;
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		menuItems.at(menuItemIndex).setColor(sf::Color::Red);
		this->menuItemIndex--;
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
	{
		selectedIndex = menuItemIndex;
	}

	if(menuItemIndex < 0 || menuItems.size() < menuItemIndex)
	{
		menuItemIndex = 0;
	}

	menuItems.at(menuItemIndex).setColor(sf::Color::Red);
}

void ScreenManager::Draw(sf::RenderWindow& window)
{
	window.clear();
	window.draw(bacgroundSprite);
	for(it = menuItems.begin(); it != menuItems.end(); it++)
	{
		window.draw(*it);
	}
	window.display();
	// draw image at postion of menuItems[menuItemIndex] to show what you have currently highlighted.
}

std::string ScreenManager::selectedAction()
{
	return menuItems.at(selectedIndex).getString();
}