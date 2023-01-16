#include "../../header/Cartes/Partie.hpp"

std::vector<std::pair<Cartes*, int>> Partie::AllCarte;

void Partie::initVariables()
{
    Tresor *cuivre = new Tresor("Cuivre",0,1);
    Tresor *argent = new Tresor("Argent",3,2);
    Tresor *Or = new Tresor("Or",6,3);
    Victoire *Domaine = new Victoire("Domaine",2,1);
    Victoire *Duche = new Victoire("Duche",5,3);
    Victoire *Province = new Victoire("Province",8,6);
    Victoire *Malediction = new Victoire("Malediction",0,-1);

	Partie::AllCarte.push_back(std::pair<Tresor*,int>(cuivre,60));
    Partie::AllCarte.push_back(std::pair<Tresor*,int>(argent,40));
    Partie::AllCarte.push_back(std::pair<Tresor*,int>(Or,30));
    Partie::AllCarte.push_back(std::pair<Victoire*,int>(Domaine,24));
    Partie::AllCarte.push_back(std::pair<Victoire*,int>(Duche,12));

    if(Joueur::getid()>2){
        Partie::AllCarte.push_back(std::pair<Victoire*,int>(Province,12));
    }
    else{
        Partie::AllCarte.push_back(std::pair<Victoire*,int>(Province,8));
    }
    Partie::AllCarte.push_back(std::pair<Victoire*,int>(Malediction,30));
    
}


void Partie::initWindow()
{
    this->videoMode.height = 1000;
	this->videoMode.width = 1900;
	this->window = new sf::RenderWindow(this->videoMode, "Dominion", sf::Style::Titlebar | sf::Style::Close);
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
    this->boutonselectionhumain->setPosition(sf::Vector2f(window->getSize().x/2,window->getSize().y/2-300));

    this->boutonselectionia = new sf::Sprite();
    this->boutonselectionia->setTexture(*bouton_selection);
    this->boutonselectionia->setScale(0.2,0.2);
    this->boutonselectionia->setOrigin(sf::Vector2f(2306/2,1064/2));
    this->boutonselectionia->setPosition(sf::Vector2f(window->getSize().x/2,window->getSize().y/2-100));

    this->boutonselection1h = new sf::Sprite();
    this->boutonselection1h->setTexture(*bouton_selection_chiffre);
    this->boutonselection2h = new sf::Sprite();
    this->boutonselection2h->setTexture(*bouton_selection_chiffre);
    this->boutonselection3h = new sf::Sprite();
    this->boutonselection3h->setTexture(*bouton_selection_chiffre);
    this->boutonselection4h = new sf::Sprite();
    this->boutonselection4h->setTexture(*bouton_selection_chiffre);
    this->boutonselection1ia = new sf::Sprite();
    this->boutonselection1ia->setTexture(*bouton_selection_chiffre);
    this->boutonselection2ia = new sf::Sprite();
    this->boutonselection2ia->setTexture(*bouton_selection_chiffre);
    this->boutonselection3ia = new sf::Sprite();
    this->boutonselection3ia->setTexture(*bouton_selection_chiffre);
    this->boutonselection4ia = new sf::Sprite();
    this->boutonselection4ia->setTexture(*bouton_selection_chiffre);

    this->boutonselectioncartes = new sf::Sprite();
    this->boutonselectioncartes->setTexture(*bouton_selection);

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
    std::cout<<"a";
	while (this->window->pollEvent(this->ev))
	{
        std::cout <<"b";
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
        std::cout<<"d";
        this->pollEvents();
        //this->menu();
        this->choixselection();
        //this->jeu();
        //this->regle();
        //this->render();
    }
}

void Partie::menu(){
    if(this->menubool==true){
        this->jeubool=false;
        this->reglebool=false;
        this->window->clear();
        if(this->ev.type==sf::Event::MouseButtonPressed){
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
                if(this->buttonplay->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool){

                    jeubool=true;
                    reglebool=false;
                    menubool=false;
                }
                if(this->Rbutton->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window))) && !jeubool && !reglebool){
                    reglebool=true;
                    jeubool=false;
                    menubool=false;
                }
                if(this->Lbutton->getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(*window)))  && !jeubool && !reglebool){
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
            /*delete backgroundtext;
            delete buttontext;
            delete boutonDominiontexture;
            delete Rbuttontexture;*/
    }
}

void Partie::choixselection(){
    std::cout<<"c";
    /*bool b=true;
    if(b){ // EVENT JOUEUR
       //Humain *humain1 = new Humain();
    }*/

    /*Cellar      *Cave           = new Cellar("Cellar", 2, 0, 0, 0, 1);
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
    Spy         *Espion         = new Spy("Spy", 4, 0, 0, 1, 1);*/
/*
    std::vector<Cartes*> cartechoisijoueur;

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
    bool a=true; // BOUTON SHUFFLE SELECTION CARTES
        if(a){
            auto rd = std::random_device {}; 
            auto rng = std::default_random_engine { rd() };
            std::shuffle(std::begin(cartechoisijoueur), std::end(cartechoisijoueur), rng);
            for(int i=0; i<10; i++){
                Partie::AllCarte.push_back(std::pair(cartechoisijoueur.at(i), 10));
            }
            for(int i=10; i<cartechoisijoueur.size(); i++){
                delete cartechoisijoueur.at(i);
            }
        }
        else{
            Partie::AllCarte.push_back(std::pair(Forgeron, 10));
            Partie::AllCarte.push_back(std::pair(Cave, 10));
            Partie::AllCarte.push_back(std::pair(Chapelle, 10));
            Partie::AllCarte.push_back(std::pair(Renovation, 10));  
            Partie::AllCarte.push_back(std::pair(village, 10)); 
            Partie::AllCarte.push_back(std::pair(festival, 10)); 
            Partie::AllCarte.push_back(std::pair(Laboratoire, 10)); 
            Partie::AllCarte.push_back(std::pair(Sorciere, 10)); 
            Partie::AllCarte.push_back(std::pair(Marche, 10)); 
            Partie::AllCarte.push_back(std::pair(mine, 10));
            delete PreteurSurGage;
            delete Douves;
            delete Jardins;
            delete SalleDuConseil;
            delete SalleDuTrone;
            delete Milice;
            delete Bureaucrate;
            delete atelier;
            delete Bibliotheque;
            delete Voleur;
            delete Chancelier;
            delete Festin;
            delete Aventurier;
            delete Espion;
            delete Bucheron;
        }*/

    this->window->clear();
    this->window->draw(sf::Sprite(*this->backgroundtext));
    this->window->draw(*(this->boutonselectionhumain));
    this->window->draw(*(this->boutonselectionia));
    this->window->display();
    /*delete bouton_selection;
    delete bouton_selection_chiffre;*/
}

void Partie::jeu(){

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
        /*delete panneauRegletexture;
        delete panneauRegletoptexture;*/
    }
}

void Partie::render(){
   /* this->window->clear();
    int incr=0;
        for(int i=0; i<AllCarte.size(); i++){
            this->window->draw(*(Partie::AllCarte.at(i).first->Phycarte));
            AllCarte.at(i).first->Phycarte->setPosition(incr,0);
            incr+=100;
        }
    this->window->display();*/
}
