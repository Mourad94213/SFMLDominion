#include "../../header/Cartes/Remodel.hpp"

Remodel::Remodel(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti)
{
    for(int i=0; i<this->Phycarte->size(); i++){
    this->Phycarte->at(i)->setTextureRect(sf::IntRect(0, 0, 2415 / 7, 2760 / 5));
    }
}

Remodel::~Remodel()
{
}

void Remodel::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    //click sur la carte
    j->Main.erase(std::find(std::begin(j->Main), std::end(j->Main), j->plateau.at(j->plateau.size()-1)));
    int temp=j->achat;
    j->achat=j->plateau.at(j->plateau.size()-1).first->cout+2;
    j->acheter();
    j->achat=temp;
}
