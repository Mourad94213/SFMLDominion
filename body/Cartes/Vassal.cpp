#include <iostream>
#include "Vassal.hpp"
#include <string>

Vassal::Vassal(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name,price,money,wdraw,buy,acti){}