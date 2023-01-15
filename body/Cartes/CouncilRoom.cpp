#include <iostream>
#include "../../header/Cartes/CouncilRoom.hpp"
#include <string>

void CouncilRoom::appliquer_effet()
{
}
CouncilRoom::CouncilRoom(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

CouncilRoom::~CouncilRoom()
{
}
