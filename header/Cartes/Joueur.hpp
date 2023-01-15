#ifndef JOUEUR_H
#define JOUEUR_H
#include "../../header/Cartes/Cartes.hpp"
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
    static int getid();
    virtual void acheter();
    virtual void defausser();
    virtual void jouer_carte();
    virtual void piocher();
};



#endif