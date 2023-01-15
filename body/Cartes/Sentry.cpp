#include "../../header/Cartes/Sentry.hpp"


void Sentry::appliquer_effet()
{
}
Sentry::Sentry(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Sentry::~Sentry()
{
}
