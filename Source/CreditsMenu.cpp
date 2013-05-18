#include "CreditsMenu.h"

CreditsMenu::CreditsMenu()
{

}

CreditsMenu::~CreditsMenu()
{

}

void CreditsMenu::Load(std::string& filepath)
{
	creditsTexture.loadFromFile(filepath);
	creditsSprite.setTexture(creditsTexture);
}

void CreditsMenu::Update(InputHandler& input)
{
	if(input.backPressed(1))
	{
		goToMM = true;
	}
}

void CreditsMenu::Draw(sf::RenderWindow& window)
{
	window.draw(creditsSprite);
}

bool CreditsMenu::backToMainMenu()
{
	return this->goToMM;
}