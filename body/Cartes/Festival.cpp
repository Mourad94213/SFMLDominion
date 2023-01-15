#include "../../header/Cartes/Festival.hpp"


void Festival::appliquer_effet(){}

Festival::Festival(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Festival::~Festival()
{
}
