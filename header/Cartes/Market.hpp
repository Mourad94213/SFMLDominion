#ifndef MARKET_H
#define MARKET_H
#include "../../header/Cartes/Royaume.hpp"

class Market : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Market(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Market();
};




#endif