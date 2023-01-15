#ifndef ARTISAN_H
#define ARTISAN_H
#include "../../header/Cartes/Royaume.hpp"

class Artisan : public Royaume
{
private:
    
public:
    void appliquer_effet();
    Artisan(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Artisan();
};





#endif