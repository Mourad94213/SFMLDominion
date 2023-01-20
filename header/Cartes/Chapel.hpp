#ifndef CHAPEL_H
#define CHAPEL_H
#include "../../header/Cartes/Royaume.hpp"

class Chapel : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur *j);
    Chapel(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Chapel();
};





#endif