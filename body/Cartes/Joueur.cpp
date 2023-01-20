#include "../../header/Cartes/Joueur.hpp"

int Joueur::id=0;

Joueur::Joueur(){
    id++;
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

void Joueur::defausser(Cartes *c)
{
    this->Main.push_back(c);
    this->Deck.erase(std::find(this->Deck.begin(), this->Deck.end(), c));
}

void Joueur::jouer_carte()
{

}

void Joueur::piocher(){
    this->Main.push_back(this->Deck.at(0));
    this->Deck.erase(std::begin(this->Deck));
}
