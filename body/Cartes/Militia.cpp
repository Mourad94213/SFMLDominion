#include "../../header/Cartes/Militia.hpp"


void Militia::appliquer_effet()
{
}
Militia::Militia(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Militia::~Militia()
{
}
