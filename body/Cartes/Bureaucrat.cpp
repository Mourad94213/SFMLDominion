#include <iostream>
#include "Bureaucrat.hpp"
#include <string>

Bureaucrat::Bureaucrat(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name,price,money,wdraw,buy,acti){}