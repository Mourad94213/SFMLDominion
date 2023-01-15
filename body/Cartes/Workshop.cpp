#include <iostream>
#include "Workshop.hpp"
#include <string>

Workshop::Workshop(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name,price,money,wdraw,buy,acti){}