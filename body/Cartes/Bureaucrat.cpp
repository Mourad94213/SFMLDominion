#include <iostream>
#include "../../header/Cartes/Bureaucrat.hpp"
#include <string>

void Bureaucrat::appliquer_effet()
{
}
Bureaucrat::Bureaucrat(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) 
    {
        this->Phycarte->setTextureRect(sf::IntRect(1*2415/7, 4*2760/5, 2415 / 7, 2760 / 5));
    }

Bureaucrat::~Bureaucrat()
{
}
