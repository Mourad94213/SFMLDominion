#ifndef ADVENTURER_H
#define ADVENTURER_H
#include "Royaume.hpp"

class Adventurer : public Royaume
{
private:
    
public:
    void Adventurer::appliquer_effet();
    Adventurer(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Adventurer();
};





#endif