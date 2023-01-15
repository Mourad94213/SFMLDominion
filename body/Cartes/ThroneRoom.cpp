#include <iostream>
#include "ThroneRoom.hpp"
#include <string>

ThroneRoom::ThroneRoom(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name,price,money,wdraw,buy,acti){}