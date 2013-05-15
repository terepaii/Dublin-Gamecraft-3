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

	void Load();
	void Update(InputHandler& input);
	void Draw(sf::RenderWindow& window);

private:

	int menuItemIndex;
	sf::Sprite bacgroundSprite;
	sf::Texture backgroundTexture;

	std::map<sf::Text, sf::Vector2i>::iterator it;
	std::map<sf::Text, sf::Vector2i> menuItems;

};
#endif