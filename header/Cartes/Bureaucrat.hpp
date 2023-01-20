#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include "../../header/Cartes/Royaume.hpp"
#include "Partie.hpp"

class Bureaucrat : public Royaume
{
private:
    
public:
    void appliquer_effet(Joueur *j,  std::vector<Joueur*> alljoueur);
    Bureaucrat(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Bureaucrat();
};






#endif