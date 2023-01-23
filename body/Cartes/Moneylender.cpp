#include "../../header/Cartes/Moneylender.hpp"

void Moneylender::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    for(int i=0; j->Main.size(); i++){
        if(j->Main.at(i).first->nom=="Cuivre"){
            j->Main.erase(std::find(std::begin(j->Main), std::end(j->Main), j->Main.at(i)));
            j->achat+=3;
            break;
        }
    }
}

Moneylender::Moneylender(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTextureRect(sf::IntRect(4*2415/7, 4*2760/5, 2415 / 7, 2760 / 5));
        }
    }

Moneylender::~Moneylender()
{
}
