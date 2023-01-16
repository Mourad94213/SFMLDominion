#include "../../header/Cartes/Library.hpp"



void Library::appliquer_effet()
{
}
Library::Library(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(2*2415/7, 3*2760/5, 2415 / 7, 2760 / 5));
    }

Library::~Library()
{
}
