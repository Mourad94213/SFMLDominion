#include "../../header/Cartes/Woodcutter.hpp"


void Woodcutter::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    j->nbrachat++;
    j->achat+=2;
}

Woodcutter::Woodcutter(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTextureRect(sf::IntRect(5*2415/7, 4*2760/5, 2415 / 7, 2760 / 5));
        }
    }

Woodcutter::~Woodcutter()
{
}
