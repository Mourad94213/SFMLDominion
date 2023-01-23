#include "../../header/Cartes/Village.hpp"

void Village::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    j->piocher();
    j->achat+=2;
}

Village::Village(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        for(int i=0; i<this->Phycarte->size(); i++){
            this->Phycarte->at(i)->setTextureRect(sf::IntRect(4*2415/7, 3*2760/5, 2415 / 7, 2760 / 5));
        }
    }

Village::~Village()
{
}
