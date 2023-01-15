#include "../../header/Cartes/Harbinger.hpp"


void Harbinger::appliquer_effet()
{
}
Harbinger::Harbinger(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Harbinger::~Harbinger()
{
}
