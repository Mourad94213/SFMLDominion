#ifndef PARTIE_H
#define PARTIE_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include "Cartes.hpp"
#include "Joueur.hpp"
#include "Adventurer.hpp"
#include "Artisan.hpp"
#include "Bandit.hpp"
#include "Bureaucrat.hpp"
#include "Cellar.hpp"
#include "Chancellor.hpp"
#include "Chapel.hpp"
#include "CouncilRoom.hpp"
#include "Feast.hpp"
#include "Festival.hpp"
#include "Gardens.hpp"
#include "Harbinger.hpp"
#include "Laboratory.hpp"
#include "Library.hpp"
#include "Market.hpp"
#include "Merchant.hpp"
#include "Militia.hpp"
#include "Mine.hpp"
#include "Moat.hpp"
#include "Moneylender.hpp"
#include "Poacher.hpp"
#include "Remodel.hpp"
#include "Sentry.hpp"
#include "Smithy.hpp"
#include "Spy.hpp"
#include "Thief.hpp"
#include "ThroneRoom.hpp"
#include "Vassal.hpp"
#include "Village.hpp"
#include "Witch.hpp"
#include "Woodcutter.hpp"
#include "Workshop.hpp"
#include "Tresor.hpp"
#include "Victoire.hpp"
#include "Royaume.hpp"

#include <map>
#include <vector>

class Partie
{
private:
    void initVariables();
	void initWindow();
	void initFonts();
	void initText();
    static std::vector<std::pair<Cartes*, int>> AllCarte;
    std::vector<Cartes*> Defausse;
public:
    Partie();
    ~Partie();
    sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;
    void pollEvents();
    void run();
    void render();
};

#endif
