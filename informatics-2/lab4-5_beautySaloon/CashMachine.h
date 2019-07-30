//
// Created by misha on 02/04/19.
//

#ifndef LABA_4_CASHMACHINE_H
#define LABA_4_CASHMACHINE_H

#include "Cashbox.h"
class CashMachine : protected Cashbox{

private:

    bool payment_method; // 1- карта, 0 - наличка
    unsigned int price; //чек
    unsigned int change; //сдача

public:
    //constructor by default
    CashMachine();

    CashMachine(unsigned int cash, bool payment_method, unsigned int price, unsigned int change);

    //copy constructor
    CashMachine(const CashMachine &cm);




    //checkout
    void checkout(bool _payment_method, unsigned int _price,unsigned int _cash,unsigned int _cash_deck);

    void no_change(unsigned int _price,unsigned int _cash_deck);

    //set / get
    unsigned int getCash_deck() const;
    void setCash_deck(unsigned int cash_deck);

    //destructor
    virtual ~CashMachine();
};

#endif //LABA_4_CASHMACHINE_H
