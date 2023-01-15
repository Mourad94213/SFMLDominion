#ifndef PARTIE_H
#define PARTIE_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include "Cartes.hpp"
#include "Royaume.hpp"
#include "Remodel.hpp"
#include <map>

class Partie
{
private:
    void initVariables();
	void initWindow();
	void initFonts();
	void initText();
    std::vector<Cartes*> AllCarte;
    std::vector<Cartes*> Defausse;
    static std::map<Cartes*,int> reservecarte;
public:
    Partie();
    ~Partie();
    sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;
    void pollEvents();
    void run();
};


#endif
