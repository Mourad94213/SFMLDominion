#ifndef CHAPEL_H
#define CHAPEL_H
#include "Royaume.hpp"

class Chapel : public Royaume
{
private:
    
public:
    void Chapel::appliquer_effet();
    Chapel(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Chapel();
};





#endif