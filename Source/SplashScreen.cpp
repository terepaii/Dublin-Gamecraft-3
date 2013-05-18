#include "SplashScreen.h"

void SplashScreen::Show(sf::RenderWindow& window, std::string& filepath , InputHandler &input)
{	
	splashTexture.loadFromFile(filepath);
	splashSprite.setTexture(splashTexture);
	splashSprite.setScale((float)window.getSize().x / splashSprite.getTexture()->getSize().x, (float)window.getSize().y / splashSprite.getTexture()->getSize().y);
	splashSprite.setColor(sf::Color(splashSprite.getColor().r, splashSprite.getColor().g, splashSprite.getColor().b,0));

	fadeIn = true;
	stopSplash = false;

	
	while(true)
	{
		if(input.clicked(window) || stopSplash)
		{
			break;
		}

		window.clear();
		
		if(fadeIn == true)
		{
			fadeSpriteIn(window, splashSprite);
		}else{
			fadeSpriteOut(window,splashSprite);
		}
		
		window.draw(splashSprite);
		window.display();
		
	}
}

void SplashScreen::fadeSpriteIn(sf::RenderWindow & renderWindow, sf::Sprite& sprite) 
{
    if((int)sprite.getColor().a < 255)
	{
		sf::Color color = sprite.getColor();
		color.a++;
		sprite.setColor(color);
	}else{
		fadeIn = false;
	}
}

void SplashScreen::fadeSpriteOut(sf::RenderWindow & renderWindow, sf::Sprite& sprite) 
{
	if(sprite.getColor().a > 0)
	{
		sf::Color color = sprite.getColor();
		color.a--;
		sprite.setColor(color);
	}else{
		stopSplash = true;
	}
}