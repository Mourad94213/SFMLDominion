#include "../../header/Cartes/Militia.hpp"


void Militia::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    j->achat++;
    for(Joueur *h : alljoueur){
        while(h->Main.size()>3){
            h->defausser(h->Main.at(0));
        }
    }
}

Militia::Militia(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->at(0)->setTextureRect(sf::IntRect(3*2415/7, 4*2760/5, 2415 / 7, 2760 / 5));
    }

Militia::~Militia()
{
}
