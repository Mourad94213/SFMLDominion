#include "../../header/Cartes/Mine.hpp"


void Mine::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    for(int i=0; i<j->Main.size(); i++){
        if(j->Main.at(i).first->nom == "Cuivre" || j->Main.at(i).first->nom=="Argent" || j->Main.at(i).first->nom=="Or"){
            int temp=j->achat;
            j->achat=j->Main.at(i).first->cout+3;
            j->acheter();
            j->achat=temp;
        }
    }
}

Mine::Mine(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTextureRect(sf::IntRect(0, 3*2760/5, 2415 / 7, 2760 / 5));
        }
    }

Mine::~Mine()
{
}
