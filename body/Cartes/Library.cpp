#include "../../header/Cartes/Library.hpp"



void Library::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    int compte = 0;
    while(j->Main.size()<7){
        j->piocher();
        compte++;
    }
    if(j->Main.at(j->Main.size()-1).first->nom!="Duche" || j->Main.at(j->Main.size()-1).first->nom!="Province" || j->Main.at(j->Main.size()-1).first->nom!="Domaine"
        || j->Main.at(j->Main.size()-1).first->nom!="Cuivre" || j->Main.at(j->Main.size()-1).first->nom!="Argent" || j->Main.at(j->Main.size()-1).first->nom!="Or" 
        || j->Main.at(j->Main.size()-1).first->nom!="Malediction"){
            // Click
            j->defausserplateau(j->Main.at(j->Main.size()-1));
    }
}

Library::Library(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTextureRect(sf::IntRect(2*2415/7, 3*2760/5, 2415 / 7, 2760 / 5));
        }
    }

Library::~Library()
{
}
