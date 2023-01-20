#include "../../header/Cartes/Library.hpp"



void Library::appliquer_effet(Joueur *j)
{
    int compte = 0;
    while(j->Main.size()<7){
        j->piocher();
        compte++;
    }
    if(j->Main.at(j->Main.size()-1)->nom!="Duche" || j->Main.at(j->Main.size()-1)->nom!="Province" || j->Main.at(j->Main.size()-1)->nom!="Domaine"
        || j->Main.at(j->Main.size()-1)->nom!="Cuivre" || j->Main.at(j->Main.size()-1)->nom!="Argent" || j->Main.at(j->Main.size()-1)->nom!="Or" 
        || j->Main.at(j->Main.size()-1)->nom!="Malediction"){
            // Click
            j->defausser(j->Main.at(j->Main.size()-1));
    }
}

Library::Library(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(2*2415/7, 3*2760/5, 2415 / 7, 2760 / 5));
    }

Library::~Library()
{
}
