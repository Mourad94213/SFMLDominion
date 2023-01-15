#ifndef FESTIVAL_H
#define FESTIVAL_H
#include "../../header/Cartes/Royaume.hpp"

class Festival : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Festival(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Festival();
};




#endif