#include "../../header/Cartes/Chancellor.hpp"

void Chancellor::appliquer_effet()
{
}


Chancellor::Chancellor(
    std::string name, int price, int money,int buy, int wdraw, int acti) : 
    Royaume(name, price, money, wdraw, buy, acti)
{}

Chancellor::~Chancellor() {
}