

#include "Croupier.h"
Croupier::Croupier() {
    post = "Крупье";
}
Croupier::Croupier(const string& type)
        :type(type) { }
const string& Croupier::getType() const
{
    return type;
}
void Croupier::setType(const string& type)
{
    Croupier::type = type;
}
int Croupier::getBet() const
{
    return bet;
}
void Croupier::setBet(int bet)
{
    Croupier::bet = bet;
}
int Croupier::getPrize() const
{
    return prize;
}
void Croupier::setPrize(int prize)
{
    Croupier::prize = prize;
}
Croupier::~Croupier()
{

}
