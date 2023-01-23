#include "../../header/Cartes/Gardens.hpp"


void Gardens::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    //
}

Gardens::Gardens(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTextureRect(sf::IntRect(3*2415/7, 0, 2415 / 7, 2760 / 5));
        }
    }

Gardens::~Gardens()
{
}
