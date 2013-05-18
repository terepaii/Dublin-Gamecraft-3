#ifndef GAME_H_
#define GAME_H_

#include "ScreenManager.h"
#include "SplashScreen.h"
#include "CreditsMenu.h"

#include "InputHandler.h"

class Game
{
public:

	Game();
	~Game();

	static const enum GameState{SPLASH,
								MAINMENU,
								LEVEL1,
								LEVEL2,
								LEVEL3,
								CREDITS,
								GAME_OVER,
								EXIT};
	void Start();

private:

	void Load();

	void showSplashScreen(sf::RenderWindow& window, std::string& filepath);
	void showMainMenu(sf::RenderWindow& window);
	void showCreditsMenu(sf::RenderWindow& window);

	void mainGameLoop();
	bool exitGame();

	sf::RenderWindow window;
	GameState gameState;
	std::string menuSelection;

	SplashScreen splashScreen;
	InputHandler input;
	CreditsMenu credits;
	ScreenManager mainMenu;
};
#endif