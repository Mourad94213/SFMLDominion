#ifndef SMITHY_H
#define SMITHY_H
#include "../../header/Cartes/Royaume.hpp"

class Smithy : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur *j);
    Smithy(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Smithy();
};




#endif