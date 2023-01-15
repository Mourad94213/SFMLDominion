#ifndef SPY_H
#define SPY_H
#include "Royaume.hpp"

class Spy : public Royaume
{
private:
    
public:
    void Spy::appliquer_effet();
    Spy(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Spy();
};




#endif