#include "../../header/Cartes/Chancellor.hpp"

void Chancellor::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{   
    j->achat+=2;
    for(auto c : j->Deck){
        j->Defausse.push_back(c);
        j->Deck.erase(std::find(std::begin(j->Deck), std::end(j->Deck), c));
    }
}


Chancellor::Chancellor(
    std::string name, int price, int money,int buy, int wdraw, int acti) : 
    Royaume(name, price, money, wdraw, buy, acti)
    {
        for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTextureRect(sf::IntRect(5*2415/7, 1*2760/5, 2415 / 7, 2760 / 5));
        }
    }

Chancellor::~Chancellor() {
}