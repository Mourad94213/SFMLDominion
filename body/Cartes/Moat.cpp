#include "../../header/Cartes/Moat.hpp"

void Moat::appliquer_effet()
{
}
Moat::Moat(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(3*2415/7, 3*2760/5, 2415 / 7, 2760 / 5));
    }

Moat::~Moat()
{
}
