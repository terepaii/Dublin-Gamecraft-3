#ifndef CREDITS_MENU_
#define CREDITS_MENU_

#include "InputHandler.h"

class CreditsMenu
{
public:
	CreditsMenu();
	~CreditsMenu();

	void Load(std::string& filepath);
	void Update(InputHandler& input);
	void Draw(sf::RenderWindow& window);
	bool backToMainMenu();

private:
	sf::Texture creditsTexture;
	sf::Sprite creditsSprite;
	bool goToMM;
};
#endif