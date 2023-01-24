#include "../../header/Cartes/Moat.hpp"

void Moat::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    j->piocher();
    j->piocher();
    for(int i=j->Main.size()-1; i>j->Main.size()-3; i--){
        if(j->Main.at(i).first->nom=="Cuivre"){
            j->achat++;
        }
        else if(j->Main.at(i).first->nom=="Argent"){
            j->achat+=2;
        }
        else if(j->Main.at(i).first->nom=="Or"){
            j->achat+=3;
        }
    }
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
        for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTextureRect(sf::IntRect(3*2415/7, 3*2760/5, 2415 / 7, 2760 / 5));
        }
    }

Moat::~Moat()
{
}
