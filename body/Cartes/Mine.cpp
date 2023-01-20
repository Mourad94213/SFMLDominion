#include "../../header/Cartes/Mine.hpp"


void Mine::appliquer_effet(Joueur *j)
{
    for(Cartes *c : j->Main){
        if(c->nom == "Cuivre" || c->nom=="Argent" || c->nom=="Or"){
            int temp=j->achat;
            j->achat=c->cout+3;
            j->acheter();
            j->achat=temp;
        }
    }
}

Mine::Mine(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(0, 3*2760/5, 2415 / 7, 2760 / 5));
    }

Mine::~Mine()
{
}
