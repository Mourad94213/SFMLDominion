#ifndef MINE_H
#define MINE_H
#include "Royaume.hpp"

class Mine : public Royaume
{
private:
    
public:
    void Mine::appliquer_effet();
    Mine(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Mine();
};




#endif