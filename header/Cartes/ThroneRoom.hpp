#ifndef THRONEROOM_H
#define THRONEROOM_H
#include "../../header/Cartes/Royaume.hpp"

class ThroneRoom : public Royaume
{
private:
    
public:
    void appliquer_effet();
    ThroneRoom(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~ThroneRoom();
};




#endif