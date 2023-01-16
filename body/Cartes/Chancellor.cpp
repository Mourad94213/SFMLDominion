#include "../../header/Cartes/Chancellor.hpp"

void Chancellor::appliquer_effet()
{
}


Chancellor::Chancellor(
    std::string name, int price, int money,int buy, int wdraw, int acti) : 
    Royaume(name, price, money, wdraw, buy, acti)
    {
        this->Phycarte->setTextureRect(sf::IntRect(5*2415/7, 1*2760/5, 2415 / 7, 2760 / 5));
    }

Chancellor::~Chancellor() {
}