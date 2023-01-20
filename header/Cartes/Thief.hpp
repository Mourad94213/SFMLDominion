#ifndef THIEF_H
#define THIEF_H
#include "../../header/Cartes/Royaume.hpp"

class Thief : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur);
    Thief(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Thief();
};




#endif