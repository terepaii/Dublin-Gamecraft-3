#include "ScrollingBG.h"

void ScrollingBG::Load()
{
	bTexture.loadFromFile("background.png");
	background.setTexture(bTexture);
	view.reset(sf::FloatRect(0, 0, 800, 600));
	view.setViewport(sf::FloatRect(0, 0, 1.0f, 1.0f));
	rect.setSize(sf::Vector2f(20, 20));
	rect.setFillColor(sf::Color::Blue);
}
void ScrollingBG::Update()
{
	position = sf::Vector2f(rect.getPosition().x + 10 - (800 / 2), rect.getPosition().y + 10 - (600 / 2));

	if(position.x < 0)
		position.x = 0;

	rect.move(1.0f, 0);
	view.reset(sf::FloatRect(position.x, position.y, 800, 600));
}

void ScrollingBG::Draw(sf::RenderWindow& window)
{
	window.clear(); 
	window.setView(view); 
	window.draw(background);
	window.draw(rect);
	window.setView(window.getDefaultView());
	window.display();
}