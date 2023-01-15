#include <iostream>
#include "../../header/Cartes/Chapel.hpp"
#include <string>

void Chapel::appliquer_effet()
{
}

Chapel::Chapel(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Chapel::~Chapel()
{
}
