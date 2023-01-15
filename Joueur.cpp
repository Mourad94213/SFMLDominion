#include "Joueur.hpp"

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

void Joueur::defausser()
{
}

void Joueur::jouer_carte()
{
}
