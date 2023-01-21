#include "../../header/Cartes/Laboratory.hpp"

void Laboratory::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    j->action++;
    j->piocher();
    j->piocher();
}

Laboratory::Laboratory(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->at(0)->setTextureRect(sf::IntRect(3*2415/7, 2*2760/5, 2415 / 7, 2760 / 5));
    }

Laboratory::~Laboratory()
{
}
