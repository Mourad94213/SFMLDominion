#include "Partie.hpp"


void Partie::initVariables()
{
    Remodel *carte1 = new Remodel("a", 1, 1, 1, 1, 1);
    this->AllCarte.push_back(carte1);
}

void Partie::initWindow()
{
    this->videoMode.height = 600;
	this->videoMode.width = 800;
	this->window = new sf::RenderWindow(this->videoMode, "Dominion", sf::Style::Titlebar | sf::Style::Close);
	this->window->setFramerateLimit(60);
}

void Partie::initFonts()
{

}

void Partie::initText()
{

}


Partie::Partie()
{
    this->AllCarte = std::vector<Cartes*>();
    this->initVariables();
	this->initWindow();
	this->initFonts();
	this->initText();
}

Partie::~Partie()
{
    delete this->window;
}

void Partie::pollEvents()
{
    while (this->window->pollEvent(this->ev))
	{
		switch (this->ev.type)
		{
		case sf::Event::Closed:
			this->window->close();
			break;
		case sf::Event::KeyPressed:
			if (this->ev.key.code == sf::Keyboard::Escape)
				this->window->close();
			break;
		}
	}
}

void Partie::run()
{
    while(this->window->isOpen()){
        this->pollEvents();
        this->window->clear();
        this->window->draw(*(this->AllCarte.at(0)->Phycarte));
        this->window->display();
    }
}
