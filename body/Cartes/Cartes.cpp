#include <iostream>
#include "../../header/Cartes/Cartes.hpp"
#include <SFML/Graphics.hpp>


Cartes::Cartes(std::string nom, int cout)
{
    this->nom=nom;
    this->cout=cout;
    this->Phycarte = new std::vector<sf::RectangleShape*>();
    if(this->nom!="Malediction" && this->nom!="Cuivre" && this->nom!="Argent" && this->nom!="Or" && this->nom!="Domaine" && this->nom!="Duche"
    && this->nom!="Province"){
        for(int i=0; i<10; i++){
            Phycarte->push_back(new sf::RectangleShape((sf::Vector2f(220,360))));
        }
    }
    else if(this->nom=="Malediction"){
        for(int i=0; i<30; i++){
            Phycarte->push_back(new sf::RectangleShape((sf::Vector2f(220,360))));
        }
    }
    else if(this->nom=="Cuivre"){
        for(int i=0; i<60; i++){
            Phycarte->push_back(new sf::RectangleShape((sf::Vector2f(220,360))));
        }
    }
    else if(this->nom=="Argent"){
        for(int i=0; i<40; i++){
            Phycarte->push_back(new sf::RectangleShape((sf::Vector2f(220,360))));
        }
    }
    else if(this->nom=="Or"){
        for(int i=0; i<30; i++){
            Phycarte->push_back(new sf::RectangleShape((sf::Vector2f(220,360))));
        }
    }
    else if(this->nom=="Domaine"){
        for(int i=0; i<24; i++){
            Phycarte->push_back(new sf::RectangleShape((sf::Vector2f(220,360))));
        }
    }
    else if(this->nom=="Duche"){
        for(int i=0; i<12; i++){
            Phycarte->push_back(new sf::RectangleShape((sf::Vector2f(220,360))));
        }
    }
    else if(this->nom=="Province"){
        for(int i=0; i<12; i++){
            Phycarte->push_back(new sf::RectangleShape((sf::Vector2f(220,360))));
        }
    }
    this->textCarte = new sf::Texture();
    this->textCarte->loadFromFile("assets/Cartes/Carte.png");
    for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTexture(textCarte);
    }
    
}

Cartes::~Cartes()
{
    std::cout << this->nom << " supprimé ";
}


void Cartes::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur){
    
}



