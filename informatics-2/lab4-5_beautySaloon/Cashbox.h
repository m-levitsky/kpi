//
// Created by misha on 23/05/19.
//

#ifndef LABA_4_CASHBOX_H
#define LABA_4_CASHBOX_H

class Cashbox {
protected:

    unsigned int cash;
    unsigned int cash_deck; //касса

public:
    Cashbox();

    Cashbox(unsigned int cash);

    unsigned int getCash() const;
    void setCash(unsigned int cash);

    virtual unsigned int getCash_deck() const = 0;
    virtual void setCash_deck(unsigned int cash_deck) = 0;

    virtual ~Cashbox();
};

#endif //LABA_4_CASHBOX_H
