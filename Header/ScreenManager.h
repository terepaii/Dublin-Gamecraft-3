#ifndef SCREENMANAGER_H_
#define SCREENMANAGER_H_

#include <SFML\Graphics.hpp>
#include "InputHandler.h"
using std::vector;

class ScreenManager
{
public:
	ScreenManager();
	~ScreenManager();

	void Load(std::string& filepath);
	void Update(InputHandler& input);
	void Draw(sf::RenderWindow& window);
	std::string selectedAction();

private:

	int menuItemIndex;
	sf::Sprite bacgroundSprite;
	sf::Texture backgroundTexture;

	sf::Font mainMenuFont;
	unsigned int fontSize;

	int selectedIndex;
	std::vector<sf::Text>::iterator it;
	std::vector<sf::Text> menuItems;

};
#endif