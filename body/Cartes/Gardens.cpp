#include "../../header/Cartes/Gardens.hpp"


void Gardens::appliquer_effet()
{
}

Gardens::Gardens(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Gardens::~Gardens()
{
}
