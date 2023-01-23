#include <iostream>
#include "../../header/Cartes/Chapel.hpp"
#include <string>

void Chapel::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    //Code dans partie
}

Chapel::Chapel(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTextureRect(sf::IntRect(5*2415/7, 0, 2415 / 7, 2760 / 5));
        }
    }

Chapel::~Chapel()
{
}
