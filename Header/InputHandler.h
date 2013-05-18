#ifndef INPUTHANDLER_H_
#define INPUTHANDLER_H_

#include "VectorFuncs.h"
#include "Player.h"

class InputHandler
{
public:
	InputHandler();
	~InputHandler();

	void updatePlayerMovement(Player& player);

	sf::Vector2i getMousePosition(const sf::RenderWindow& window);
	sf::Vector2i getMouseDirection(const sf::RenderWindow& window, const sf::Vector2i v);
	sf::Vector2i getLeftJoystickDirection(const int joystickID);
	bool clicked(sf::RenderWindow &window);
	bool backPressed(const int joystickID);

protected:

private:

};
#endif