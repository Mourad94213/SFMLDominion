#ifndef FESTIVAL_H
#define FESTIVAL_H
#include "../../header/Cartes/Royaume.hpp"

class Festival : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur);
    Festival(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Festival();
};




#endif