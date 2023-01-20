#ifndef HUMAIN_H
#define HUMAIN_H

#include "Joueur.hpp"
#include <iostream>
#include <vector>

class Humain : public Joueur
{
private:
    std::string pseudo;
public:
    Humain();
    ~Humain();
    void acheter();
    void defausser(std::vector<Cartes*> main);
    void jouer_carte(Cartes* C);
};

#endif
