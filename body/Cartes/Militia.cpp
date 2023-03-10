#include "../../header/Cartes/Militia.hpp"


void Militia::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    j->achat++;
    for(Joueur *h : alljoueur){
        while(h->Main.size()>3){
            h->defausserplateau(h->Main.at(0));
        }
    }
}

Militia::Militia(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        for(int i=0; i<this->Phycarte->size(); i++){
            this->Phycarte->at(i)->setTextureRect(sf::IntRect(3*2415/7, 4*2760/5, 2415 / 7, 2760 / 5));
        }
    }

Militia::~Militia()
{
}
