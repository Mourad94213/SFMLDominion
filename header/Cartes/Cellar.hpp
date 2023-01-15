#ifndef CELLAR_H
#define CELLAR_H
#include "Royaume.hpp"

class Cellar : public Royaume
{
private:
    
public:
    void Cellar::appliquer_effet();
    Cellar(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Cellar();
};





#endif