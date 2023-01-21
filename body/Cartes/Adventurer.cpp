#include "../../header/Cartes/Adventurer.hpp"


void Adventurer::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    int compte=0;
    while(compte<2){
        j->piocher();
        if(j->Main.at(j->Main.size()-1).first->nom == "Cuivre" || j->Main.at(j->Main.size()-1).first->nom == "Argent" || j->Main.at(j->Main.size()-1).first->nom == "Or"){
            compte++;
        }
        else{
            j->defausser(j->Main.at(j->Main.size()-1));
        }
    }
}


Adventurer::Adventurer(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->at(0)->setTextureRect(sf::IntRect(6*2415/7, 1*2760/5, 2415 / 7, 2760 / 5));
    }

Adventurer::~Adventurer()
{
}