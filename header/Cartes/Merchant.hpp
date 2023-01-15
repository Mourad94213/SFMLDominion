#ifndef MERCHANT_H
#define MERCHANT_H
#include "../../header/Cartes/Royaume.hpp"

class Merchant : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Merchant(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Merchant();
};




#endif