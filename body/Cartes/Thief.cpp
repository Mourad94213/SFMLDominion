#include "../../header/Cartes/Thief.hpp"

void Thief::appliquer_effet()
{
}
Thief::Thief(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(6*2415/7, 0, 2415 / 7, 2760 / 5));
    }

Thief::~Thief()
{
}
