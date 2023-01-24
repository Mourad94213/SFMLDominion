#include "../../header/Cartes/Laboratory.hpp"

void Laboratory::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    j->action++;
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
}

Laboratory::Laboratory(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTextureRect(sf::IntRect(3*2415/7, 2*2760/5, 2415 / 7, 2760 / 5));
        }
    }

Laboratory::~Laboratory()
{
}
