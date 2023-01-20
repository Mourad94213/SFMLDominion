#include "../../header/Cartes/Remodel.hpp"

Remodel::Remodel(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti)
{
    this->Phycarte->setTextureRect(sf::IntRect(0, 0, 2415 / 7, 2760 / 5));
}

Remodel::~Remodel()
{
}

void Remodel::appliquer_effet(Joueur *j, Cartes *c)
{
    //click sur la carte
    j->Main.erase(std::find(std::begin(j->Main), std::end(j->Main), c));
    int temp=j->achat;
    j->achat=c->cout+2;
    j->acheter();
    j->achat=temp;
}
