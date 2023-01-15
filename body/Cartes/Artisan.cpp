#include <iostream>
#include "Artisan.hpp"
#include <string>

Artisan::Artisan(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name,price,money,wdraw,buy,acti){}