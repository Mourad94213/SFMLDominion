#include "../../header/Cartes/Tresor.hpp"

Tresor::Tresor(std::string name, int price, int val) : Cartes(name,price), valeur(val){
    if(name=="Cuivre"){
        this->Phycarte->setTextureRect(sf::IntRect(2*(2415/7), 0, 2415 / 7, 2760 / 5));
    }
    else if(name=="Argent"){
        this->Phycarte->setTextureRect(sf::IntRect(2415/7, 0, 2415 / 7, 2760 / 5));
    }
    else if(name=="Or"){
        this->Phycarte->setTextureRect(sf::IntRect(2415/7, 2*2760/5, 2415 / 7, 2760 / 5));
    }
}
Tresor::~Tresor()
{
}
