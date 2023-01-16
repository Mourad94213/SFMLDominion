#include "../../header/Cartes/Market.hpp"


void Market::appliquer_effet()
{
}
Market::Market(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(1*2415/7, 3*2760/5, 2415 / 7, 2760 / 5));
    }

Market::~Market()
{
}
