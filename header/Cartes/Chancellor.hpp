#ifndef CHANCELLOR_H
#define CHANCELLOR_H
#include "../../header/Cartes/Royaume.hpp"

class Chancellor : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur);
    Chancellor(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Chancellor();
};





#endif