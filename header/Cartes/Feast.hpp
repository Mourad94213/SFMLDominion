#ifndef FEAST_H
#define FEAST_H
#include "../../header/Cartes/Royaume.hpp"

class Feast : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur);
    Feast(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Feast();
};




#endif