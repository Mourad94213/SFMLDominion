#include "../../header/Cartes/Witch.hpp"

void Witch::appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur)
{
    bool inattaquable=false;
    j->piocher();
    j->piocher();
    for(int i=j->Main.size()-1; i>j->Main.size()-3; i--){
        if(j->Main.at(i).first->nom=="Cuivre"){
            j->achat++;
        }
        else if(j->Main.at(i).first->nom=="Argent"){
            j->achat+=2;
        }
        else if(j->Main.at(i).first->nom=="Or"){
            j->achat+=3;
        }
    }
    for(Joueur* h : alljoueur){
        if(h!=j){
            for(int i=0; i<h->Main.size(); i++){
                if(h->Main.at(i).first->nom=="Moat"){
                    inattaquable=true;
                }
            }
            if(inattaquable){
                h->Defausse.push_back(std::pair<Cartes*,sf::RectangleShape*>(Partie::AllCarte.at(6).first, Partie::AllCarte.at(6).first->Phycarte->at(Partie::AllCarte.at(6).second-1)));
                Partie::AllCarte.at(6).second--;
            }
        }
    }
    
}

Witch::Witch(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        for(int i=0; i<this->Phycarte->size(); i++){
        this->Phycarte->at(i)->setTextureRect(sf::IntRect(4*2415/7, 2*2760/5, 2415 / 7, 2760 / 5));
        }
    }

Witch::~Witch()
{
}
