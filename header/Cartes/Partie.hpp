#ifndef PARTIE_H
#define PARTIE_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <chrono>
#include <thread>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include "Joueur.hpp"
#include "Cartes.hpp"
#include "Humain.hpp"
#include "Adventurer.hpp"
#include "Bureaucrat.hpp"
#include "Cellar.hpp"
#include "Chancellor.hpp"
#include "Chapel.hpp"
#include "CouncilRoom.hpp"
#include "Feast.hpp"
#include "Festival.hpp"
#include "Gardens.hpp"
#include "Laboratory.hpp"
#include "Library.hpp"
#include "Market.hpp"
#include "Militia.hpp"
#include "Mine.hpp"
#include "Moat.hpp"
#include "Moneylender.hpp"
#include "Remodel.hpp"
#include "Smithy.hpp"
#include "Spy.hpp"
#include "Thief.hpp"
#include "ThroneRoom.hpp"
#include "Village.hpp"
#include "Witch.hpp"
#include "Woodcutter.hpp"
#include "Workshop.hpp"
#include "Tresor.hpp"
#include "Victoire.hpp"
#include "Royaume.hpp"

class Partie
{
private:
    void initVariables();
	void initWindow();
	void initFonts();
	void initText();
    void initObjet();
    std::vector<Cartes*> Defausse;
    sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;
    sf::Font *font;
    sf::Sprite *buttonplay;
    sf::Texture *buttontext;
    sf::Sprite *finachat;
    sf::Sprite *boutonDominion;
    sf::Texture *boutonDominiontexture;
    sf::Sprite *Rbutton;
    sf::Texture *Rbuttontexture;
    sf::Sprite *Lbutton;
    sf::Sprite *panneauRegletop;
    sf::Texture *panneauRegletoptexture;
    sf::Sprite *panneauRegle;
    sf::Texture *panneauRegletexture;
    sf::Texture *bouton_selection;
    sf::Texture *bouton_selection_chiffre;
    sf::Sprite *boutonselectionhumain;
    sf::Sprite *boutonselectionia;
    sf::Sprite *boutonselection1h;
    sf::Sprite *boutonselection2h;
    sf::Sprite *boutonselection3h;
    sf::Sprite *boutonselection4h;
    sf::Sprite *boutonselection1ia;
    sf::Sprite *boutonselection2ia;
    sf::Sprite *boutonselection3ia;
    sf::Sprite *boutonselection4ia;
    sf::Sprite *boutonselectioncartes;
    sf::Sprite *boutonselectioncartes10;
    sf::Sprite *boutonselectioncartesrng;
    sf::Text *regletop;
    sf::Text *regletext;
    sf::Text *text;
    sf::Text *Playtext;
    sf::Text *Rtext;
    sf::Text *Ltext;
    sf::Text *Humainselectiontext;
    sf::Text *Iaselectiontext;
    sf::Text *chiffre1;
    sf::Text *chiffre2;
    sf::Text *chiffre3;
    sf::Text *chiffre4;
    sf::Text *chiffre0ia;
    sf::Text *chiffre1ia;
    sf::Text *chiffre2ia;
    sf::Text *chiffre3ia;
    sf::Text *selectioncarte;
    sf::Text *selectioncarte10;
    sf::Text *selectioncarterng;
    sf::Texture *backgroundtext;
    bool menubool=true;
    bool selectionbool;
    bool jeubool;
    bool reglebool;
public:
    static std::vector<std::pair<Cartes*, int>> AllCarte;
    Partie();
    ~Partie();
    void pollEvents();
    void run();
    void actualisercarte();
    void setupcard();
    void setupplayer(Joueur*);
    void menu();
    void choixselection();
    void jeu();
    void regle();

};

#endif
