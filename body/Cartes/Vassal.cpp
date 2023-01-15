#include "../../header/Cartes/Vassal.hpp"


void Vassal::appliquer_effet()
{
}
Vassal::Vassal(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Vassal::~Vassal()
{
}
