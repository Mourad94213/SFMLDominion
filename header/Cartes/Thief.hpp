#ifndef THIEF_H
#define THIEF_H
#include "Royaume.hpp"

class Thief : public Royaume
{
private:
    
public:
    void Thief::appliquer_effet();
    Thief(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Thief();
};




#endif