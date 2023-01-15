#ifndef VILLAGE_H
#define VILLAGE_H
#include "../../header/Cartes/Royaume.hpp"

class Village : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Village(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Village();
};





#endif