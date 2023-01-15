#ifndef CARTES_H
#define CARTES_H

#include <iostream>
#include <vector>
#include <./SFML/Graphics.hpp>
#include <./SFML/Window.hpp>
#include <./SFML/System.hpp>

class Cartes
{
private:
    std::string nom;
    int cout;
public:
    sf::Texture *textCarte;
    sf::RectangleShape *Phycarte;
    Cartes(std::string nom, int cout);
    ~Cartes();
};


#endif