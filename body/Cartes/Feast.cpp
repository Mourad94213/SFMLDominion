#include <iostream>
#include "../../header/Cartes/Feast.hpp"
#include <string>


void Feast::appliquer_effet()
{
}
Feast::Feast(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(5*2415/7, 2*2760/5, 2415 / 7, 2760 / 5));
    }

Feast::~Feast()
{
}
