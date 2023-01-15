#ifndef MONEYLENDER_H
#define MONEYLENDER_H
#include "Royaume.hpp"

class Moneylender : public Royaume
{
private:
    
public:
    void Moneylender::appliquer_effet();
    Moneylender(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Moneylender();
};




#endif