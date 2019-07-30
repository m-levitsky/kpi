

#ifndef LAB4_26_CASINO_WINNING_H
#define LAB4_26_CASINO_WINNING_H

#include <cstring>
#include <ctime>
#include <iostream>
using namespace std;

class Winning {
public:
    Winning();

    Winning(const string& type, int amount, int cashout_limit);

    Winning(const string& type);

    const string& getType() const;
    void setType(const string& type);
    int getAmount() const;
    void setAmount(int amount);
    int getCashout_limit() const;
    void setCashout_limit(int cashout_limit);

    virtual ~Winning();

private:
    string type; //jackpot / TITO
    int amount;
    int cashout_limit;
};

#endif //LAB4_26_CASINO_WINNING_H
