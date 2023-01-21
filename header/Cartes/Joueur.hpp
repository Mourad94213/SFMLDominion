#ifndef JOUEUR_H
#define JOUEUR_H

#include "Cartes.hpp"
#include <iostream>
#include <vector>


class Joueur
{
private:
    static int id;

public:
    int action;
    int achat;
    int nbrachat;
    std::vector<std::pair<Cartes*,sf::RectangleShape*>> Deck;
    std::vector<std::pair<Cartes*,sf::RectangleShape*>> Main;
    std::vector<std::pair<Cartes*,sf::RectangleShape*>> Defausse;
    std::vector<std::pair<Cartes*,sf::RectangleShape*>> plateau;
    Joueur();
    ~Joueur();
    static int getid();
    virtual void acheter();
    virtual void defausser(std::pair<Cartes*, sf::RectangleShape*> c);
    virtual void jouer_carte(std::pair<Cartes*, sf::RectangleShape*> c);
    virtual void piocher();
};



#endif