#ifndef MONEYLENDER_H
#define MONEYLENDER_H
#include "../../header/Cartes/Royaume.hpp"

class Moneylender : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Moneylender(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Moneylender();
};




#endif