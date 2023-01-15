#include "../../header/Cartes/Laboratory.hpp"

void Laboratory::appliquer_effet()
{
}
Laboratory::Laboratory(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Laboratory::~Laboratory()
{
}
