#ifndef POACHER_H
#define POACHER_H
#include "Royaume.hpp"

class Poacher : public Royaume
{
private:
    
public:
    void Poacher::appliquer_effet();
    Poacher(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Poacher();
};




#endif