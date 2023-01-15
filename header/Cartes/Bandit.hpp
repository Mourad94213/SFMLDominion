#ifndef BANDIT_H
#define BANDIT_H
#include "../../header/Cartes/Royaume.hpp"

class Bandit : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Bandit(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Bandit();
};





#endif