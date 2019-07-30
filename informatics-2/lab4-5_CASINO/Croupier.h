

#ifndef LAB4_26_CASINO_CROUPIER_H
#define LAB4_26_CASINO_CROUPIER_H

#include "Human.h"
#include "Employee.h"

class Croupier : virtual public Human, Employee{
public:

    Croupier();

    Croupier(const string& type);

    const string& getType() const;
    void setType(const string& type);
    int getBet() const;
    void setBet(int bet);
    int getPrize() const;
    void setPrize(int prize);

    virtual ~Croupier();

private:

    string type; // dealer, chiper, inspector
    int bet;
    int prize;
};

#endif //LAB4_26_CASINO_CROUPIER_H
