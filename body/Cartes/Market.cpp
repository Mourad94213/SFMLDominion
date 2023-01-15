#include "../../header/Cartes/Market.hpp"


void Market::appliquer_effet()
{
}
Market::Market(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Market::~Market()
{
}
