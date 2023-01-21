#include "../../header/Cartes/Tresor.hpp"

Tresor::Tresor(std::string name, int price, int val) : Cartes(name,price), valeur(val){
    if(name=="Cuivre"){
        for(int i=0; i<59; i++){
            this->Phycarte->push_back(new sf::RectangleShape((sf::Vector2f(220,360))));
        }
        for(int i=0; i<60; i++){
            this->Phycarte->at(i)->setTextureRect(sf::IntRect(2*(2415/7), 0, 2415 / 7, 2760 / 5));
        }
    }
    else if(name=="Argent"){
        for(int i=0; i<39; i++){
            this->Phycarte->push_back(new sf::RectangleShape((sf::Vector2f(220,360))));
        }
        for(int i=0; i<40; i++){
            this->Phycarte->at(i)->setTextureRect(sf::IntRect(2415/7, 0, 2415 / 7, 2760 / 5));
        }
        
    }
    else if(name=="Or"){
        for(int i=0; i<29; i++){
            this->Phycarte->push_back(new sf::RectangleShape((sf::Vector2f(220,360))));
        }
        for(int i=0; i<30; i++){
            this->Phycarte->at(i)->setTextureRect(sf::IntRect(2415/7, 2*2760/5, 2415 / 7, 2760 / 5));
        }
        
    }
}

Tresor::~Tresor()
{
}

void Tresor::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur){
    
}
