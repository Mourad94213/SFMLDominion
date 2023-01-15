#include "../../header/Cartes/Woodcutter.hpp"


void Woodcutter::appliquer_effet()
{
}
Woodcutter::Woodcutter(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Woodcutter::~Woodcutter()
{
}
