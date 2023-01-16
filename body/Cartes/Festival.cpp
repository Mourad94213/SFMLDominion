#include "../../header/Cartes/Festival.hpp"


void Festival::appliquer_effet(){}

Festival::Festival(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(2*2415/7, 2*2760/5, 2415 / 7, 2760 / 5));
    }

Festival::~Festival()
{
}
