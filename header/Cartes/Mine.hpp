#ifndef MINE_H
#define MINE_H
#include "../../header/Cartes/Royaume.hpp"

class Mine : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Mine(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Mine();
};




#endif