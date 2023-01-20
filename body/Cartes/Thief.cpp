#include "../../header/Cartes/Thief.hpp"

void Thief::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    // Affiche tt les cartes des adv
    for(Joueur *h : alljoueur){
        for(Cartes *c : h->Main){
            //
            if(c->nom=="Cuivre" || c->nom=="Argent" || c->nom=="Or"){
                // draw cartes
            }
        }
    }
}

Thief::Thief(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(6*2415/7, 0, 2415 / 7, 2760 / 5));
    }

Thief::~Thief()
{
}
