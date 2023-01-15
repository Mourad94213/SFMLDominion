#include <iostream>
#include "Merchant.hpp"
#include <string>

Merchant::Merchant(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name,price,money,wdraw,buy,acti){}