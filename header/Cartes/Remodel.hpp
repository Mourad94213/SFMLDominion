#ifndef REMODEL_H
#define REMODEL_H

#include "../../header/Cartes/Royaume.hpp"

class Remodel : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur *j, Cartes *c);
    Remodel(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Remodel();
};




#endif