

#include "Winning.h"
Winning::Winning() { }
Winning::Winning(const string& type, int amount, int cashout_limit)
        {
            this->type = type;
            this->amount = amount;
            this->cashout_limit = cashout_limit;
        }
const string& Winning::getType() const
{
    return type;
}
void Winning::setType(const string& type)
{
    Winning::type = type;
}
int Winning::getAmount() const
{
    return amount;
}
void Winning::setAmount(int amount)
{
    Winning::amount = amount;
}
int Winning::getCashout_limit() const
{
    return cashout_limit;
}
void Winning::setCashout_limit(int cashout_limit)
{
    Winning::cashout_limit = cashout_limit;
}
Winning::~Winning()
{

}
Winning::Winning(const string& type)
{
    this->type = type;
    amount = 50000;
    cashout_limit = 10000;
}
