#ifndef REMODEL_H
#define REMODEL_H
#include "Royaume.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>

class Remodel : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Remodel(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Remodel();
};




#endif