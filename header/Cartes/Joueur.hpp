#ifndef JOUEUR_H
#define JOUEUR_H
#include "../../header/Cartes/Cartes.hpp"
#include <iostream>
#include <vector>


class Joueur
{
private:
    static int id;
    
    int action;
    int achat;
    
public:
    std::vector<Cartes*> Deck;
    std::vector<Cartes*> Main;
    std::vector<Cartes*> Defausse;
    Joueur();
    ~Joueur();
    static int getid();
    virtual void acheter();
    virtual void defausser(Cartes *c);
    virtual void jouer_carte();
    virtual void piocher();
};



#endif