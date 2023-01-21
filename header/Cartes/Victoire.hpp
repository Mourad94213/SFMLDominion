#ifndef VICTOIRE_H
#define VICTOIRE_H
#include "../../header/Cartes/Cartes.hpp"
#include "Joueur.hpp"
#include <iostream>
#include <string>

class Victoire : public Cartes
{
private:
    int valeur;
public:
    Victoire(std::string name, int price, int val);
    void appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur);
    ~Victoire();
};

#endif