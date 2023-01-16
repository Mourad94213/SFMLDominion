#include <iostream>
#include "../../header/Cartes/CouncilRoom.hpp"
#include <string>

void CouncilRoom::appliquer_effet()
{
}
CouncilRoom::CouncilRoom(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(1*2415/7, 1*2760/5, 2415 / 7, 2760 / 5));
    }

CouncilRoom::~CouncilRoom()
{
}
