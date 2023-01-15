#ifndef MOAT_H
#define MOAT_H
#include "../../header/Cartes/Royaume.hpp"

class Moat : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Moat(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Moat();
};





#endif