#include "../../header/Cartes/Mine.hpp"


void Mine::appliquer_effet()
{
}
Mine::Mine(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(0, 3*2760/5, 2415 / 7, 2760 / 5));
    }

Mine::~Mine()
{
}
