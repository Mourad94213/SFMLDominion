#ifndef WOODCUTTER_H
#define WOODCUTTER_H
#include "../../header/Cartes/Royaume.hpp"

class Woodcutter : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Woodcutter(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Woodcutter();
};




#endif