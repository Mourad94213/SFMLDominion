#ifndef LIBRARY_H
#define LIBRARY_H
#include "../../header/Cartes/Royaume.hpp"

class Library : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur *j);
    Library(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Library();
};




#endif