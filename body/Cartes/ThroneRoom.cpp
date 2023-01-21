#include "../../header/Cartes/ThroneRoom.hpp"

void ThroneRoom::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    // a voir
}

ThroneRoom::ThroneRoom(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->at(0)->setTextureRect(sf::IntRect(0, 1*2760/5, 2415 / 7, 2760 / 5));
    }

ThroneRoom::~ThroneRoom()
{
}
