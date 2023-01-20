#include <iostream>
#include "../../header/Cartes/Bureaucrat.hpp"
#include <string>

void Bureaucrat::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    j->Deck.push_back(Partie::AllCarte.at(1).first);
    Partie::AllCarte.at(1).second--;
    for(int i=0; i<alljoueur.size(); i++){
        if(alljoueur.at(i)->getid!=j->getid){
            for(auto k : alljoueur.at(i)->Main){
                if(k->nom=="Domaine" || k->nom=="Duche" || k->nom== "Province"){
                    j->Deck.push_back(k);
                    j->Main.erase(std::find(std::begin(j->Main), std::end(j->Main), k));
                    break;
                }
            }
        }
    }
}

Bureaucrat::Bureaucrat(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(1*2415/7, 4*2760/5, 2415 / 7, 2760 / 5));
    }

Bureaucrat::~Bureaucrat()
{
}
