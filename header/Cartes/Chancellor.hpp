#ifndef CHANCELLOR_H
#define CHANCELLOR_H
#include "Royaume.hpp"

class Chancellor : public Royaume
{
private:
    
public:
    void Chancellor::appliquer_effet();
    Chancellor(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Chancellor();
};





#endif