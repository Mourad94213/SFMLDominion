#include "../../header/Cartes/Moneylender.hpp"

void Moneylender::appliquer_effet(Joueur *j)
{
    for(Cartes *c : j->Main){
        if(c->nom=="Cuivre"){
            j->Main.erase(std::find(std::begin(j->Main), std::end(j->Main), c));
            j->achat++;
            break;
        }
    }
}

Moneylender::Moneylender(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(4*2415/7, 4*2760/5, 2415 / 7, 2760 / 5));
    }

Moneylender::~Moneylender()
{
}
