#ifndef VASSAL_H
#define VASSAL_H
#include "../../header/Cartes/Royaume.hpp"

class Vassal : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Vassal(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Vassal();
};




#endif