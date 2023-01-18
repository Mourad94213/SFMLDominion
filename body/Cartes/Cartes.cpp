#include <iostream>
#include "../../header/Cartes/Cartes.hpp"
#include <SFML/Graphics.hpp>


Cartes::Cartes(std::string nom, int cout)
{
    this->nom=nom;
    this->cout=cout;
    this->Phycarte = new sf::RectangleShape(sf::Vector2f(220,360));
    this->textCarte = new sf::Texture();
    this->textCarte->loadFromFile("assets/Cartes/Carte.png");
    this->Phycarte->setTexture(textCarte);
}

Cartes::~Cartes()
{

}
