#ifndef CARTES_H
#define CARTES_H

#include <iostream>
#include <vector>
#include <./SFML/Graphics.hpp>
#include <./SFML/Window.hpp>
#include <./SFML/System.hpp>
class Joueur;

class Cartes
{
private:

public:
    std::string nom;
    int cout;
    sf::Texture *textCarte;
    std::vector<sf::RectangleShape*> *Phycarte;
    Cartes(std::string nom, int cout);
    virtual void appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur);
    ~Cartes();
};


#endif