#include "../../header/Cartes/Witch.hpp"

void Witch::appliquer_effet()
{
}
Witch::Witch(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Witch::~Witch()
{
}
