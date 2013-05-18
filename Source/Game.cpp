#include "Game.h"

Game::Game()
{
	Load();
}

Game::~Game()
{

}

void Game::Load()
{
	window.setFramerateLimit(60);
	window.create(sf::VideoMode(800, 600), "NewGame");
	window.setKeyRepeatEnabled(false);

	this->credits.Load(std::string("filepath needed"));
	this->mainMenu.Load(std::string("filepath needed"));
}

void Game::Start()
{
	gameState = Game::SPLASH;

	while(!exitGame())
	{
		mainGameLoop();
	}
	window.close();
}

void Game::mainGameLoop()
{
	if(gameState == Game::SPLASH)
	{
		showSplashScreen(window, std::string("filepath"));
		gameState = Game::MAINMENU;
	}
	if(gameState == Game::MAINMENU)
	{
		showMainMenu(window);
	}
	if(gameState == Game::LEVEL1)
	{
		//level1
		gameState = Game::LEVEL2;
	}
	if(gameState == Game::LEVEL2)
	{
		//level2
		gameState = Game::LEVEL3;
	}
	if(gameState == Game::LEVEL3)
	{
		//level3
		//Finished
	}
	if(gameState == Game::CREDITS)
	{
		showCreditsMenu(window);
		gameState = Game::MAINMENU;
	}
	if(gameState == Game::GAME_OVER)
	{
		
	}
	if(gameState == Game::EXIT)
	{
		
	}
}

void Game::showSplashScreen(sf::RenderWindow& window, std::string& filepath)
{
	//Draw & Update
	splashScreen.Show(window, std::string(filepath), input);
}

void Game::showMainMenu(sf::RenderWindow& window)
{
	//Update
	mainMenu.Update(input);

	//Menu Logic
	menuSelection = mainMenu.selectedAction();
	if(menuSelection.compare("Play"))
	{
		gameState = Game::LEVEL1;
	}
	else if(menuSelection.compare("Credits"))
	{
		gameState = Game::CREDITS;
	}
	else if(menuSelection.compare("Exit"))
	{
		gameState = Game::EXIT;
	}

	//Draw
	window.clear();
	mainMenu.Draw(window);
	window.display();
}

void Game::showCreditsMenu(sf::RenderWindow& window)
{
	//Update
	credits.Update(input);

	//Draw
	window.clear();
	this->credits.Draw(window);
	window.display();
}

bool Game::exitGame()
{
	return false;
}