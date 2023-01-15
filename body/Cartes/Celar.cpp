#include <iostream>
#include "Cellar.hpp"
#include <string>

Cellar::Cellar(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name,price,money,wdraw,buy,acti){}