#include "../../header/Cartes/Thief.hpp"

void Thief::appliquer_effet()
{
}
Thief::Thief(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Thief::~Thief()
{
}
