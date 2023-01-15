#include "../../header/Cartes/Moneylender.hpp"

void Moneylender::appliquer_effet()
{
}
Moneylender::Moneylender(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Moneylender::~Moneylender()
{
}
