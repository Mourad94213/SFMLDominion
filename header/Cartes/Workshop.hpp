#ifndef WORKSHOP_H
#define WORKSHOP_H
#include "Royaume.hpp"

class Workshop : public Royaume
{
private:
    
public:
    void Workshop::appliquer_effet();
    Workshop(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Workshop();
};




#endif