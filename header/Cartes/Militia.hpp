#ifndef MILITIA_H
#define MILITIA_H
#include "Royaume.hpp"

class Militia : public Royaume
{
private:
    
public:
    void Militia::appliquer_effet();
    Militia(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Militia();
};




#endif