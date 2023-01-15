#include "../../header/Cartes/Merchant.hpp"

void Merchant::appliquer_effet()
{
}
Merchant::Merchant(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Merchant::~Merchant()
{
}
