#ifndef SPLASHSCREEN_H_
#define SPLASHSCREEN_H_

#include "InputHandler.h"

class SplashScreen
{
public:
	void Show(sf::RenderWindow& window, std::string& filepath, InputHandler &input);
	void fadeSpriteIn(sf::RenderWindow & renderWindow, sf::Sprite& sprite);
	void fadeSpriteOut(sf::RenderWindow & renderWindow, sf::Sprite& sprite);

private:
	sf::Sprite splashSprite;
	sf::Texture splashTexture;
	bool fadeIn, stopSplash;
};

#endif