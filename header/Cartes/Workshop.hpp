#ifndef WORKSHOP_H
#define WORKSHOP_H
#include "../../header/Cartes/Royaume.hpp"

class Workshop : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur *j);
    Workshop(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Workshop();
};




#endif