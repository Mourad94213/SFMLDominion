#include "../../header/Cartes/Smithy.hpp"

void Smithy::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    for(int i=0; i<3; i++){
        j->piocher();
    }
    for(int i=j->Main.size()-1; i>j->Main.size()-4; i--){
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
}

Smithy::Smithy(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTextureRect(sf::IntRect(4*2415/7, 0, 2415 / 7, 2760 / 5));
        }
    }

Smithy::~Smithy()
{
}
