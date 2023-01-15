#ifndef SENTRY_H
#define SENTRY_H
#include "Royaume.hpp"

class Sentry : public Royaume
{
private:
    
public:
    void Sentry::appliquer_effet();
    Sentry(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Sentry();
};




#endif