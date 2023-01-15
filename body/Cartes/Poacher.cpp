#include "../../header/Cartes/Poacher.hpp"

void Poacher::appliquer_effet()
{
}
Poacher::Poacher(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Poacher::~Poacher()
{
}
