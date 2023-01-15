#ifndef WOODCUTTER_H
#define WOODCUTTER_H
#include "Royaume.hpp"

class Woodcutter : public Royaume
{
private:
    
public:
    void Woodcutter::appliquer_effet();
    Woodcutter(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Woodcutter();
};




#endif