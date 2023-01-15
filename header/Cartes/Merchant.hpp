#ifndef MERCHANT_H
#define MERCHANT_H
#include "Royaume.hpp"

class Merchant : public Royaume
{
private:
    
public:
    void Merchant::appliquer_effet();
    Merchant(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Merchant();
};




#endif