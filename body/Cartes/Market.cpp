#include "../../header/Cartes/Market.hpp"


void Market::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    j->achat++;
    j->action++;
    j->piocher();
    j->nbrachat;
}

Market::Market(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->at(0)->setTextureRect(sf::IntRect(1*2415/7, 3*2760/5, 2415 / 7, 2760 / 5));
    }

Market::~Market()
{
}
