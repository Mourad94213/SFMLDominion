#ifndef GARDENS_H
#define GARDENS_H
#include "../../header/Cartes/Royaume.hpp"

class Gardens : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Gardens(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Gardens();
};




#endif