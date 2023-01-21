#include "../../header/Cartes/Moat.hpp"

void Moat::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    j->piocher();
    j->piocher();
    /* AJOUTER DANS TOUTES LES CARTES ACTIONS - ATTAQUES
        for(Joueur *h : alljoueur){
            for(Cartes *c : h->Main){
                if(c->nom!="Moat"){
                    //Attaque
                }
            }
        }
    */
}

Moat::Moat(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->at(0)->setTextureRect(sf::IntRect(3*2415/7, 3*2760/5, 2415 / 7, 2760 / 5));
    }

Moat::~Moat()
{
}
