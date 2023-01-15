#ifndef TRESOR_H
#define TRESOR_H
#include "../../header/Cartes/Cartes.hpp"
#include <iostream>

class Tresor : public Cartes
{
private:
    int valeur;
public:
    Tresor(std::string name, int price, int val);
    ~Tresor();
};

#endif
