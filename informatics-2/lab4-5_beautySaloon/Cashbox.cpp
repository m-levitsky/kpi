//
// Created by misha on 23/05/19.
//

#include "Cashbox.h"

unsigned int Cashbox::getCash() const
{
    return cash;
}
void Cashbox::setCash(unsigned int cash)
{
    Cashbox::cash = cash;
}
Cashbox::~Cashbox()
{

}
Cashbox::Cashbox() { }
Cashbox::Cashbox(unsigned int cash)
        :cash(cash) { }
