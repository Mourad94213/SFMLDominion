#include "../../header/Cartes/Joueur.hpp"

int Joueur::id=0;

Joueur::Joueur(){
    id++;
    //vraiid=id;
    //std::cout<<nbrachat;
}

Joueur::~Joueur(){
    std::cout<<"joueur suppr";
}

int Joueur::getid(){
    return id;
}


void Joueur::acheter()
{
    
}

void Joueur::defausserplateau(std::pair<Cartes*, sf::RectangleShape*> c)
{
    this->Defausse.push_back(c);
    this->plateau.erase(std::find(this->plateau.begin(), this->plateau.end(), c));
}

void Joueur::defaussermain(std::pair<Cartes*, sf::RectangleShape*> c){
    this->Defausse.push_back(c);
    this->Main.erase(std::find(this->Main.begin(), this->Main.end(), c));
}

void Joueur::jouer_carte(std::pair<Cartes*, sf::RectangleShape*> c)
{
    this->plateau.push_back(c);
    this->Main.erase(std::find(this->Main.begin(), this->Main.end(), c));
}

void Joueur::piocher(){
    if(this->Deck.size()==0){
        for(int i=0; i<this->Defausse.size(); i++){
            this->Deck.push_back(this->Defausse.at(i));
        }
        this->Defausse.clear();
        std::shuffle(std::begin(this->Deck), std::end(this->Deck), std::random_device());
    }
    if(this->Deck.size()==0 && this->Defausse.size()==0){
        // pioche pas
    }
    else{
        this->Main.push_back(this->Deck.at(0));
        this->Deck.erase(this->Deck.begin());
    }
    
}
