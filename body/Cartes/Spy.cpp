#include "../../header/Cartes/Spy.hpp"

void Spy::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    j->piocher();
    j->action++;
    for(Joueur *h : alljoueur){
        if(h->getid()!=j->getid()){
            h->Defausse.push_back(h->Deck.at(0));
            h->Deck.erase(std::begin(h->Deck));
        }
    }
}

Spy::Spy(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(5*2415/7, 3*2760/5, 2415 / 7, 2760 / 5));
    }

Spy::~Spy()
{
}
