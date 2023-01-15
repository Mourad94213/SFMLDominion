#ifndef LABORATORY_H
#define LABORATORY_H
#include "Royaume.hpp"

class Laboratory : public Royaume
{
private:
    
public:
    void Laboratory::appliquer_effet();
    Laboratory(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Laboratory();
};




#endif