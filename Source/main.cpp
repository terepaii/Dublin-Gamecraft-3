#include<SFML/Graphics.hpp>

int main()
{
	sf::Vector2i screenDimensions(800, 600);
	sf::RenderWindow window(sf::VideoMode(screenDimensions.x, screenDimensions.y), "Render Window");

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
		window.display();
		window.clear();
	}
}