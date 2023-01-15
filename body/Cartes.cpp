#include <iostream>
#include "Cartes.hpp"
#include <SFML/Graphics.hpp>


Cartes::Cartes(std::string nom, int cout)
{
    this->Phycarte = new sf::RectangleShape(sf::Vector2f(220,360));
    this->textCarte = new sf::Texture();
    this->textCarte->loadFromFile("Carte.png");
    this->Phycarte->setTexture(textCarte);
}

Cartes::~Cartes()
{

}
