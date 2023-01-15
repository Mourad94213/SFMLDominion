#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include "../../header/Cartes/Royaume.hpp"

class Bureaucrat : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Bureaucrat(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Bureaucrat();
};






#endif