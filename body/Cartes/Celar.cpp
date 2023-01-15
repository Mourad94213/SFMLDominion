#include <iostream>
#include "../../header/Cartes/Cellar.hpp"
#include <string>

void Cellar::appliquer_effet()
{
}
Cellar::Cellar(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Cellar::~Cellar()
{
}
