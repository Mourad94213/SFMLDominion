#include <iostream>
#include "Sentry.hpp"
#include <string>

Sentry::Sentry(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name,price,money,wdraw,buy,acti){}