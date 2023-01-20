#ifndef COUNCILROOM_H
#define COUNCILROOM_H
#include "../../header/Cartes/Royaume.hpp"

class CouncilRoom : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur* j, std::vector<Joueur*> alljoueur);
    CouncilRoom(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~CouncilRoom();
};





#endif