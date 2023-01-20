#ifndef ROYAUME_H
#define ROYAUME_H
#include "../../header/Cartes/Cartes.hpp"
#include "Joueur.hpp"


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