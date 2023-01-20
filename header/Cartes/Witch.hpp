#ifndef WITCH_H
#define WITCH_H
#include "../../header/Cartes/Royaume.hpp"
#include "Partie.hpp"

class Witch : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur);
    Witch(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Witch();
};




#endif