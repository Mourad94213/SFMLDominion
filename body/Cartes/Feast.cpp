#include <iostream>
#include "../../header/Cartes/Feast.hpp"
#include <string>


void Feast::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    int index = 0;
    for(int i=0; i<j->Main.size();i++){
        if(j->Main.at(i).first->nom=="Feast"){
            index = i;
            break;
        }
    }
    j->Main.erase(std::find(std::begin(j->Main), std::end(j->Main), std::pair<Cartes*,sf::RectangleShape*>(j->Main.at(index).first, j->Main.at(index).second)));
    int achatprov=5;
    int temp=j->achat;
    j->achat=achatprov;
    j->acheter();
    j->achat=temp;
}

Feast::Feast(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->at(0)->setTextureRect(sf::IntRect(5*2415/7, 2*2760/5, 2415 / 7, 2760 / 5));
    }

Feast::~Feast()
{
}
