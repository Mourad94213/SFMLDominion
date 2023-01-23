#include "../../header/Cartes/Joueur.hpp"

int Joueur::id=0;

Joueur::Joueur(){
    id++;
    std::cout<<nbrachat;
}

Joueur::~Joueur(){
    std::cout<<"joueur suppr";
}

int Joueur::getid(){
    return id;
}


void Joueur::acheter()
{
    
}

void Joueur::defausserplateau(std::pair<Cartes*, sf::RectangleShape*> c)
{
    this->Defausse.push_back(c);
    this->plateau.erase(std::find(this->plateau.begin(), this->plateau.end(), c));
}

void Joueur::defaussermain(std::pair<Cartes*, sf::RectangleShape*> c){
    this->Defausse.push_back(c);
    this->Main.erase(std::find(this->Main.begin(), this->Main.end(), c));
}

void Joueur::jouer_carte(std::pair<Cartes*, sf::RectangleShape*> c)
{
    this->plateau.push_back(c);
    this->Main.erase(std::find(this->Main.begin(), this->Main.end(), c));
}

void Joueur::piocher(){
    this->Main.push_back(this->Deck.at(0));
    this->Deck.erase(std::begin(this->Deck));
}
