#include "../../header/Cartes/Gardens.hpp"


int Gardens::appliquer_effet(Joueur *j)
{
    int final = j->Deck.size()/10;
    return final;
}

Gardens::Gardens(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(3*2415/7, 0, 2415 / 7, 2760 / 5));
    }

Gardens::~Gardens()
{
}
