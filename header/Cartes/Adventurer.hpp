#ifndef ADVENTURER_H
#define ADVENTURER_H
#include "../../header/Cartes/Royaume.hpp"

class Adventurer : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Adventurer(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Adventurer();
};





#endif