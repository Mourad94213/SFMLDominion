#include "../../header/Cartes/Market.hpp"


void Market::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    j->achat++;
    j->action++;
    j->piocher();
    if(j->Main.at(j->Main.size()-1).first->nom=="Cuivre"){
        j->achat++;
    }
    else if(j->Main.at(j->Main.size()-1).first->nom=="Argent"){
        j->achat+=2;
    }
    else if(j->Main.at(j->Main.size()-1).first->nom=="Or"){
        j->achat+=3;
    }
    j->nbrachat++;
}

Market::Market(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTextureRect(sf::IntRect(1*2415/7, 3*2760/5, 2415 / 7, 2760 / 5));
        }
    }

Market::~Market()
{
}
