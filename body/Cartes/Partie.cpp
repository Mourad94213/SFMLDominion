#include "../../header/Cartes/Partie.hpp"

std::vector<std::pair<Cartes*, int>> Partie::AllCarte;

void Partie::initVariables()
{
    Tresor *cuivre = new Tresor("Cuivre",0,1);
    Tresor *argent = new Tresor("Argent",3,2);
    Tresor *Or = new Tresor("Or",6,3);
    Victoire *Domaine = new Victoire("Domaine",2,1);
    Victoire *Duche = new Victoire("Duché",5,3);
    Victoire *Province = new Victoire("Province",8,6);
    Victoire *Malediction = new Victoire("Malédiction",0,-1);

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
    
    Cellar      *Cave           = new Cellar("Cellar", 2, 0, 0, 0, 1);
    Remodel     *Renovation     = new Remodel("Remodel", 4, 0, 0, 0, 0);
    Mine        *mine           = new Mine("Mine", 5, 0, 0, 0, 0);
    Moneylender *PrêteurSurGage = new Moneylender("Moneylender", 4, 0, 0, 0, 0);
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
    Bandit      *bandit         = new Bandit("Bandit", 5, 0, 0, 0, 0);
    Sentry      *Sentinelle     = new Sentry("Sentry", 5, 0, 0, 1, 1);
    Artisan     *artisan        = new Artisan("Artisan", 6, 0, 0, 0, 0);
    Merchant    *Marchand       = new Merchant("Merchant", 3, 0, 0, 1, 1);
    Vassal      *vassal         = new Vassal("Vassal", 3, 2, 0, 0, 0);
    Harbinger   *Presage        = new Harbinger("Harbinger", 3, 0, 0, 1, 1);
    Poacher     *Braconnier     = new Poacher("Poacher", 4, 1, 0, 1, 1);
    //this->AllCarte.push_back(cuivre);
    //this->AllCarte.push_back(Or);
    //this->AllCarte.push_back(argent);
}


void Partie::initWindow()
{
    this->videoMode.height = 600;
	this->videoMode.width = 800;
	this->window = new sf::RenderWindow(this->videoMode, "Dominion", sf::Style::Titlebar | sf::Style::Close);
	this->window->setFramerateLimit(60);
}

void Partie::initFonts()
{

}

void Partie::initText()
{

}


Partie::Partie()
{
    this->initVariables();
	this->initWindow();
	this->initFonts();
	this->initText();
}

Partie::~Partie()
{
    delete this->window;
}

void Partie::pollEvents()
{
    while (this->window->pollEvent(this->ev))
	{
		switch (this->ev.type)
		{
		case sf::Event::Closed:
			this->window->close();
			break;
		case sf::Event::KeyPressed:
			if (this->ev.key.code == sf::Keyboard::Escape)
				this->window->close();
			break;
		}
	}
}

void Partie::run()
{
    while(this->window->isOpen()){
        this->pollEvents();
        this->window->clear();
        int incr=0;
        for(int i=0; i<AllCarte.size(); i++){
            this->window->draw(*(Partie::AllCarte.at(i).first->Phycarte));
            AllCarte.at(i).first->Phycarte->setPosition(incr,0);
            incr+=10;
        }
        this->window->display();
    }
}
