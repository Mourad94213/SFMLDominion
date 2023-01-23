#include "../../header/Cartes/Workshop.hpp"


void Workshop::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    int temp = j->achat;
    j->achat = 4;
    j->acheter();
    j->achat=temp;
}

Workshop::Workshop(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTextureRect(sf::IntRect(2*2415/7, 4*2760/5, 2415 / 7, 2760 / 5));
        }
    }

Workshop::~Workshop()
{
}
