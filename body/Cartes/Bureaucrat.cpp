#include <iostream>
#include "../../header/Cartes/Bureaucrat.hpp"
#include <string>

void Bureaucrat::appliquer_effet()
{
}
Bureaucrat::Bureaucrat(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Bureaucrat::~Bureaucrat()
{
}
