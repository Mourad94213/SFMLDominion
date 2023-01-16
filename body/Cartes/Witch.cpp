#include "../../header/Cartes/Witch.hpp"

void Witch::appliquer_effet()
{
}
Witch::Witch(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(4*2415/7, 2*2760/5, 2415 / 7, 2760 / 5));
    }

Witch::~Witch()
{
}
