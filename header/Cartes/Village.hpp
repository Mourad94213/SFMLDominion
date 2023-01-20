#ifndef VILLAGE_H
#define VILLAGE_H
#include "../../header/Cartes/Royaume.hpp"

class Village : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur *j);
    Village(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Village();
};





#endif