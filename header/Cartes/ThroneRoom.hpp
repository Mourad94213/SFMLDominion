#ifndef THRONEROOM_H
#define THRONEROOM_H
#include "../../header/Cartes/Royaume.hpp"

class ThroneRoom : public Royaume
{
private:
    
public:
    bool appliquer_effet(Joueur *j);
    ThroneRoom(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~ThroneRoom();
};




#endif