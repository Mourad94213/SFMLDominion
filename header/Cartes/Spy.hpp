#ifndef SPY_H
#define SPY_H
#include "../../header/Cartes/Royaume.hpp"

class Spy : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur *j, std::vector<Joueur*> alljoueur);
    Spy(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Spy();
};




#endif