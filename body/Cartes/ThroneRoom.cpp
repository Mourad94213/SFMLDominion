#include "../../header/Cartes/ThroneRoom.hpp"

void ThroneRoom::appliquer_effet()
{
}
ThroneRoom::ThroneRoom(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

ThroneRoom::~ThroneRoom()
{
}
