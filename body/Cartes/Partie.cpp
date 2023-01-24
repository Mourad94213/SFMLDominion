#include "../../header/Cartes/Partie.hpp"

std::vector<std::pair<Cartes*, int>> Partie::AllCarte;
int nbjoueurhumain=0;
bool hover = false;
int incrmain=0;
bool jeustarted=false;
bool button_pressed=false;
bool phaseachat=false;
bool phaseaction=true;
bool boutonachat=false;
bool boutonaction = false;
bool entrer=true;
int comptedeckvide=0;
bool changerjoueur=false;
int joueurplus=0;
int totalpointj1=0;
int totalpointj2=0;
int totalpointj3=0;
int totalpointj4=0;
bool premierentre=true;
bool effetcellar=false;
bool workshopbool=false;
bool possedejardin=false;
std::vector<Cartes*> cartechoisijoueur;
Cellar      *Cave           = new Cellar("Cellar", 2, 0, 0, 0, 1);
Remodel     *Renovation     = new Remodel("Remodel", 4, 0, 0, 0, 0);
Mine        *mine           = new Mine("Mine", 5, 0, 0, 0, 0);
Moneylender *PreteurSurGage = new Moneylender("Moneylender", 4, 0, 0, 0, 0);
Witch       *Sorciere       = new Witch("Witch", 5, 0, 0, 2, 0);
Moat        *Douves         = new Moat("Moat", 2, 0, 0, 2, 0);
Market      *Marche         = new Market("Market", 5, 1, 1, 1, 1);
Gardens     *Jardins        = new Gardens("Gardens", 4, 0, 0, 0, 0);
Festival    *festival       = new Festival("Festival", 5, 2, 1, 0, 2);
CouncilRoom *SalleDuConseil = new CouncilRoom("CouncilRoom", 5, 0, 1, 4, 0);
ThroneRoom  *SalleDuTrone   = new ThroneRoom("ThroneRoom", 4, 0, 0, 0, 0);
Smithy      *Forgeron       = new Smithy("Smithy", 4, 0, 0, 3, 0);
Laboratory  *Laboratoire    = new Laboratory("Laboratory", 5, 0, 0, 2, 1);
Village     *village        = new Village("Village", 3, 0, 0, 1, 2);
Militia     *Milice         = new Militia("Militia", 4, 2, 0, 0, 0);
Bureaucrat  *Bureaucrate    = new Bureaucrat("Bureaucrat", 4, 0, 0, 0, 0);
Library     *Bibliotheque   = new Library("Library", 5, 0, 0, 0, 0);
Workshop    *atelier        = new Workshop("Workshop", 3, 0, 0, 0, 0);
Chapel      *Chapelle       = new Chapel("Chapel", 2, 0, 0, 0, 0);
Thief       *Voleur         = new Thief("Thief", 4, 0, 0, 0, 0);
Feast       *Festin         = new Feast("Feast", 4, 0, 0, 0, 0);
Chancellor  *Chancelier     = new Chancellor("Chancellor", 3, 2, 0, 0, 0);
Adventurer  *Aventurier     = new Adventurer("Adventurer", 6, 0, 0, 0, 0);
Woodcutter  *Bucheron       = new Woodcutter("Woodcutter", 3, 2, 1, 0, 0);
Spy         *Espion         = new Spy("Spy", 4, 0, 0, 1, 1);
Tresor *cuivre = new Tresor("Cuivre",0,1);
Tresor *argent = new Tresor("Argent",3,2);
Tresor *Or = new Tresor("Or",6,3);
Victoire *Domaine = new Victoire("Domaine",2,1);
Victoire *Duche = new Victoire("Duche",5,3);
Victoire *Province = new Victoire("Province",8,6);
Victoire *Malediction = new Victoire("Malediction",0,-1);
Joueur *jtest = new Joueur();
Joueur *jtest2 = new Joueur();
Joueur *jtest3 = new Joueur();
Joueur *jtest4 = new Joueur();
std::vector<Joueur*> allplayer = {jtest, jtest2, jtest3, jtest4};

void Partie::initVariables()
{

	Partie::AllCarte.push_back(std::pair<Tresor*,int>(cuivre,60));
    Partie::AllCarte.push_back(std::pair<Tresor*,int>(argent,40));
    Partie::AllCarte.push_back(std::pair<Tresor*,int>(Or,30));
    Partie::AllCarte.push_back(std::pair<Victoire*,int>(Domaine,24));
    Partie::AllCarte.push_back(std::pair<Victoire*,int>(Duche,12));
    Partie::AllCarte.push_back(std::pair<Victoire*,int>(Province,12));
    /*else{
        Partie::AllCarte.push_back(std::pair<Victoire*,int>(Province,8));
    }*/
    Partie::AllCarte.push_back(std::pair<Victoire*,int>(Malediction,30));
    
}


void Partie::initWindow()
{
    
    this->videoMode.height = 1000;
	this->videoMode.width = 1900;
	this->window = new sf::RenderWindow(this->videoMode, "Dominion", sf::Style::Titlebar | sf::Style::Close);
    this->window->setPosition(sf::Vector2i(0,0));
	this->window->setFramerateLimit(60);
}

void Partie::initFonts(){
    this->font = new sf::Font();
    this->font->loadFromFile("assets/Fonts/Ancient.ttf");
}

void Partie::initObjet(){

     /* Play */
    
    this->buttonplay = new sf::Sprite();
    this->buttontext = new sf::Texture();
    this->buttontext->loadFromFile("assets/bouton/bouton_regle.png");
    this->buttonplay->setTexture(*buttontext);
    this->buttonplay->setScale(sf::Vector2f(0.6,0.6));
    this->buttonplay->setOrigin(sf::Vector2f(820/2,304/2));
    this->buttonplay->setPosition(sf::Vector2f(window->getSize().x/2,window->getSize().y/2-100));

    /* Domi */

    this->boutonDominion = new sf::Sprite();
    this->boutonDominiontexture = new sf::Texture();
    this->boutonDominiontexture->loadFromFile("assets/bouton/bouton_dominion_v.png");
    this->boutonDominion->setTexture(*boutonDominiontexture);
    this->boutonDominion->setScale(sf::Vector2f(0.9,0.9));
    this->boutonDominion->setOrigin(sf::Vector2f(782/2,319/2));
    this->boutonDominion->setPosition(sf::Vector2f(window->getSize().x/2,window->getSize().y/2-350));

    /* Rules */

    this->Rbutton = new sf::Sprite();
    this->Rbuttontexture = new sf::Texture();
    this->Rbuttontexture->loadFromFile("assets/bouton/button.png");
    this->Rbutton->setTexture(*Rbuttontexture);
    this->Rbutton->setScale(sf::Vector2f(0.65,0.65));
    this->Rbutton->setOrigin(sf::Vector2f(735/2,339/2));
    this->Rbutton->setPosition(sf::Vector2f(window->getSize().x/2,window->getSize().y/2+100));
    
    /* Leave */

    this->Lbutton = new sf::Sprite();
    this->Lbutton->setTexture(*Rbuttontexture);
    this->Lbutton->setScale(sf::Vector2f(0.65,0.65));
    this->Lbutton->setOrigin(sf::Vector2f(735/2,339/2));
    this->Lbutton->setPosition(sf::Vector2f(window->getSize().x/2,window->getSize().y/2+310));

    // REGLE PANNEAU

    this->panneauRegletop = new sf::Sprite();
    this->panneauRegletoptexture = new sf::Texture();
    this->panneauRegletoptexture->loadFromFile("assets/objet/regle_top.png");
    this->panneauRegletop->setTexture(*panneauRegletoptexture);
    this->panneauRegletop->setScale(0.5,0.3);
    this->panneauRegletop->setOrigin(sf::Vector2f(2334/2,676/2));
    this->panneauRegletop->setPosition(sf::Vector2f(window->getSize().x/2,120));

    this->panneauRegle = new sf::Sprite();
    this->panneauRegletexture= new sf::Texture();
    this->panneauRegletexture->loadFromFile("assets/objet/regle.png");
    this->panneauRegle->setTexture(*panneauRegletexture);
    this->panneauRegle->setScale(0.75,0.4);
    this->panneauRegle->setOrigin(sf::Vector2f(2637/2,2777/2));
    this->panneauRegle->setPosition(sf::Vector2f(window->getSize().x/2,window->getSize().y/2+250));

    // SELECTION

    this->bouton_selection = new sf::Texture();
    this->bouton_selection_chiffre = new sf::Texture();
    this->bouton_selection->loadFromFile("assets/bouton/bouton_selection.png");
    this->bouton_selection_chiffre->loadFromFile("assets/bouton/bouton_selection_chiffre.png");

    this->boutonselectionhumain = new sf::Sprite();
    this->boutonselectionhumain->setTexture(*bouton_selection);
    this->boutonselectionhumain->setScale(0.2,0.2);
    this->boutonselectionhumain->setOrigin(sf::Vector2f(2306/2,1064/2));
    this->boutonselectionhumain->setPosition(sf::Vector2f(500,window->getSize().y/2-300));

    this->boutonselectionia = new sf::Sprite();
    this->boutonselectionia->setTexture(*bouton_selection);
    this->boutonselectionia->setScale(0.2,0.2);
    this->boutonselectionia->setOrigin(sf::Vector2f(2306/2,1064/2));
    this->boutonselectionia->setPosition(sf::Vector2f(500,window->getSize().y/2-50));

    this->boutonselection1h = new sf::Sprite();
    this->boutonselection1h->setTexture(*bouton_selection_chiffre);
    this->boutonselection1h->setScale(0.14,0.14);
    this->boutonselection1h->setOrigin(sf::Vector2f(1318/2,1190/2));
    this->boutonselection1h->setPosition(sf::Vector2f(905,window->getSize().y/2-290));

    this->boutonselection2h = new sf::Sprite();
    this->boutonselection2h->setTexture(*bouton_selection_chiffre);
    this->boutonselection2h->setScale(0.14,0.14);
    this->boutonselection2h->setOrigin(sf::Vector2f(1318/2,1190/2));
    this->boutonselection2h->setPosition(sf::Vector2f(1155,window->getSize().y/2-290));

    this->boutonselection3h = new sf::Sprite();
    this->boutonselection3h->setTexture(*bouton_selection_chiffre);
    this->boutonselection3h->setScale(0.14,0.14);
    this->boutonselection3h->setOrigin(sf::Vector2f(1318/2,1190/2));
    this->boutonselection3h->setPosition(sf::Vector2f(1405,window->getSize().y/2-290));

    this->boutonselection4h = new sf::Sprite();
    this->boutonselection4h->setTexture(*bouton_selection_chiffre);
    this->boutonselection4h->setScale(0.14,0.14);
    this->boutonselection4h->setOrigin(sf::Vector2f(1318/2,1190/2));
    this->boutonselection4h->setPosition(sf::Vector2f(1655,window->getSize().y/2-290));

    this->boutonselection1ia = new sf::Sprite();
    this->boutonselection1ia->setTexture(*bouton_selection_chiffre);
    this->boutonselection1ia->setScale(0.14,0.14);
    this->boutonselection1ia->setOrigin(sf::Vector2f(1318/2,1190/2));
    this->boutonselection1ia->setPosition(sf::Vector2f(905,window->getSize().y/2-40));

    this->boutonselection2ia = new sf::Sprite();
    this->boutonselection2ia->setTexture(*bouton_selection_chiffre);
    this->boutonselection2ia->setScale(0.14,0.14);
    this->boutonselection2ia->setOrigin(sf::Vector2f(1318/2,1190/2));
    this->boutonselection2ia->setPosition(sf::Vector2f(1155,window->getSize().y/2-40));

    this->boutonselection3ia = new sf::Sprite();
    this->boutonselection3ia->setTexture(*bouton_selection_chiffre);
    this->boutonselection3ia->setScale(0.14,0.14);
    this->boutonselection3ia->setOrigin(sf::Vector2f(1318/2,1190/2));
    this->boutonselection3ia->setPosition(sf::Vector2f(1405,window->getSize().y/2-40));

    this->boutonselection4ia = new sf::Sprite();
    this->boutonselection4ia->setTexture(*bouton_selection_chiffre);
    this->boutonselection4ia->setScale(0.14,0.14);
    this->boutonselection4ia->setOrigin(sf::Vector2f(1318/2,1190/2));
    this->boutonselection4ia->setPosition(sf::Vector2f(1655,window->getSize().y/2-40));

    this->boutonselectioncartes = new sf::Sprite();
    this->boutonselectioncartes->setTexture(*bouton_selection);
    this->boutonselectioncartes->setScale(0.2,0.2);
    this->boutonselectioncartes->setOrigin(sf::Vector2f(2306/2,1064/2));
    this->boutonselectioncartes->setPosition(sf::Vector2f(400,window->getSize().y/2+200));

    this->boutonselectioncartes10 = new sf::Sprite();
    this->boutonselectioncartes10->setTexture(*Rbuttontexture);
    this->boutonselectioncartes10->setScale(sf::Vector2f(0.65,0.65));
    this->boutonselectioncartes10->setOrigin(sf::Vector2f(735/2,339/2));
    this->boutonselectioncartes10->setPosition(sf::Vector2f(1000,window->getSize().y/2+220));

    this->boutonselectioncartesrng = new sf::Sprite();
    this->boutonselectioncartesrng->setTexture(*Rbuttontexture);
    this->boutonselectioncartesrng->setScale(sf::Vector2f(0.65,0.65));
    this->boutonselectioncartesrng->setOrigin(sf::Vector2f(735/2,339/2));
    this->boutonselectioncartesrng->setPosition(sf::Vector2f(1600,window->getSize().y/2+220));

    this->nbrachattext = new sf::Texture();
    this->nbrachattext->loadFromFile("assets/objet/achat.png");
    this->actiontext = new sf::Texture();
    this->actiontext->loadFromFile("assets/objet/shield.png");
    this->goldtext = new sf::Texture();
    this->goldtext->loadFromFile("assets/objet/coin.png");

    this->nbrachatimg = new sf::Sprite();
    this->nbrachatimg->setTexture(*nbrachattext);
    this->nbrachatimg->setScale(sf::Vector2f(0.13,0.13));
    this->nbrachatimg->setOrigin(sf::Vector2f(555/2,450/2));
    this->nbrachatimg->setPosition(sf::Vector2f(1700,90));

    this->actionimg = new sf::Sprite();
    this->actionimg->setTexture(*actiontext);
    this->actionimg->setScale(sf::Vector2f(0.13,0.13));
    this->actionimg->setOrigin(sf::Vector2f(512/2,512/2));
    this->actionimg->setPosition(sf::Vector2f(1780,90));

    this->goldimg = new sf::Sprite();
    this->goldimg->setTexture(*goldtext);
    this->goldimg->setScale(sf::Vector2f(0.12,0.12));
    this->goldimg->setOrigin(sf::Vector2f(512/2,512/2));
    this->goldimg->setPosition(sf::Vector2f(1610,90));

    // BACKGROUND //

    this->backgroundtext = new sf::Texture();
    this->backgroundtext->loadFromFile("assets/background/background.jpg");


}

void Partie::initText()
{
    /* Title */
    
    this->text = new sf::Text();
    this->text->setFont(*font);
    this->text->setString("Dominion");
    this->text->setCharacterSize(100);
    this->text->setOutlineThickness(2);
    this->text->setOutlineColor(sf::Color::Black);
    this->text->setFillColor(sf::Color(252,238,170));
    this->text->setPosition(sf::Vector2f(window->getSize().x/2-160,window->getSize().y/2-435));

    /* Play */
    
    this->Playtext = new sf::Text();
    this->Playtext->setFont(*font);
    this->Playtext->setString("Jouer");
    this->Playtext->setCharacterSize(60);
    this->Playtext->setOutlineThickness(2);
    this->Playtext->setOutlineColor(sf::Color::Black);
    this->Playtext->setFillColor(sf::Color(252,238,170));
    this->Playtext->setPosition(sf::Vector2f(window->getSize().x/2-60,window->getSize().y/2-145));

    /* Rules */

    this->Rtext = new sf::Text();
    this->Rtext->setFont(*font);
    this->Rtext->setString("Regles");
    this->Rtext->setCharacterSize(60);
    this->Rtext->setOutlineThickness(2);
    this->Rtext->setOutlineColor(sf::Color::Black);
    this->Rtext->setFillColor(sf::Color(252,238,170));
    this->Rtext->setPosition(sf::Vector2f(window->getSize().x/2-70,window->getSize().y/2+60));

    /* Leave */

    this->Ltext = new sf::Text();    
    this->Ltext->setFont(*font);
    this->Ltext->setString("Quitter");
    this->Ltext->setCharacterSize(60);
    this->Ltext->setOutlineThickness(2);
    this->Ltext->setOutlineColor(sf::Color::Black);
    this->Ltext->setFillColor(sf::Color(252,238,170));
    this->Ltext->setPosition(sf::Vector2f(window->getSize().x/2-80,window->getSize().y/2+275));


    // REGLES

    this->regletop = new sf::Text();
    this->regletop->setFont(*font);
    this->regletop->setString("Regles");
    this->regletop->setCharacterSize(120);
    this->regletop->setOutlineThickness(2);
    this->regletop->setOutlineColor(sf::Color::Black);
    this->regletop->setFillColor(sf::Color(252,238,170));
    this->regletop->setPosition(sf::Vector2f(window->getSize().x/2-150,45));

    this->regletext = new sf::Text();
    this->regletext->setFont(*font);
    this->regletext->setString("Dominion est un jeu ou vous construisez un deck qui represente votre dominion. \nIl est constitue de vos ressources,de vos points de victoire, et des nombreuses actions que vous pouvez\n effectuer. Au depart, ce n'est qu'un pietre ramassis de proprietes et de pieces de cuivre, mais vos ambitions \n feront en sorte qu'a la fin de la partie, votre deck fourmillera de pieces d'or, de provinces et des nombreux\n citoyens et constructions qui constituent votre chateau et votre royaume.\n Celui qui aura le plus de points de victoire a la fin de la partie sera le vainqueur.\n\n Appuyez sur Q pour quitter le jeu a tout moment \n Appuyez sur Backspace pour retourner au menu precedent");
    this->regletext->setCharacterSize(40);
    this->regletext->setOutlineThickness(1);
    this->regletext->setOutlineColor(sf::Color::Black);
    this->regletext->setFillColor(sf::Color(252,238,170));
    this->regletext->setPosition(sf::Vector2f(140,330));

    // SELECTION 

    this->Humainselectiontext = new sf::Text();
    this->Humainselectiontext->setFont(*font);
    this->Humainselectiontext->setString("Nombre de joueur total");
    this->Humainselectiontext->setCharacterSize(40);
    this->Humainselectiontext->setOutlineThickness(2);
    this->Humainselectiontext->setOutlineColor(sf::Color::Black);
    this->Humainselectiontext->setFillColor(sf::Color(255,95,31));
    this->Humainselectiontext->setPosition(sf::Vector2f(350,190));

    this->Iaselectiontext = new sf::Text();
    this->Iaselectiontext->setFont(*font);
    this->Iaselectiontext->setString("Dont IA");
    this->Iaselectiontext->setCharacterSize(40);
    this->Iaselectiontext->setOutlineThickness(2);
    this->Iaselectiontext->setOutlineColor(sf::Color::Black);
    this->Iaselectiontext->setFillColor(sf::Color(255,95,31));
    this->Iaselectiontext->setPosition(sf::Vector2f(440,445));

    this->chiffre1 = new sf::Text();
    this->chiffre1->setFont(*font);
    this->chiffre1->setString("1");
    this->chiffre1->setCharacterSize(40);
    this->chiffre1->setOutlineThickness(2);
    this->chiffre1->setOutlineColor(sf::Color::Black);
    this->chiffre1->setFillColor(sf::Color(252,238,170));
    this->chiffre1->setPosition(sf::Vector2f(900,190));

    this->chiffre2 = new sf::Text();
    this->chiffre2->setFont(*font);
    this->chiffre2->setString("2");
    this->chiffre2->setCharacterSize(40);
    this->chiffre2->setOutlineThickness(2);
    this->chiffre2->setOutlineColor(sf::Color::Black);
    this->chiffre2->setFillColor(sf::Color(252,238,170));
    this->chiffre2->setPosition(sf::Vector2f(1150,190));

    this->chiffre3 = new sf::Text();
    this->chiffre3->setFont(*font);
    this->chiffre3->setString("3");
    this->chiffre3->setCharacterSize(40);
    this->chiffre3->setOutlineThickness(2);
    this->chiffre3->setOutlineColor(sf::Color::Black);
    this->chiffre3->setFillColor(sf::Color(252,238,170));
    this->chiffre3->setPosition(sf::Vector2f(1400,190));

    this->chiffre4 = new sf::Text();
    this->chiffre4->setFont(*font);
    this->chiffre4->setString("4");
    this->chiffre4->setCharacterSize(40);
    this->chiffre4->setOutlineThickness(2);
    this->chiffre4->setOutlineColor(sf::Color::Black);
    this->chiffre4->setFillColor(sf::Color(252,238,170));
    this->chiffre4->setPosition(sf::Vector2f(1650,190));

    this->chiffre0ia = new sf::Text();
    this->chiffre0ia->setFont(*font);
    this->chiffre0ia->setString("0");
    this->chiffre0ia->setCharacterSize(40);
    this->chiffre0ia->setOutlineThickness(2);
    this->chiffre0ia->setOutlineColor(sf::Color::Black);
    this->chiffre0ia->setFillColor(sf::Color(252,238,170));
    this->chiffre0ia->setPosition(sf::Vector2f(900,445));

    this->chiffre1ia = new sf::Text();
    this->chiffre1ia->setFont(*font);
    this->chiffre1ia->setString("1");
    this->chiffre1ia->setCharacterSize(40);
    this->chiffre1ia->setOutlineThickness(2);
    this->chiffre1ia->setOutlineColor(sf::Color::Black);
    this->chiffre1ia->setFillColor(sf::Color(252,238,170));
    this->chiffre1ia->setPosition(sf::Vector2f(1150,445));

    this->chiffre2ia = new sf::Text();
    this->chiffre2ia->setFont(*font);
    this->chiffre2ia->setString("2");
    this->chiffre2ia->setCharacterSize(40);
    this->chiffre2ia->setOutlineThickness(2);
    this->chiffre2ia->setOutlineColor(sf::Color::Black);
    this->chiffre2ia->setFillColor(sf::Color(252,238,170));
    this->chiffre2ia->setPosition(sf::Vector2f(1390,445));

    this->chiffre3ia = new sf::Text();
    this->chiffre3ia->setFont(*font);
    this->chiffre3ia->setString("3");
    this->chiffre3ia->setCharacterSize(40);
    this->chiffre3ia->setOutlineThickness(2);
    this->chiffre3ia->setOutlineColor(sf::Color::Black);
    this->chiffre3ia->setFillColor(sf::Color(252,238,170));
    this->chiffre3ia->setPosition(sf::Vector2f(1650,445));

    // SELECTION CARTES
    
    this->selectioncarte = new sf::Text();
    this->selectioncarte->setFont(*font);
    this->selectioncarte->setString("Choix des cartes");
    this->selectioncarte->setCharacterSize(40);
    this->selectioncarte->setOutlineThickness(2);
    this->selectioncarte->setOutlineColor(sf::Color::Black);
    this->selectioncarte->setFillColor(sf::Color(255,95,31));
    this->selectioncarte->setPosition(sf::Vector2f(280,695));

    this->selectioncarte10 = new sf::Text();
    this->selectioncarte10->setFont(*font);
    this->selectioncarte10->setString("10 de base");
    this->selectioncarte10->setCharacterSize(40);
    this->selectioncarte10->setOutlineThickness(2);
    this->selectioncarte10->setOutlineColor(sf::Color::Black);
    this->selectioncarte10->setFillColor(sf::Color(252,238,170));
    this->selectioncarte10->setPosition(sf::Vector2f(940,700));

    this->selectioncarterng = new sf::Text();
    this->selectioncarterng->setFont(*font);
    this->selectioncarterng->setString("Aleatoire");
    this->selectioncarterng->setCharacterSize(40);
    this->selectioncarterng->setOutlineThickness(2);
    this->selectioncarterng->setOutlineColor(sf::Color::Black);
    this->selectioncarterng->setFillColor(sf::Color(252,238,170));
    this->selectioncarterng->setPosition(sf::Vector2f(1535,700));

    this->phaseactuelle = new sf::Text();
    this->phaseactuelle->setFont(*font);
    this->phaseactuelle->setString("Phase d'action");
    this->phaseactuelle->setCharacterSize(70);
    this->phaseactuelle->setOutlineThickness(2);
    this->phaseactuelle->setOutlineColor(sf::Color::Black);
    this->phaseactuelle->setFillColor(sf::Color(252,238,170));
    this->phaseactuelle->setPosition(sf::Vector2f(1300,200));

    this->terminer = new sf::Text();
    this->terminer->setFont(*font);
    this->terminer->setString("Terminer la phase actuelle");
    this->terminer->setCharacterSize(30);
    this->terminer->setOutlineThickness(2);
    this->terminer->setOutlineColor(sf::Color::Black);
    this->terminer->setFillColor(sf::Color(252,238,170));
    this->terminer->setPosition(sf::Vector2f(1500,380));

}


Partie::Partie()
{
    this->initVariables();
	this->initWindow();
    this->initFonts();
    this->initObjet();
	this->initText();
}

Partie::~Partie()
{
    delete this->window;
}

void Partie::pollEvents()
{
	//Event polling
	while (this->window->pollEvent(this->ev))
	{
		switch (this->ev.type)
		{
		case sf::Event::Closed:
			this->window->close();
			break;
		case sf::Event::KeyPressed:
			if (this->ev.key.code == sf::Keyboard::Q)
				this->window->close();
            if(this->ev.key.code == sf::Keyboard::Backspace)
                if(this->reglebool){
                    this->reglebool=false;
                    this->menubool=true;
                }
            break;
		}
	}
}

void Partie::run()
{
    while(this->window->isOpen()){
        this->pollEvents();
        this->menu();
        this->choixselection();
        this->jeu();
        this->regle();
        this->findejeu();
    }
}

void Partie::menu(){
    if(this->menubool==true){
        this->jeubool=false;
        this->reglebool=false;
        this->finjeu=false;
        this->window->clear();
        if(this->ev.type==sf::Event::MouseButtonPressed){
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
                if(this->buttonplay->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !selectionbool){
                    selectionbool=true;
                    jeubool=false;
                    reglebool=false;
                    menubool=false;
                    finjeu=false;
                }
                if(this->Rbutton->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !selectionbool){
                    reglebool=true;
                    selectionbool=false;
                    jeubool=false;
                    menubool=false;
                    finjeu=false;
                }
                if(this->Lbutton->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window)))  && !jeubool && !reglebool && !selectionbool){
                    this->window->close();
                }
            }
        }
            this->window->draw(sf::Sprite(*this->backgroundtext));
            this->window->draw(*(this->buttonplay));
            this->window->draw(*(this->boutonDominion));
            this->window->draw(*(this->text));
            this->window->draw(*(this->Playtext));
            this->window->draw(*(this->Rbutton));
            this->window->draw(*(this->Rtext));
            this->window->draw(*(this->Lbutton));
            this->window->draw(*(this->Ltext));
            this->window->display();
    }
}

void Partie::choixselection(){
    if(this->selectionbool==true){
        this->window->clear();
        if(this->ev.type==sf::Event::MouseButtonPressed){
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
                if(this->boutonselection1h->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !menubool){
                    nbjoueurhumain=1;
                    chiffre1->setFillColor(sf::Color(9,106,9));
                    chiffre2->setFillColor(sf::Color(252,238,170));
                    chiffre3->setFillColor(sf::Color(252,238,170));
                    chiffre4->setFillColor(sf::Color(252,238,170));
                    if(this->boutonselection1ia->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !menubool){
                        //IA *ia1 = new IA();
                        chiffre0ia->setFillColor(sf::Color(9,106,9));
                        chiffre2ia->setFillColor(sf::Color(252,238,170));
                        chiffre3ia->setFillColor(sf::Color(252,238,170));
                        chiffre1ia->setFillColor(sf::Color(252,238,170));
                    }
                    if(this->boutonselection2ia->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !menubool){
                        chiffre1ia->setFillColor(sf::Color(9,106,9));
                        chiffre0ia->setFillColor(sf::Color(252,238,170));
                        chiffre3ia->setFillColor(sf::Color(252,238,170));
                        chiffre2ia->setFillColor(sf::Color(252,238,170));
                    }
                    if(this->boutonselection3ia->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !menubool){
                        chiffre2ia->setFillColor(sf::Color(9,106,9)); 
                        chiffre1ia->setFillColor(sf::Color(252,238,170));
                        chiffre3ia->setFillColor(sf::Color(252,238,170));
                        chiffre0ia->setFillColor(sf::Color(252,238,170));
                    }
                    if(this->boutonselection4ia->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !menubool){
                        chiffre3ia->setFillColor(sf::Color(9,106,9)); 
                        chiffre1ia->setFillColor(sf::Color(252,238,170));
                        chiffre2ia->setFillColor(sf::Color(252,238,170));
                        chiffre0ia->setFillColor(sf::Color(252,238,170));                 
                    }
                }
                if(this->boutonselection2h->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !menubool){
                    nbjoueurhumain=2;
                    chiffre2->setFillColor(sf::Color(9,106,9));
                    chiffre1->setFillColor(sf::Color(252,238,170));
                    chiffre3->setFillColor(sf::Color(252,238,170));
                    chiffre4->setFillColor(sf::Color(252,238,170));
                }
                if(this->boutonselection3h->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !menubool){
                    nbjoueurhumain=3;  
                    chiffre3->setFillColor(sf::Color(9,106,9)); 
                    chiffre1->setFillColor(sf::Color(252,238,170));
                    chiffre2->setFillColor(sf::Color(252,238,170));
                    chiffre4->setFillColor(sf::Color(252,238,170));
                }
                if(this->boutonselection4h->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !menubool){
                    nbjoueurhumain=4; 
                    chiffre4->setFillColor(sf::Color(9,106,9)); 
                    chiffre1->setFillColor(sf::Color(252,238,170));
                    chiffre2->setFillColor(sf::Color(252,238,170));
                    chiffre3->setFillColor(sf::Color(252,238,170));       
                }
                if(this->boutonselection1ia->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !menubool){
                    chiffre0ia->setFillColor(sf::Color(9,106,9));
                    chiffre2ia->setFillColor(sf::Color(252,238,170));
                    chiffre3ia->setFillColor(sf::Color(252,238,170));
                    chiffre1ia->setFillColor(sf::Color(252,238,170));
                }
                if(this->boutonselection2ia->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !menubool){
                    chiffre1ia->setFillColor(sf::Color(9,106,9));
                    chiffre0ia->setFillColor(sf::Color(252,238,170));
                    chiffre3ia->setFillColor(sf::Color(252,238,170));
                    chiffre2ia->setFillColor(sf::Color(252,238,170));
                }
                if(this->boutonselection3ia->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !menubool){
                    chiffre2ia->setFillColor(sf::Color(9,106,9)); 
                    chiffre1ia->setFillColor(sf::Color(252,238,170));
                    chiffre3ia->setFillColor(sf::Color(252,238,170));
                    chiffre0ia->setFillColor(sf::Color(252,238,170));
                }
                if(this->boutonselection4ia->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !menubool){
                    chiffre3ia->setFillColor(sf::Color(9,106,9)); 
                    chiffre1ia->setFillColor(sf::Color(252,238,170));
                    chiffre2ia->setFillColor(sf::Color(252,238,170));
                    chiffre0ia->setFillColor(sf::Color(252,238,170));                 
                }
                if(this->boutonselectioncartesrng->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !menubool){
                    cartechoisijoueur.push_back(Cave);
                    cartechoisijoueur.push_back(Renovation);
                    cartechoisijoueur.push_back(mine);
                    cartechoisijoueur.push_back(PreteurSurGage);
                    cartechoisijoueur.push_back(Sorciere);
                    cartechoisijoueur.push_back(Douves);
                    cartechoisijoueur.push_back(Marche);
                    cartechoisijoueur.push_back(Jardins);
                    cartechoisijoueur.push_back(festival);
                    cartechoisijoueur.push_back(SalleDuConseil);
                    cartechoisijoueur.push_back(SalleDuTrone);
                    cartechoisijoueur.push_back(Forgeron);
                    cartechoisijoueur.push_back(Laboratoire);
                    cartechoisijoueur.push_back(village);
                    cartechoisijoueur.push_back(Milice);
                    cartechoisijoueur.push_back(Bureaucrate);
                    cartechoisijoueur.push_back(Bibliotheque);
                    cartechoisijoueur.push_back(atelier);
                    cartechoisijoueur.push_back(Chapelle);
                    cartechoisijoueur.push_back(Voleur);
                    cartechoisijoueur.push_back(Festin);
                    cartechoisijoueur.push_back(Chancelier);
                    cartechoisijoueur.push_back(Aventurier);
                    cartechoisijoueur.push_back(Bucheron);
                    cartechoisijoueur.push_back(Espion);
                    std::shuffle(std::begin(cartechoisijoueur), std::end(cartechoisijoueur), std::random_device());
                    for(int i=0; i<10; i++){
                        Partie::AllCarte.push_back(std::pair<Cartes*,int>(cartechoisijoueur.at(i), 10));
                    }
                    for(int i=10; i<cartechoisijoueur.size(); i++){
                        cartechoisijoueur.at(i)->~Cartes();
                    }
                    /*for(int i=0; i<Partie::AllCarte.size(); i++){
                        std::cout<<Partie::AllCarte.at(i).first->nom << " ";
                    }*/
                    selectionbool=false;
                    menubool=false;
                    jeubool=true;
                    reglebool=false;
                    finjeu=false;
                }
                if(this->boutonselectioncartes10->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool && !menubool){
                    Partie::AllCarte.push_back(std::pair<Cartes*, int>(Forgeron, 10));
                    Partie::AllCarte.push_back(std::pair<Cartes*, int>(SalleDuConseil, 10));
                    Partie::AllCarte.push_back(std::pair<Cartes*, int>(festival, 10));
                    Partie::AllCarte.push_back(std::pair<Cartes*, int>(Laboratoire, 10));  
                    Partie::AllCarte.push_back(std::pair<Cartes*, int>(village, 10)); 
                    Partie::AllCarte.push_back(std::pair<Cartes*, int>(Bucheron, 10)); 
                    Partie::AllCarte.push_back(std::pair<Cartes*, int>(Jardins, 10)); 
                    Partie::AllCarte.push_back(std::pair<Cartes*, int>(Sorciere, 10)); 
                    Partie::AllCarte.push_back(std::pair<Cartes*, int>(Marche, 10)); 
                    Partie::AllCarte.push_back(std::pair<Cartes*, int>(Douves, 10));

                    PreteurSurGage->~Moneylender();
                    Chapelle->~Chapel();
                    Cave->~Cellar();
                    atelier->~Workshop();
                    SalleDuTrone->~ThroneRoom();
                    Milice->~Militia();
                    Bureaucrate->~Bureaucrat();
                    Renovation->~Remodel();
                    Bibliotheque->~Library();
                    Voleur->~Thief();
                    Chancelier->~Chancellor();
                    Festin->~Feast();
                    Aventurier->~Adventurer();
                    Espion->~Spy();
                    mine->~Mine();


                    selectionbool=false;
                    menubool=false;
                    jeubool=true;
                    reglebool=false;
                    finjeu=false;
                }
            }
        }    
        this->window->draw(sf::Sprite(*this->backgroundtext));
        if(nbjoueurhumain==1){
            this->window->draw(*(this->boutonselection1ia));
            this->window->draw(*(this->chiffre0ia));
            this->window->draw(*(this->boutonselection2ia));
            this->window->draw(*(this->chiffre1ia));
            this->window->draw(*(this->boutonselection3ia));
            this->window->draw(*(this->chiffre2ia));
            this->window->draw(*(this->boutonselection4ia));
            this->window->draw(*(this->chiffre3ia));
        }
        else if(nbjoueurhumain==2){
            this->window->draw(*(this->boutonselection1ia));
            this->window->draw(*(this->chiffre0ia));
            this->window->draw(*(this->boutonselection2ia));
            this->window->draw(*(this->chiffre1ia));
            this->window->draw(*(this->boutonselection3ia));
            this->window->draw(*(this->chiffre2ia));
        }
        else if(nbjoueurhumain==3){
            this->window->draw(*(this->boutonselection1ia));
            this->window->draw(*(this->chiffre0ia));
            this->window->draw(*(this->boutonselection2ia));
            this->window->draw(*(this->chiffre1ia));
        }
        else if(nbjoueurhumain==4){
            this->window->draw(*(this->boutonselection1ia));
            this->window->draw(*(this->chiffre0ia));
        }
        this->window->draw(*(this->boutonselectionhumain));
        this->window->draw(*(this->boutonselectionia));
        this->window->draw(*(this->Humainselectiontext));
        this->window->draw(*(this->Iaselectiontext));
        this->window->draw(*(this->boutonselection1h));
        this->window->draw(*(this->chiffre1));
        this->window->draw(*(this->boutonselection2h));
        this->window->draw(*(this->chiffre2));
        this->window->draw(*(this->boutonselection3h));
        this->window->draw(*(this->chiffre3));
        this->window->draw(*(this->boutonselection4h));
        this->window->draw(*(this->chiffre4));
        this->window->draw(*(this->boutonselectioncartes));
        this->window->draw(*(this->boutonselectioncartes10));
        this->window->draw(*(this->boutonselectioncartesrng));
        this->window->draw(*(this->selectioncarte));
        this->window->draw(*(this->selectioncarte10));
        this->window->draw(*(this->selectioncarterng));
        this->window->display();
    }
}

void Partie::setupcard(){
    for(int i=0; i<Partie::AllCarte.size(); i++){
        for(int y=0; y<Partie::AllCarte.at(i).first->Phycarte->size(); y++){
            Partie::AllCarte.at(i).first->Phycarte->at(y)->setScale(sf::Vector2f(0.6,0.6));
        }
    }
    Partie::AllCarte.at(0).first->Phycarte->at(0)->setPosition(sf::Vector2f(100,100));
    Partie::AllCarte.at(1).first->Phycarte->at(0)->setPosition(sf::Vector2f(100,330));
    Partie::AllCarte.at(2).first->Phycarte->at(0)->setPosition(sf::Vector2f(100,560));
    Partie::AllCarte.at(6).first->Phycarte->at(0)->setPosition(sf::Vector2f(100,790));
    Partie::AllCarte.at(3).first->Phycarte->at(0)->setPosition(sf::Vector2f(300,100));
    Partie::AllCarte.at(4).first->Phycarte->at(0)->setPosition(sf::Vector2f(300,330));
    Partie::AllCarte.at(5).first->Phycarte->at(0)->setPosition(sf::Vector2f(300,560));
    int incr = 150;
    for(int i=7; i<Partie::AllCarte.size(); i++){
        if(i<=11){
            Partie::AllCarte.at(i).first->Phycarte->at(0)->setPosition(sf::Vector2f(400+incr,100));
            incr+=150;
            if(i==11) incr=150;
        }
        else{
            Partie::AllCarte.at(i).first->Phycarte->at(0)->setPosition(sf::Vector2f(400+incr,330));
            incr+=150;
        }    
    }

    for(int i=0; i<Partie::AllCarte.size(); i++){
        for(int y=0; y<Partie::AllCarte.at(i).first->Phycarte->size(); y++){
            Partie::AllCarte.at(i).first->Phycarte->at(y)->setOrigin(Partie::AllCarte.at(i).first->Phycarte->at(0)->getGlobalBounds().height/2, Partie::AllCarte.at(i).first->Phycarte->at(0)->getGlobalBounds().width/2);
        }
    }


    this->chiffre0ia->setString(std::to_string(Partie::AllCarte.at(0).second));
    this->chiffre0ia->setCharacterSize(40);
    this->chiffre0ia->setOutlineThickness(1);
    this->chiffre0ia->setOutlineColor(sf::Color::Black);
    this->chiffre0ia->setFillColor(sf::Color(252,238,170));
    this->chiffre0ia->setPosition(sf::Vector2f(170,225));

    this->regletext->setString(std::to_string(Partie::AllCarte.at(1).second));
    this->regletext->setCharacterSize(40);
    this->regletext->setOutlineThickness(1);
    this->regletext->setOutlineColor(sf::Color::Black);
    this->regletext->setFillColor(sf::Color(252,238,170));
    this->regletext->setPosition(sf::Vector2f(170,455));

    this->regletop->setString(std::to_string(Partie::AllCarte.at(2).second));
    this->regletop->setCharacterSize(40);
    this->regletop->setOutlineThickness(1);
    this->regletop->setOutlineColor(sf::Color::Black);
    this->regletop->setFillColor(sf::Color(252,238,170));
    this->regletop->setPosition(sf::Vector2f(170,685));

    this->text->setString(std::to_string(Partie::AllCarte.at(6).second));
    this->text->setCharacterSize(40);
    this->text->setOutlineThickness(1);
    this->text->setOutlineColor(sf::Color::Black);
    this->text->setFillColor(sf::Color(252,238,170));
    this->text->setPosition(sf::Vector2f(170,915));

    this->chiffre1ia->setString(std::to_string(Partie::AllCarte.at(3).second));
    this->chiffre1ia->setCharacterSize(40);
    this->chiffre1ia->setOutlineThickness(1);
    this->chiffre1ia->setOutlineColor(sf::Color::Black);
    this->chiffre1ia->setFillColor(sf::Color(252,238,170));
    this->chiffre1ia->setPosition(sf::Vector2f(370,225));

    this->Playtext->setString(std::to_string(Partie::AllCarte.at(4).second));
    this->Playtext->setCharacterSize(40);
    this->Playtext->setOutlineThickness(1);
    this->Playtext->setOutlineColor(sf::Color::Black);
    this->Playtext->setFillColor(sf::Color(252,238,170));
    this->Playtext->setPosition(sf::Vector2f(370,455));

    this->Rtext->setString(std::to_string(Partie::AllCarte.at(5).second));
    this->Rtext->setCharacterSize(40);
    this->Rtext->setOutlineThickness(1);
    this->Rtext->setOutlineColor(sf::Color::Black);
    this->Rtext->setFillColor(sf::Color(252,238,170));
    this->Rtext->setPosition(sf::Vector2f(370,685));

    this->chiffre2ia->setString(std::to_string(Partie::AllCarte.at(7).second));
    this->chiffre2ia->setCharacterSize(40);
    this->chiffre2ia->setOutlineThickness(1);
    this->chiffre2ia->setOutlineColor(sf::Color::Black);
    this->chiffre2ia->setFillColor(sf::Color(252,238,170));
    this->chiffre2ia->setPosition(sf::Vector2f(545,15));

    this->chiffre3ia->setString(std::to_string(Partie::AllCarte.at(8).second));
    this->chiffre3ia->setCharacterSize(40);
    this->chiffre3ia->setOutlineThickness(1);
    this->chiffre3ia->setOutlineColor(sf::Color::Black);
    this->chiffre3ia->setFillColor(sf::Color(252,238,170));
    this->chiffre3ia->setPosition(sf::Vector2f(695,15));

    this->chiffre1->setString(std::to_string(Partie::AllCarte.at(9).second));
    this->chiffre1->setCharacterSize(40);
    this->chiffre1->setOutlineThickness(1);
    this->chiffre1->setOutlineColor(sf::Color::Black);
    this->chiffre1->setFillColor(sf::Color(252,238,170));
    this->chiffre1->setPosition(sf::Vector2f(845,15));

    this->chiffre2->setString(std::to_string(Partie::AllCarte.at(10).second));
    this->chiffre2->setCharacterSize(40);
    this->chiffre2->setOutlineThickness(1);
    this->chiffre2->setOutlineColor(sf::Color::Black);
    this->chiffre2->setFillColor(sf::Color(252,238,170));
    this->chiffre2->setPosition(sf::Vector2f(995,15));

    this->chiffre3->setString(std::to_string(Partie::AllCarte.at(11).second));
    this->chiffre3->setCharacterSize(40);
    this->chiffre3->setOutlineThickness(1);
    this->chiffre3->setOutlineColor(sf::Color::Black);
    this->chiffre3->setFillColor(sf::Color(252,238,170));
    this->chiffre3->setPosition(sf::Vector2f(1145,15));

    this->Humainselectiontext->setString(std::to_string(Partie::AllCarte.at(12).second));
    this->Humainselectiontext->setCharacterSize(40);
    this->Humainselectiontext->setOutlineThickness(1);
    this->Humainselectiontext->setOutlineColor(sf::Color::Black);
    this->Humainselectiontext->setFillColor(sf::Color(252,238,170));
    this->Humainselectiontext->setPosition(sf::Vector2f(545,490));

    this->Iaselectiontext->setString(std::to_string(Partie::AllCarte.at(13).second));
    this->Iaselectiontext->setCharacterSize(40);
    this->Iaselectiontext->setOutlineThickness(1);
    this->Iaselectiontext->setOutlineColor(sf::Color::Black);
    this->Iaselectiontext->setFillColor(sf::Color(252,238,170));
    this->Iaselectiontext->setPosition(sf::Vector2f(695,490));

    this->selectioncarte10->setString(std::to_string(Partie::AllCarte.at(14).second));
    this->selectioncarte10->setCharacterSize(40);
    this->selectioncarte10->setOutlineThickness(1);
    this->selectioncarte10->setOutlineColor(sf::Color::Black);
    this->selectioncarte10->setFillColor(sf::Color(252,238,170));
    this->selectioncarte10->setPosition(sf::Vector2f(845,490));

    this->selectioncarte->setString(std::to_string(Partie::AllCarte.at(15).second));
    this->selectioncarte->setCharacterSize(40);
    this->selectioncarte->setOutlineThickness(1);
    this->selectioncarte->setOutlineColor(sf::Color::Black);
    this->selectioncarte->setFillColor(sf::Color(252,238,170));
    this->selectioncarte->setPosition(sf::Vector2f(995,490));

    this->selectioncarterng->setString(std::to_string(Partie::AllCarte.at(16).second));
    this->selectioncarterng->setCharacterSize(40);
    this->selectioncarterng->setOutlineThickness(1);
    this->selectioncarterng->setOutlineColor(sf::Color::Black);
    this->selectioncarterng->setFillColor(sf::Color(252,238,170));
    this->selectioncarterng->setPosition(sf::Vector2f(1145,490));

    this->finachat = new sf::Sprite();
    this->finachat->setTexture(*buttontext);
    this->finachat->setScale(sf::Vector2f(0.5,0.4));
    this->finachat->setOrigin(sf::Vector2f(820/2,304/2));
    this->finachat->setPosition(sf::Vector2f(1600,400));

    this->finaction = new sf::Sprite();
    this->finaction->setTexture(*buttontext);
    this->finaction->setScale(sf::Vector2f(0.5,0.4));
    this->finaction->setOrigin(sf::Vector2f(820/2,304/2));
    this->finaction->setPosition(sf::Vector2f(1600,400));

    
    this->action = new sf::Text;
    this->action->setFont(*font);
    this->action->setString(std::to_string(jtest->action));
    this->action->setCharacterSize(50);
    this->action->setOutlineThickness(1);
    this->action->setOutlineColor(sf::Color::Black);
    this->action->setFillColor(sf::Color(252,238,170));
    this->action->setPosition(sf::Vector2f(1760,100));

    
    this->nbrachat = new sf::Text;
    this->nbrachat->setFont(*font);
    this->nbrachat->setString(std::to_string(jtest->nbrachat));
    this->nbrachat->setCharacterSize(50);
    this->nbrachat->setOutlineThickness(1);
    this->nbrachat->setOutlineColor(sf::Color::Black);
    this->nbrachat->setFillColor(sf::Color(252,238,170));
    this->nbrachat->setPosition(sf::Vector2f(1680,100));
    
    this->gold = new sf::Text;
    this->gold->setFont(*font);
    this->gold->setString(std::to_string(jtest->achat));
    this->gold->setCharacterSize(50);
    this->gold->setOutlineThickness(1);
    this->gold->setOutlineColor(sf::Color::Black);
    this->gold->setFillColor(sf::Color(252,238,170));
    this->gold->setPosition(sf::Vector2f(1600,100));

    this->panneauRegle->setScale(0.12,0.05);
    this->panneauRegle->setOrigin(sf::Vector2f(2637/2,2777/2));
    this->panneauRegle->setPosition(sf::Vector2f(1700,100));
}


/*void Partie::setupplayer(Joueur *j1){
    for(int i=1; i<8; i++){
        j1->Deck.push_back(std::pair(cuivre,cuivre->Phycarte->at(i)));
        Partie::AllCarte.at(0).second--;
    }
    for(int i=0;i<3;i++){
        j1->Deck.push_back(std::pair(Domaine, Domaine->Phycarte->at(i)));
        Partie::AllCarte.at(3).second--;
    }
    std::shuffle(std::begin(j1->Deck), std::end(j1->Deck), std::random_device());
    for(int i = 0; i<j1->Deck.size(); i++){
        std::cout << j1->Deck.at(i)->nom << std::endl;
    }
    std::cout << std::endl;
    //j1->Deck.erase(std::begin(j1->Deck));
    for(int i = 0; i<j1->Deck.size(); i++){
        std::cout << j1->Deck.at(i)->nom << std::endl;
    }
    
    for(int i=0;i<5;i++){
        j1->piocher();
        std::cout << "\n Deck : ";
        for(int i = 0; i<j1->Deck.size(); i++){
            std::cout << j1->Deck.at(i)->nom << std::endl;
        }
        std::cout<<j1->Main.at(i)->nom;
    }
}*/

void Partie::actualisercarte(){
    this->chiffre0ia->setString(std::to_string(Partie::AllCarte.at(0).second));
    this->regletext->setString(std::to_string(Partie::AllCarte.at(1).second));
    this->regletop->setString(std::to_string(Partie::AllCarte.at(2).second));
    this->text->setString(std::to_string(Partie::AllCarte.at(6).second));
    this->chiffre1ia->setString(std::to_string(Partie::AllCarte.at(3).second));
    this->Playtext->setString(std::to_string(Partie::AllCarte.at(4).second));
    this->Rtext->setString(std::to_string(Partie::AllCarte.at(5).second));
    this->chiffre2ia->setString(std::to_string(Partie::AllCarte.at(7).second));
    this->chiffre3ia->setString(std::to_string(Partie::AllCarte.at(8).second));
    this->chiffre1->setString(std::to_string(Partie::AllCarte.at(9).second));
    this->chiffre2->setString(std::to_string(Partie::AllCarte.at(10).second));
    this->chiffre3->setString(std::to_string(Partie::AllCarte.at(11).second));
    this->Humainselectiontext->setString(std::to_string(Partie::AllCarte.at(12).second));
    this->Iaselectiontext->setString(std::to_string(Partie::AllCarte.at(13).second));
    this->selectioncarte10->setString(std::to_string(Partie::AllCarte.at(14).second));
    this->selectioncarte->setString(std::to_string(Partie::AllCarte.at(15).second));
    this->selectioncarterng->setString(std::to_string(Partie::AllCarte.at(16).second));
    this->action->setString(std::to_string(allplayer.at(joueurplus)->action));
    this->nbrachat->setString(std::to_string(allplayer.at(joueurplus)->nbrachat));
    this->gold->setString(std::to_string(allplayer.at(joueurplus)->achat));
}




void Partie::jeu(){
    if(this->jeubool==true){
        this->window->clear();
        
        if(!jeustarted){
            this->setupcard();
            if(nbjoueurhumain==1){
                for(int i = 0; i<3; i++){
                    allplayer.pop_back();
                }      
            }
            else if(nbjoueurhumain==2){
                for(int i = 0; i<2; i++){
                    allplayer.pop_back();
                }      
            }
            else if(nbjoueurhumain==3){
                allplayer.pop_back();
            }
            for(int i=0; i<allplayer.size(); i++){
                for(int y=0; y<7; y++){
                allplayer.at(i)->Deck.push_back(std::pair<Cartes*,sf::RectangleShape*>(cuivre, cuivre->Phycarte->at(Partie::AllCarte.at(0).second-1)));
                Partie::AllCarte.at(0).second--;
                }
                for(int y=0;y<3;y++){
                    allplayer.at(i)->Deck.push_back(std::pair<Cartes*,sf::RectangleShape*>(Domaine, Domaine->Phycarte->at(Partie::AllCarte.at(3).second-1)));
                    Partie::AllCarte.at(3).second--;
                }
                std::shuffle(std::begin(allplayer.at(i)->Deck), std::end(allplayer.at(i)->Deck), std::random_device());
            }
            //allplayer.at(0)->Main.push_back(std::pair<Cartes*,sf::RectangleShape*>(Jardins, Jardins->Phycarte->at(Partie::AllCarte.at(13).second-1)));
            //allplayer.at(1)->Main.push_back(std::pair<Cartes*,sf::RectangleShape*>(Douves, Douves->Phycarte->at(Partie::AllCarte.at(16).second-1)));
            //this->setupplayer(j1);
            
            /*for(int i=0;i<5;i++){
                jtest->piocher();
            }
            for(int i=0; i<jtest->Main.size(); i++){
            if(jtest->Main.at(i).first->nom=="Cuivre"){
                jtest->achat++;
            }
            else if(jtest->Main.at(i).first->nom=="Argent"){
                jtest->achat+=2;
            }
            else if(jtest->Main.at(i).first->nom=="Or"){
                jtest->achat+=3;
            }
        }*/
        }
        actualisercarte();
        jeustarted=true;
        /*switch (nbjoueurhumain)
        {
        case 1:
            Humain *h1 = new Humain();
            break;
        case 2:
            Humain *h1 = new Humain();
            Humain *h2 = new Humain();
            break;
        case 3:
            Humain *h1 = new Humain();
            Humain *h2 = new Humain();
            Humain *h3 = new Humain();
            break;
        case 4:
            Humain *h1 = new Humain();
            Humain *h2 = new Humain();
            Humain *h3 = new Humain();
            Humain *h4 = new Humain();
            break;
        default:
            Humain *h1 = new Humain();
            break;
        }*/
        

        /*if(ev.type == sf::Event::MouseButtonPressed && ev.mouseButton.button==sf::Mouse::Left){
            for(int i=0; i<Partie::AllCarte.size(); i++){
                if(!button_pressed){
                    if(Partie::AllCarte.at(i).first->Phycarte->at(0)->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window)))){
                        Partie::AllCarte.at(i).second = Partie::AllCarte.at(i).second-1;
                        button_pressed=true;
                    }
                }
            }
        }*/

        /*if(ev.type == sf::Event::MouseButtonPressed && ev.mouseButton.button==sf::Mouse::Left){
            for(int i=0; i<jtest->Main.size(); i++){
                if(!button_pressed){
                    if(jtest->Main.at(i).second->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window)))){
                        jtest->Main.at(i).first->appliquer_effet(jtest, allplayer);
                        button_pressed=true;
                    }
                }
            }
        }*/

        if(ev.type == sf::Event::MouseButtonReleased){
            button_pressed=false;
            boutonachat=false;
            boutonaction=true;
        }
        
        /*for(int i=0; i<Partie::AllCarte.size(); i++){
            for(int y=0; y<Partie::AllCarte.at(i).first->Phycarte->size(); y++){
                if(Partie::AllCarte.at(i).first->Phycarte->at(y)->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))))
                {
                    Partie::AllCarte.at(i).first->Phycarte->at(y)->setScale(sf::Vector2f(0.75,0.75));
                }
                else{
                    Partie::AllCarte.at(i).first->Phycarte->at(y)->setScale(sf::Vector2f(0.6,0.6));
                }
            }
        }*/
        //std::cout << Partie::AllCarte.at(16).second << " ";
        
        window->draw(sf::Sprite(*this->backgroundtext));

        

        for(int i=Partie::AllCarte.size()-1; i>=0; i--){
            if(Partie::AllCarte.at(i).second>0){
                window->draw(*this->AllCarte.at(i).first->Phycarte->at(0));
            }
        }

        /*for(int i=0; i<jtest->Defausse.size(); i++){
            jtest->Defausse.at(i).second->setPosition(sf::Vector2f(1700-incrmain,100));
            //jtest->Main.at(i)->setPosition(sf::Vector2f(1700-incrmain,800));
            //jtest->Main.at(i)->Phycarte->at(1)->setPosition(sf::Vector2f(1700-incrmain,800));
            window->draw(*jtest->Defausse.at(i).second);
            incrmain+=150;
        }
        incrmain=0;

        /*for(int i=0; i<jtest->Deck.size(); i++){
            jtest->Deck.at(i).second->setPosition(sf::Vector2f(1700-incrmain,400));
            //jtest->Main.at(i)->setPosition(sf::Vector2f(1700-incrmain,800));
            //jtest->Main.at(i)->Phycarte->at(1)->setPosition(sf::Vector2f(1700-incrmain,800));
            window->draw(*jtest->Deck.at(i).second);
            incrmain+=150;
        }
        incrmain=0;*/
    
        for(int i=0; i<allplayer.at(joueurplus)->Main.size(); i++){
            allplayer.at(joueurplus)->Main.at(i).second->setPosition(sf::Vector2f(1700-incrmain,750));
            //jtest->Main.at(i)->setPosition(sf::Vector2f(1700-incrmain,800));
            //jtest->Main.at(i)->Phycarte->at(1)->setPosition(sf::Vector2f(1700-incrmain,800));
            window->draw(*allplayer.at(joueurplus)->Main.at(i).second);
            incrmain+=150;
        }
        incrmain=0;

        for(int i=0; i<allplayer.at(joueurplus)->plateau.size(); i++){
            allplayer.at(joueurplus)->plateau.at(i).second->setPosition(sf::Vector2f(1700-incrmain,500));
            //jtest->Main.at(i)->setPosition(sf::Vector2f(1700-incrmain,800));
            //jtest->Main.at(i)->Phycarte->at(1)->setPosition(sf::Vector2f(1700-incrmain,800));
            window->draw(*allplayer.at(joueurplus)->plateau.at(i).second);
            incrmain+=150;
        }
        incrmain=0;



            window->draw(*this->chiffre0ia);
            window->draw(*this->chiffre1ia);
            window->draw(*this->chiffre2ia);
            window->draw(*this->chiffre3ia);
            window->draw(*this->chiffre1);
            window->draw(*this->chiffre2);
            window->draw(*this->chiffre3);
            window->draw(*this->regletext);
            window->draw(*this->regletop);
            window->draw(*this->text);
            window->draw(*this->Playtext);
            window->draw(*this->Rtext);
            window->draw(*this->Humainselectiontext);
            window->draw(*this->Iaselectiontext);
            window->draw(*this->selectioncarte10);
            window->draw(*this->selectioncarte);
            window->draw(*this->selectioncarterng);
            window->draw(*this->panneauRegle);
            window->draw(*this->nbrachat);
            window->draw(*this->gold);
            window->draw(*this->action);
            window->draw(*this->nbrachatimg);
            window->draw(*this->goldimg);
            window->draw(*this->actionimg);
            window->draw(*this->phaseactuelle);
            window->draw(*this->terminer);
        //std::cout << jtest->Main.size();
        if(phaseaction){
            
            if(entrer){
                for(int i=0; i<5; i++){
                    if(allplayer.at(joueurplus)->Deck.size()==0){
                        for(int i=0; i<allplayer.at(joueurplus)->Defausse.size(); i++){
                            allplayer.at(joueurplus)->Deck.push_back(allplayer.at(joueurplus)->Defausse.at(i));
                        }
                        allplayer.at(joueurplus)->Defausse.clear();
                        std::shuffle(std::begin(allplayer.at(joueurplus)->Deck), std::end(allplayer.at(joueurplus)->Deck), std::random_device());
                    }
                    allplayer.at(joueurplus)->piocher();
                }
                while(allplayer.at(joueurplus)->Main.at(allplayer.at(joueurplus)->Main.size()-1).first->nom=="Festival" || allplayer.at(joueurplus)->Main.at(allplayer.at(joueurplus)->Main.size()-1).first->nom=="Woodcutter"){
                    std::shuffle(std::begin(allplayer.at(joueurplus)->Main), std::end(allplayer.at(joueurplus)->Main), std::random_device());
                }
                for(int i=0; i<allplayer.at(joueurplus)->Main.size(); i++){
                        if(allplayer.at(joueurplus)->Main.at(i).first->nom=="Cuivre"){
                            allplayer.at(joueurplus)->achat++;
                        }
                        else if(allplayer.at(joueurplus)->Main.at(i).first->nom=="Argent"){
                            allplayer.at(joueurplus)->achat+=2;
                        }
                        else if(allplayer.at(joueurplus)->Main.at(i).first->nom=="Or"){
                            allplayer.at(joueurplus)->achat+=3;
                        }
                    }
            entrer=false;
            }
            window->draw(*this->finachat);
            this->phaseactuelle->setString("Phase d'action joueur " + std::to_string(joueurplus+1));
            window->draw(*this->phaseactuelle);
            this->terminer->setString("Terminer la phase d'action");
            this->terminer->setPosition(sf::Vector2f(1460,380));
            window->draw(*this->terminer);
            for(int i=0; i<Partie::AllCarte.size(); i++){
                Partie::AllCarte.at(i).first->Phycarte->at(0)->setFillColor(sf::Color(255,255,255));
            }
            if(ev.type == sf::Event::MouseButtonPressed && ev.mouseButton.button==sf::Mouse::Left){
                if(finachat->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window)))){
                    if(!boutonachat){
                        phaseachat=true;
                        phaseaction=false;
                        boutonachat=true;
                    }
                }
            }
            /*if(ev.type == sf::Event::MouseButtonPressed && ev.mouseButton.button==sf::Mouse::Left){
                if(!button_pressed){
                        if(jtest->Main.at(0).first->Phycarte->at(9)->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window)))){
                            jtest->piocher();
                            button_pressed=true;
                        }
                }
            }*/
            if(allplayer.at(joueurplus)->action>0){
            for(int i=0; i<allplayer.at(joueurplus)->Main.size(); i++){
                //std::cout << "(" << i << " " << jtest->Main.size() << ")";
                if(allplayer.at(joueurplus)->Main.at(i).first->nom!="Cuivre" && allplayer.at(joueurplus)->Main.at(i).first->nom!="Argent" && allplayer.at(joueurplus)->Main.at(i).first->nom!="Or"
                && allplayer.at(joueurplus)->Main.at(i).first->nom!="Malediction" && allplayer.at(joueurplus)->Main.at(i).first->nom!="Duche" && allplayer.at(joueurplus)->Main.at(i).first->nom!="Province"
                && allplayer.at(joueurplus)->Main.at(i).first->nom!="Domaine" && allplayer.at(joueurplus)->Main.at(i).first->nom!="Gardens"){
                    if(ev.type == sf::Event::MouseButtonPressed && ev.mouseButton.button==sf::Mouse::Left){
                            
                                for(int y=0; y<allplayer.at(joueurplus)->Main.at(i).first->Phycarte->size(); y++){
                                        if(allplayer.at(joueurplus)->Main.at(i).first->Phycarte->at(y)->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window)))){
                                            if(!button_pressed){
                                                allplayer.at(joueurplus)->action--;
                                                allplayer.at(joueurplus)->plateau.push_back(allplayer.at(joueurplus)->Main.at(i));
                                                /*if(allplayer.at(joueurplus)->Main.at(i).first->nom=="Cellar"){
                                                    //cellar(allplayer.at(joueurplus));
                                                    //effetcellar=true;
                                                    //while(effetcellar){
                                                        //std::cout << "A";
                                                        /*if(ev.type == sf::Event::MouseButtonPressed && ev.mouseButton.button==sf::Mouse::Left){
                                                            if(!button_pressed){
                                                                if(allplayer.at(joueurplus)->Main.at(i).first->Phycarte->at(0)->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window)))){
                                                                    allplayer.at(joueurplus)->Defausse.push_back(allplayer.at(joueurplus)->Main.at(i));
                                                                    allplayer.at(joueurplus)->piocher();
                                                                    button_pressed=true;
                                                                }
                                                            }
                                                        }*/
                                                        /*if(this->ev.key.code == sf::Keyboard::S){
                                                            effetcellar=false;
                                                        }
                                                    //}
                                                }
                                                if(allplayer.at(joueurplus)->Main.at(i).first->nom=="Workshop"){
                                                    workshopbool=true;
                                                }*/
                                                allplayer.at(joueurplus)->plateau.at(allplayer.at(joueurplus)->plateau.size()-1).first->appliquer_effet(allplayer.at(joueurplus), allplayer);
                                                while(allplayer.at(joueurplus)->Main.at(allplayer.at(joueurplus)->Main.size()-1).first->nom=="Festival" || allplayer.at(joueurplus)->Main.at(allplayer.at(joueurplus)->Main.size()-1).first->nom=="Woodcutter"){
                                                    std::shuffle(std::begin(allplayer.at(joueurplus)->Main), std::end(allplayer.at(joueurplus)->Main), std::random_device());
                                                }
                                                allplayer.at(joueurplus)->Main.erase(std::find(allplayer.at(joueurplus)->Main.begin(), allplayer.at(joueurplus)->Main.end(), allplayer.at(joueurplus)->Main.at(i)));
                                                button_pressed=true;
                                                
                                            }
                                } 
                            }
                    }
                    for(int y=0; y<allplayer.at(joueurplus)->Main.at(i).first->Phycarte->size(); y++){
                        if(allplayer.at(joueurplus)->Main.at(i).first->Phycarte->at(y)->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && allplayer.at(joueurplus)->Main.at(i).first->nom!="Cuivre" && allplayer.at(joueurplus)->Main.at(i).first->nom!="Argent" && allplayer.at(joueurplus)->Main.at(i).first->nom!="Or"
                        && allplayer.at(joueurplus)->Main.at(i).first->nom!="Malediction" && allplayer.at(joueurplus)->Main.at(i).first->nom!="Duche" && allplayer.at(joueurplus)->Main.at(i).first->nom!="Province"
                        && allplayer.at(joueurplus)->Main.at(i).first->nom!="Domaine" && allplayer.at(joueurplus)->Main.at(i).first->nom!="Gardens")
                        {
                            allplayer.at(joueurplus)->Main.at(i).first->Phycarte->at(y)->setScale(sf::Vector2f(0.75,0.75));
                        }
                        else{
                            allplayer.at(joueurplus)->Main.at(i).first->Phycarte->at(y)->setScale(sf::Vector2f(0.6,0.6));
                        }
                    }
                }
                
            }
        }
        }
        if(phaseachat){
            if(Partie::AllCarte.at(5).second==0 || comptedeckvide>=3){
                finjeu=true;
                jeubool=false;
            }
            
            window->draw(*this->finaction);
            this->phaseactuelle->setString("Phase d'achat joueur " + std::to_string(joueurplus+1));
            window->draw(*this->phaseactuelle);
            this->terminer->setString("Terminer le tour");
            this->terminer->setPosition(sf::Vector2f(1520,380));
             window->draw(*this->terminer);
            if(ev.type == sf::Event::MouseButtonPressed && ev.mouseButton.button==sf::Mouse::Left){
                if(finaction->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window)))){
                    if(!boutonachat){
                        for(int i=0; i<allplayer.at(joueurplus)->plateau.size(); i++){
                            allplayer.at(joueurplus)->Defausse.push_back(allplayer.at(joueurplus)->plateau.at(i));
                        }
                        for(int i=0; i<allplayer.at(joueurplus)->Main.size(); i++){
                            //std::cout << jtest->Main.at(0).first->nom;
                            allplayer.at(joueurplus)->Defausse.push_back(allplayer.at(joueurplus)->Main.at(i));    
                        }
                        allplayer.at(joueurplus)->Main.clear();
                        allplayer.at(joueurplus)->plateau.clear();
                        
                        allplayer.at(joueurplus)->achat=0;
                        allplayer.at(joueurplus)->action=1;
                        allplayer.at(joueurplus)->nbrachat=1;

                        if(joueurplus==allplayer.size()-1){
                            joueurplus=0;
                        }
                        else{
                            joueurplus++;
                        }

                        std::cout << "| " << joueurplus << " " << allplayer.at(joueurplus)->achat << " " << allplayer.at(joueurplus)->action << " "
                        << allplayer.at(joueurplus)->nbrachat << " ";
                        
                        phaseachat=false;
                        phaseaction=true;
                        boutonachat=true;
                        entrer=true;
                    }
                }
            }
            for(int i=0; i<Partie::AllCarte.size(); i++){
                    if(Partie::AllCarte.at(i).first->cout>allplayer.at(joueurplus)->achat){
                        sf::Uint8 light = 100;
                        if(Partie::AllCarte.at(i).second>0){
                            Partie::AllCarte.at(i).first->Phycarte->at(0)->setFillColor(sf::Color(light,light,light));
                        }
                        
                    }
                    else{
                        if(allplayer.at(joueurplus)->nbrachat>0){
                            if(ev.type == sf::Event::MouseButtonPressed && ev.mouseButton.button==sf::Mouse::Left){
                                    if(!button_pressed){
                                        if(Partie::AllCarte.at(i).first->Phycarte->at(0)->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && Partie::AllCarte.at(i).second>0){
                                            if(Partie::AllCarte.at(i).first->nom=="Cuivre"){
                                                allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                                //Partie::AllCarte.at(i).first->Phycarte->erase(std::find(Partie::AllCarte.at(i).first->Phycarte->begin(), Partie::AllCarte.at(i).first->Phycarte->end(), Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                            }
                                            else if(Partie::AllCarte.at(i).first->nom=="Argent"){
                                                allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                            }
                                            else if(Partie::AllCarte.at(i).first->nom=="Or"){
                                                allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                            }
                                            else if(Partie::AllCarte.at(i).first->nom=="Malediction"){
                                                allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                            }
                                            else if(Partie::AllCarte.at(i).first->nom=="Domaine"){
                                                allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                            }
                                            else if(Partie::AllCarte.at(i).first->nom=="Duche"){
                                                allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                            }
                                            else if(Partie::AllCarte.at(i).first->nom=="Province"){
                                                allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                            }
                                            else{
                                                allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                                //Partie::AllCarte.at(i).first->Phycarte->erase(std::find(Partie::AllCarte.at(i).first->Phycarte->begin(), Partie::AllCarte.at(i).first->Phycarte->end(), Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                            }
                                            allplayer.at(joueurplus)->nbrachat--;
                                            allplayer.at(joueurplus)->achat-=Partie::AllCarte.at(i).first->cout;
                                            Partie::AllCarte.at(i).second = Partie::AllCarte.at(i).second-1;
                                            if(Partie::AllCarte.at(i).second==0){
                                                comptedeckvide++;
                                            }
                                            button_pressed=true;
                                        }
                                    }
                            }
                            for(int y=0; y<Partie::AllCarte.at(i).first->Phycarte->size(); y++){
                                if(Partie::AllCarte.at(i).first->Phycarte->at(y)->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))))
                                {
                                    Partie::AllCarte.at(i).first->Phycarte->at(y)->setScale(sf::Vector2f(0.75,0.75));
                                }
                                else{
                                    Partie::AllCarte.at(i).first->Phycarte->at(y)->setScale(sf::Vector2f(0.6,0.6));
                                }
                            }
                        }
                        else{
                            sf::Uint8 light = 100;
                            if(Partie::AllCarte.at(i).second>0){
                                Partie::AllCarte.at(i).first->Phycarte->at(0)->setFillColor(sf::Color(light,light,light));
                            }
                        }
                    }
            }
            //phaseachat=false;
        }
        /*std::cout<< "Deck : ";
        for(int i=0; i<jtest->Deck.size(); i++){
            std::cout<< jtest->Deck.at(i).first->nom << std::endl;
        }
        std::cout<< "Main : ";
        for(int i=0; i<jtest->Main.size(); i++){
            std::cout<< jtest->Main.at(i).first->nom << std::endl;
        }
        std::cout<< "Defausse : ";
        for(int i=0; i<jtest->Defausse.size(); i++){
            std::cout<< jtest->Defausse.at(i).first->nom << std::endl;
        }*/
        this->window->display();

        
    }
}
/*
void Partie::workshop(Joueur *j){
    if(workshopbool==true){
    int t=j->achat;
    j->achat=4;
    for(int i=0; i<Partie::AllCarte.size(); i++){
        if(Partie::AllCarte.at(i).first->cout>4){
            sf::Uint8 light = 100;
            if(Partie::AllCarte.at(i).second>0){
                Partie::AllCarte.at(i).first->Phycarte->at(0)->setFillColor(sf::Color(light,light,light));
            }
            
        }
        else{
            //if(allplayer.at(joueurplus)->nbrachat>0){
                if(ev.type == sf::Event::MouseButtonPressed && ev.mouseButton.button==sf::Mouse::Left){
                    if(!button_pressed){
                            if(Partie::AllCarte.at(i).first->Phycarte->at(0)->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && Partie::AllCarte.at(i).second>0){
                                if(Partie::AllCarte.at(i).first->nom=="Cuivre"){
                                    allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                    //Partie::AllCarte.at(i).first->Phycarte->erase(std::find(Partie::AllCarte.at(i).first->Phycarte->begin(), Partie::AllCarte.at(i).first->Phycarte->end(), Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                }
                                else if(Partie::AllCarte.at(i).first->nom=="Argent"){
                                    allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                }
                                else if(Partie::AllCarte.at(i).first->nom=="Or"){
                                    allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                }
                                else if(Partie::AllCarte.at(i).first->nom=="Malediction"){
                                    allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                }
                                else if(Partie::AllCarte.at(i).first->nom=="Domaine"){
                                    allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                }
                                else if(Partie::AllCarte.at(i).first->nom=="Duche"){
                                    allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                }
                                else if(Partie::AllCarte.at(i).first->nom=="Province"){
                                    allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                }
                                else{
                                    allplayer.at(joueurplus)->plateau.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(i).first, Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                    //Partie::AllCarte.at(i).first->Phycarte->erase(std::find(Partie::AllCarte.at(i).first->Phycarte->begin(), Partie::AllCarte.at(i).first->Phycarte->end(), Partie::AllCarte.at(i).first->Phycarte->at(Partie::AllCarte.at(i).second-1)));
                                }
                                Partie::AllCarte.at(i).second = Partie::AllCarte.at(i).second-1;
                                if(Partie::AllCarte.at(i).second==0){
                                    comptedeckvide++;
                                }
                                workshopbool=false;
                                button_pressed=true;
                            }
                        }
                }
                for(int y=0; y<Partie::AllCarte.at(i).first->Phycarte->size(); y++){
                    if(Partie::AllCarte.at(i).first->Phycarte->at(y)->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))))
                    {
                        Partie::AllCarte.at(i).first->Phycarte->at(y)->setScale(sf::Vector2f(0.75,0.75));
                    }
                    else{
                        Partie::AllCarte.at(i).first->Phycarte->at(y)->setScale(sf::Vector2f(0.6,0.6));
                    }
                }
            //}
            /*else{
                sf::Uint8 light = 100;
                if(Partie::AllCarte.at(i).second>0){
                    Partie::AllCarte.at(i).first->Phycarte->at(0)->setFillColor(sf::Color(light,light,light));
                }
            }
        }
    }
    }
}

void Partie::cellar(Joueur *j){
    for(int i=0; i<allplayer.at(joueurplus)->Main.size(); i++){
        if(ev.type == sf::Event::MouseButtonPressed && ev.mouseButton.button==sf::Mouse::Left){
            if(!button_pressed){
                std::cout << button_pressed;
                if(allplayer.at(joueurplus)->Main.at(i).first->Phycarte->at(0)->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window)))){
                    allplayer.at(joueurplus)->Defausse.push_back(allplayer.at(joueurplus)->Main.at(i));
                    allplayer.at(joueurplus)->piocher();
                    button_pressed=true;
                }
            }
        }
        if(ev.type == sf::Event::MouseButtonReleased){
            button_pressed=false;
        }
    }
}
*/

void Partie::findejeu(){
    if(finjeu==true){
        window->clear();
        /*if(this->finjeu==true){
            for(int i=0; i<allplayer.size(); i++){
                for(int y=0; y<allplayer.at(i)->Deck.size(); y++){
                // if(std::static_pointer_cast<Victoire> (allplayer.at(i)->Deck.at(y).first.valeur))
                }
            }
            
        }*/
    if(premierentre){
        int max=0;
        for(int i=0; i<allplayer.size(); i++){
            for(int y=0; y<allplayer.at(i)->Main.size(); y++){
                allplayer.at(i)->Deck.push_back(allplayer.at(i)->Main.at(y));
            }
            for(int y=0; y<allplayer.at(i)->Defausse.size(); y++){
                allplayer.at(i)->Deck.push_back(allplayer.at(i)->Defausse.at(y));
            }
            for(int y=0; y<allplayer.at(i)->plateau.size(); y++){
                allplayer.at(i)->Deck.push_back(allplayer.at(i)->plateau.at(y));
            }
        }
        if(nbjoueurhumain==1){
            for(int y=0; y<allplayer.at(0)->Deck.size(); y++){
                if(allplayer.at(0)->Deck.at(y).first->nom=="Domaine"){
                    totalpointj1+=1;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Duche"){
                    totalpointj1+=3;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Province"){
                    totalpointj1+=5;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Malediction"){
                    totalpointj1-=1;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Gardens"){
                    possedejardin=true;
                }
            }
            if(possedejardin){
                totalpointj1+=(int) allplayer.at(0)->Deck.size()/10;
            }
            possedejardin=false;
        }
        if(nbjoueurhumain==2){
            for(int y=0; y<allplayer.at(0)->Deck.size(); y++){
                if(allplayer.at(0)->Deck.at(y).first->nom=="Domaine"){
                    totalpointj1+=1;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Duche"){
                    totalpointj1+=3;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Province"){
                    totalpointj1+=5;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Malediction"){
                    totalpointj1-=1;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Gardens"){
                    possedejardin=true;
                }
            }
            if(possedejardin){
                totalpointj1+=(int) (allplayer.at(0)->Deck.size())/10;
            }
            possedejardin=false;
            for(int y=0; y<allplayer.at(1)->Deck.size(); y++){
                if(allplayer.at(1)->Deck.at(y).first->nom=="Domaine"){
                    totalpointj2+=1;
                }
                else if(allplayer.at(1)->Deck.at(y).first->nom=="Duche"){
                    totalpointj2+=3;
                }
                else if(allplayer.at(1)->Deck.at(y).first->nom=="Province"){
                    totalpointj2+=5;
                }
                else if(allplayer.at(1)->Deck.at(y).first->nom=="Malediction"){
                    totalpointj2-=1;
                }
                else if(allplayer.at(1)->Deck.at(y).first->nom=="Gardens"){
                    possedejardin=true;
                }
            }
            if(possedejardin){
                totalpointj2+=(int) allplayer.at(1)->Deck.size()/10;
            }
            possedejardin=false;
        }
        if(nbjoueurhumain==3){
            for(int y=0; y<allplayer.at(0)->Deck.size(); y++){
                if(allplayer.at(0)->Deck.at(y).first->nom=="Domaine"){
                    totalpointj1+=1;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Duche"){
                    totalpointj1+=3;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Province"){
                    totalpointj1+=5;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Malediction"){
                    totalpointj1-=1;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Gardens"){
                    possedejardin=true;
                }
            }
            if(possedejardin){
                totalpointj1+=(int) allplayer.at(0)->Deck.size()/10;
            }
            possedejardin=false;
            for(int y=0; y<allplayer.at(1)->Deck.size(); y++){
                if(allplayer.at(1)->Deck.at(y).first->nom=="Domaine"){
                    totalpointj2+=1;
                }
                else if(allplayer.at(1)->Deck.at(y).first->nom=="Duche"){
                    totalpointj2+=3;
                }
                else if(allplayer.at(1)->Deck.at(y).first->nom=="Province"){
                    totalpointj2+=5;
                }
                else if(allplayer.at(1)->Deck.at(y).first->nom=="Malediction"){
                    totalpointj2-=1;
                }
                else if(allplayer.at(1)->Deck.at(y).first->nom=="Gardens"){
                    possedejardin=true;
                }
            }
            if(possedejardin){
                totalpointj2+=(int) allplayer.at(1)->Deck.size()/10;
            }
            possedejardin=false;
            for(int y=0; y<allplayer.at(2)->Deck.size(); y++){
                if(allplayer.at(2)->Deck.at(y).first->nom=="Domaine"){
                    totalpointj3+=1;
                }
                else if(allplayer.at(2)->Deck.at(y).first->nom=="Duche"){
                    totalpointj3+=3;
                }
                else if(allplayer.at(2)->Deck.at(y).first->nom=="Province"){
                    totalpointj3+=5;
                }
                else if(allplayer.at(2)->Deck.at(y).first->nom=="Malediction"){
                    totalpointj3-=1;
                }
                else if(allplayer.at(2)->Deck.at(y).first->nom=="Gardens"){
                    possedejardin=true;
                }
            }
            if(possedejardin){
                totalpointj3+=(int) allplayer.at(2)->Deck.size()/10;
            }
            possedejardin=false;
        }
        if(nbjoueurhumain==4){
            for(int y=0; y<allplayer.at(0)->Deck.size(); y++){
                if(allplayer.at(0)->Deck.at(y).first->nom=="Domaine"){
                    totalpointj1+=1;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Malediction"){
                    totalpointj1-=1;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Duche"){
                    totalpointj1+=3;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Province"){
                    totalpointj1+=5;
                }
                else if(allplayer.at(0)->Deck.at(y).first->nom=="Gardens"){
                    possedejardin=true;
                }
            }
            if(possedejardin){
                totalpointj1+=(int) allplayer.at(0)->Deck.size()/10;
            }
            possedejardin=false;
            for(int y=0; y<allplayer.at(1)->Deck.size(); y++){
                if(allplayer.at(1)->Deck.at(y).first->nom=="Domaine"){
                    totalpointj2+=1;
                }
                else if(allplayer.at(1)->Deck.at(y).first->nom=="Duche"){
                    totalpointj2+=3;
                }
                else if(allplayer.at(1)->Deck.at(y).first->nom=="Province"){
                    totalpointj2+=5;
                }
                else if(allplayer.at(1)->Deck.at(y).first->nom=="Malediction"){
                    totalpointj2-=1;
                }
                else if(allplayer.at(1)->Deck.at(y).first->nom=="Gardens"){
                    possedejardin=true;
                }
            }
            if(possedejardin){
                totalpointj2+=(int) allplayer.at(1)->Deck.size()/10;
            }
            possedejardin=false;
            for(int y=0; y<allplayer.at(2)->Deck.size(); y++){
                if(allplayer.at(2)->Deck.at(y).first->nom=="Domaine"){
                    totalpointj3+=1;
                }
                else if(allplayer.at(2)->Deck.at(y).first->nom=="Duche"){
                    totalpointj3+=3;
                }
                else if(allplayer.at(2)->Deck.at(y).first->nom=="Province"){
                    totalpointj3+=5;
                }
                else if(allplayer.at(2)->Deck.at(y).first->nom=="Malediction"){
                    totalpointj3-=1;
                }
                else if(allplayer.at(2)->Deck.at(y).first->nom=="Gardens"){
                    possedejardin=true;
                }
            }
            if(possedejardin){
                totalpointj3+=(int) allplayer.at(2)->Deck.size()/10;
            }
            possedejardin=false;
            for(int y=0; y<allplayer.at(3)->Deck.size(); y++){
                if(allplayer.at(3)->Deck.at(y).first->nom=="Domaine"){
                    totalpointj4+=1;
                }
                else if(allplayer.at(3)->Deck.at(y).first->nom=="Duche"){
                    totalpointj4+=3;
                }
                else if(allplayer.at(3)->Deck.at(y).first->nom=="Province"){
                    totalpointj4+=5;
                }
                else if(allplayer.at(3)->Deck.at(y).first->nom=="Malediction"){
                    totalpointj4-=1;
                }
                else if(allplayer.at(3)->Deck.at(y).first->nom=="Gardens"){
                    possedejardin=true;
                }
            }
            if(possedejardin){
                totalpointj4+=(int) allplayer.at(3)->Deck.size()/10;
            }
            possedejardin=false;
        }
        premierentre=false;
    }
        
        std::string whowon;
        std::vector<int> maxelement = {totalpointj1, totalpointj2, totalpointj3, totalpointj4};
        std::cout << " " << totalpointj1 << " " << totalpointj2 << " " << totalpointj3 << " " << totalpointj4;
        std::sort(maxelement.begin(), maxelement.end());
        int max = maxelement.at(3);
        if(max==totalpointj4){
            whowon = "Joueur 4 a gagne la partie !\n Avec " + std::to_string(max) + " points";
        }
        if(max==totalpointj3){
            whowon = "Joueur 3 a gagne la partie !\n Avec " + std::to_string(max) + " points";
        }
        if(max==totalpointj2){
            whowon = "Joueur 2 a gagne la partie !\n Avec " + std::to_string(max) + " points";
        }
        if(max==totalpointj1){
            whowon = "Joueur 1 a gagne la partie !\n Avec " + std::to_string(max) + " points";
        }
        this->victoire = new sf::Text;
            this->victoire->setFont(*font);
            this->victoire->setString(whowon);
            this->victoire->setCharacterSize(100);
            this->victoire->setOutlineThickness(2);
            this->victoire->setOutlineColor(sf::Color::Black);
            this->victoire->setFillColor(sf::Color(252,238,170));
            this->victoire->setPosition(sf::Vector2f(window->getSize().x/2 - 400,window->getSize().y/2));

        window->draw(sf::Sprite(*this->backgroundtext));
        window->draw(*this->victoire);
        window->display();
    }
}

void Partie::regle(){
    if(this->reglebool==true){
        this->window->clear();
        window->draw(sf::Sprite(*this->backgroundtext));
        window->draw(*(this->panneauRegle));
        window->draw(*(this->panneauRegletop));
        window->draw(*(this->regletop));
        window->draw(*(this->regletext));
        this->window->display();
    }
}