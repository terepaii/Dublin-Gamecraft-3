#ifndef SCROLLINGBG_H_
#define SCROLLINGBG_H_

#include <SFML\Graphics.hpp>

class ScrollingBG
{
public:
	ScrollingBG();
	~ScrollingBG();

	void Load();
	void Update();
	void Draw(sf::RenderWindow& window);

private:

	sf::Texture bTexture;
	sf::Sprite background;
	sf::View view;
	sf::Vector2f position;
	sf::RectangleShape rect;

};
#endif