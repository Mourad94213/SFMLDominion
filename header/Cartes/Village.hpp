#ifndef VILLAGE_H
#define VILLAGE_H
#include "Royaume.hpp"

class Village : public Royaume
{
private:
    
public:
    void Village::appliquer_effet();
    Village(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Village();
};





#endif