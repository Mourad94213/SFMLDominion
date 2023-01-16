#include "../../header/Cartes/Victoire.hpp"

Victoire::~Victoire()
{
}
Victoire::Victoire(std::string name, int price, int val) : Cartes(name, price), valeur(val) {
        if(name=="Malediction"){
        this->Phycarte->setTextureRect(sf::IntRect(2*(2415/7), 2760/5, 2415 / 7, 2760 / 5));
    }
    else if(name=="Province"){
        this->Phycarte->setTextureRect(sf::IntRect(3*(2415/7),2760/5, 2415 / 7, 2760 / 5));
    }
    else if(name=="Duche"){
        this->Phycarte->setTextureRect(sf::IntRect(4*2415/7, 2760/5, 2415 / 7, 2760 / 5));
    }
    else{
        this->Phycarte->setTextureRect(sf::IntRect(0, 2*2760/5, 2415 / 7, 2760 / 5));
    }
}