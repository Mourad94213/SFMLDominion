#include <iostream>
#include "../../header/Cartes/Artisan.hpp"
#include <string>

void Artisan::appliquer_effet()
{
}

Artisan::Artisan(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Artisan::~Artisan()
{
}
