#ifndef HARBINGER_H
#define HARBINGER_H
#include "Royaume.hpp"

class Harbinger : public Royaume
{
private:
    
public:
    void Harbinger::appliquer_effet();
    Harbinger(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Harbinger();
};




#endif