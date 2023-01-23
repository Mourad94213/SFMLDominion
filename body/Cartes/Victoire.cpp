#include "../../header/Cartes/Victoire.hpp"

Victoire::~Victoire()
{
}
Victoire::Victoire(std::string name, int price, int val) : Cartes(name, price), valeur(val) {
    if(name=="Malediction"){
        for(int i=0; i<this->Phycarte->size(); i++){
            this->Phycarte->at(i)->setTextureRect(sf::IntRect(2*(2415/7), 2760/5, 2415 / 7, 2760 / 5));
        }     
    }
    else if(name=="Province"){
        for(int i=0; i<this->Phycarte->size(); i++){
            this->Phycarte->at(i)->setTextureRect(sf::IntRect(3*(2415/7),2760/5, 2415 / 7, 2760 / 5));
        }
        
    }
    else if(name=="Duche"){
        for(int i=0; i<this->Phycarte->size(); i++){
            this->Phycarte->at(i)->setTextureRect(sf::IntRect(4*2415/7, 2760/5, 2415 / 7, 2760 / 5));
        }
    }
    else{
        for(int i=0; i<this->Phycarte->size(); i++){
            this->Phycarte->at(i)->setTextureRect(sf::IntRect(0, 2*2760/5, 2415 / 7, 2760 / 5));
        }
        
    }
}

void Victoire::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur){
    
}