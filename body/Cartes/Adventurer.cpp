#include "../../header/Cartes/Adventurer.hpp"


void Adventurer::appliquer_effet()
{
}


Adventurer::Adventurer(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Adventurer::~Adventurer()
{
}