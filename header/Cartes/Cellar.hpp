#ifndef CELLAR_H
#define CELLAR_H
#include "../../header/Cartes/Royaume.hpp"

class Cellar : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur *j);
    Cellar(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Cellar();
};





#endif