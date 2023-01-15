#ifndef JOUEUR_H
#define JOUEUR_H
#include "Cartes.hpp"
#include <iostream>
#include <vector>


class Joueur
{
private:
    static int id;
    std::vector<Cartes*> Deck;
    std::vector<Cartes*> Main;
public:
    Joueur();
    ~Joueur();
    static int Joueur::getid();
    virtual void Joueur::acheter();
    virtual void Joueur::defausser();
    virtual void Joueur::jouer_carte();
};



#endif