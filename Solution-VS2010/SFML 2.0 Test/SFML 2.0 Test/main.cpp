#include<SFML/Graphics.hpp>
#include <iostream>

#include "Player.h"
int main()
{
	sf::Vector2i screenDimensions(800, 600);
	sf::RenderWindow window(sf::VideoMode(screenDimensions.x, screenDimensions.y), "Render Window");

	sf::Texture texture;
	if(!texture.loadFromFile("image.png"))
		std::cout << "Can't load" << std::endl;

	Player player(texture);

	while(window.isOpen())
	{
		sf::Event Event;
		while(window.pollEvent(Event))
		{
			switch(Event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}
			
		}
		player.update();
		std::cout << player.getPos().x << std::endl;
		player.draw(window);
		window.display();
		window.clear();
	}
}