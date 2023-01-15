#ifndef WITCH_H
#define WITCH_H
#include "../../header/Cartes/Royaume.hpp"

class Witch : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Witch(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Witch();
};




#endif