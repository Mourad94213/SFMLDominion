#ifndef POACHER_H
#define POACHER_H
#include "../../header/Cartes/Royaume.hpp"

class Poacher : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Poacher(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Poacher();
};




#endif