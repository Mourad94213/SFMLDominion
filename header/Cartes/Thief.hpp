#ifndef THIEF_H
#define THIEF_H
#include "../../header/Cartes/Royaume.hpp"

class Thief : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Thief(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Thief();
};




#endif