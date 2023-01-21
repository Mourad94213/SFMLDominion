#ifndef LABORATORY_H
#define LABORATORY_H
#include "../../header/Cartes/Royaume.hpp"

class Laboratory : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur);
    Laboratory(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Laboratory();
};




#endif