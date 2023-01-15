#ifndef FEAST_H
#define FEAST_H
#include "Royaume.hpp"

class Feast : public Royaume
{
private:
    
public:
    void Feast::appliquer_effet();
    Feast(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Feast();
};




#endif