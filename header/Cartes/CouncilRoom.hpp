#ifndef COUNCILROOM_H
#define COUNCILROOM_H
#include "Royaume.hpp"

class CouncilRoom : public Royaume
{
private:
    
public:
    void CouncilRoom::appliquer_effet();
    CouncilRoom(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~CouncilRoom();
};





#endif