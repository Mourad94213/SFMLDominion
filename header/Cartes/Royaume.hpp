#ifndef ROYAUME_H
#define ROYAUME_H
#include "Cartes.hpp"
#include <iostream>
#include <string>

class Royaume : public Cartes
{
    private:
        int action;
        int achat;
        int argent;
        int pioche;
    public:
        Royaume(std::string name, int price, int money, int buy, int wdraw, int acti);
        ~Royaume();
        virtual void appliquer_effet();
};




#endif