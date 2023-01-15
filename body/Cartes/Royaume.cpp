#include "Royaume.hpp"

Royaume::Royaume(std::string name, int price, int money, int buy, int wdraw, int acti) 
    : Cartes(name,price), argent(money), achat(buy), pioche(wdraw), action(acti){}

Royaume::~Royaume()
{
}

void Royaume::appliquer_effet()
{
}


