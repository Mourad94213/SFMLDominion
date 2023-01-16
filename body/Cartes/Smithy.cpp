#include "../../header/Cartes/Smithy.hpp"

void Smithy::appliquer_effet()
{
}
Smithy::Smithy(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(4*2415/7, 0, 2415 / 7, 2760 / 5));
    }

Smithy::~Smithy()
{
}
