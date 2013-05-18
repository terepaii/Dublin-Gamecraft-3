#include "InputHandler.h"

InputHandler::InputHandler()
{
}

InputHandler::~InputHandler()
{
}

sf::Vector2i InputHandler::getMousePosition(const sf::RenderWindow& window)
{
	return sf::Mouse::getPosition(window);
}

sf::Vector2i InputHandler::getMouseDirection(const sf::RenderWindow& window, const sf::Vector2i v)
{
	return sf::Vector2i(VectorFuncs::getDirection(sf::Vector2f(this->getMousePosition(window)), sf::Vector2f(v)));
}

sf::Vector2i InputHandler::getLeftJoystickDirection(const int joystickID)
{
	return sf::Vector2i(int(sf::Joystick::getAxisPosition(joystickID, sf::Joystick::U)), 
		int(sf::Joystick::getAxisPosition(joystickID, sf::Joystick::R)));
}

bool InputHandler::clicked(sf::RenderWindow &window)
{
	return sf::Mouse::isButtonPressed(sf::Mouse::Left);
}

void InputHandler::updatePlayerMovement(Player& player)
{
	// Example of how the input to move could be done
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		player.setVelocity(1, 0);
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		player.setVelocity(-1, 0);
	}
	else
	{
		player.setVelocity(0, 0);
	}
}

bool InputHandler::backPressed(const int joystickID)
{
	return sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) || 
		sf::Joystick::isButtonPressed(1, sf::Joystick::Y);
}
