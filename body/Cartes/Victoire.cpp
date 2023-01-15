#include "../../header/Cartes/Victoire.hpp"

Victoire::~Victoire()
{
}
Victoire::Victoire(std::string name, int price, int val) : Cartes(name, price), valeur(val) {}