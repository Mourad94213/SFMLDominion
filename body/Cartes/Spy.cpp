#include "../../header/Cartes/Spy.hpp"

void Spy::appliquer_effet()
{
}

Spy::Spy(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Spy::~Spy()
{
}
