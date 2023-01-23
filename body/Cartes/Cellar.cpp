#include <iostream>
#include "../../header/Cartes/Cellar.hpp"
#include <string>

void Cellar::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    j->action++;
    // CODE DANS PARTIE
}

Cellar::Cellar(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTextureRect(sf::IntRect(0, 4*2760/5, 2415 / 7, 2760 / 5));
        }
    }

Cellar::~Cellar()
{
}
