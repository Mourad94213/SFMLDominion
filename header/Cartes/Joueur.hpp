#ifndef JOUEUR_H
#define JOUEUR_H

#include "Cartes.hpp"
#include <iostream>
#include <vector>
#include <random>


class Joueur
{
private:
    static int id;

public:
    int action=1;
    int achat=0;
    int nbrachat=1;
    std::vector<std::pair<Cartes*,sf::RectangleShape*>> Deck;
    std::vector<std::pair<Cartes*,sf::RectangleShape*>> Main;
    std::vector<std::pair<Cartes*,sf::RectangleShape*>> Defausse;
    std::vector<std::pair<Cartes*,sf::RectangleShape*>> plateau;
    Joueur();
    ~Joueur();
    static int getid();
    virtual void acheter();
    virtual void defausserplateau(std::pair<Cartes*, sf::RectangleShape*> c);
    virtual void defaussermain(std::pair<Cartes*,sf::RectangleShape*> c);
    virtual void jouer_carte(std::pair<Cartes*, sf::RectangleShape*> c);
    virtual void piocher();
};



#endif