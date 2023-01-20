#include "../../header/Cartes/Witch.hpp"

void Witch::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    j->piocher();
    j->piocher();
    for(Joueur* h : alljoueur){
        if(h->getid!=j->getid){
            h->Main.push_back(Partie::AllCarte.at(6).first);
            Partie::AllCarte.at(6).second--;
        }
    }
}

Witch::Witch(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(4*2415/7, 2*2760/5, 2415 / 7, 2760 / 5));
    }

Witch::~Witch()
{
}
