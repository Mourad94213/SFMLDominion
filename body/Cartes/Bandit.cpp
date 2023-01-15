#include "../../header/Cartes/Bandit.hpp"

void Bandit::appliquer_effet()
{
}
Bandit::Bandit(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Bandit::~Bandit()
{
}
