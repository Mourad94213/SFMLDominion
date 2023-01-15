#include "../../header/Cartes/Workshop.hpp"


void Workshop::appliquer_effet()
{
}
Workshop::Workshop(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Workshop::~Workshop()
{
}
