#include "../../header/Cartes/Library.hpp"



void Library::appliquer_effet()
{
}
Library::Library(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name, price, money, wdraw, buy, acti) {}

Library::~Library()
{
}
