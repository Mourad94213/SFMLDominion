#ifndef CARTES_H
#define CARTES_H

#include <iostream>
#include <vector>
#include "Joueur.hpp"
#include "Royaume.hpp"
#include "Tresor.hpp"
#include "Victoire.hpp"
#include <./SFML/Graphics.hpp>
#include <./SFML/Window.hpp>
#include <./SFML/System.hpp>

class Cartes
{
private:

public:
    std::string nom;
    int cout;
    sf::Texture *textCarte;
    sf::RectangleShape *Phycarte;
    Cartes(std::string nom, int cout);
    ~Cartes();
};


#endif