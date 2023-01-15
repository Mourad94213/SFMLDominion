#ifndef CARTES_H
#define CARTES_H
#include "Tresor.hpp"
#include "Victoire.hpp"
#include "Royaume.hpp"
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