#ifndef HUMAIN_H
#define HUMAIN_H

#include "../../header/Cartes/Joueur.hpp"

class Humain : public Joueur
{
private:
    std::string pseudo;
public:
    Humain(int id, std::string pseudo);
    ~Humain();
    void acheter();
    void defausser(std::vector<Cartes*> main);
    void jouer_carte(Cartes* C);
};

#endif
