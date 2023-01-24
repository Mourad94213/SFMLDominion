#include <iostream>
#include "../../header/Cartes/CouncilRoom.hpp"
#include <string>

void CouncilRoom::appliquer_effet(Joueur* j, std::vector<Joueur*> alljoueur)
{
    for(int i = 0; i<4; i++){
        j->piocher();
    }
    for(int i=j->Main.size()-1; i>j->Main.size()-5; i--){
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
    j->nbrachat++;
    for(Joueur *h : alljoueur){
        if(h!=j){
            h->piocher();
        }
    }
}

CouncilRoom::CouncilRoom(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTextureRect(sf::IntRect(1*2415/7, 1*2760/5, 2415 / 7, 2760 / 5));
        }
    }

CouncilRoom::~CouncilRoom()
{
}
