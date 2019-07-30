//
// Created by misha on 02/04/19.
//
#include <cstring>
#include <ctime>
#include <iostream>
#include "CashMachine.h"
using namespace std;


CashMachine::~CashMachine()
{

}
unsigned int CashMachine::getCash_deck() const
{
    return cash_deck;
}
void CashMachine::setCash_deck(unsigned int cash_deck)
{
    CashMachine::cash_deck = cash_deck;
}




void CashMachine::checkout(bool _payment_method, unsigned int _price, unsigned int _cash, unsigned int _cash_deck)
{
    payment_method = _payment_method;
    price = _price;
    cash = _cash;
    cash_deck = _cash_deck + price;
    if (payment_method == 0) change = cash - price;

    cout << "Стоимость: " << price << endl;
    cout << "Способ оплаты: ";
    payment_method == 1 ? cout << "карта" : cout << "наличка";
    if(payment_method == 0)
    {
        cout << endl << "Оплачено: " << cash << endl;
    } else cout << endl << "Оплачено: " << price << endl;

    payment_method == 1 ? cout << "*******" : cout << "Сдача: " << change;
}

void CashMachine::no_change(unsigned int _price,unsigned int _cash_deck)
{
    price = _price;
    cash = price;
    cash_deck = _cash_deck + price;
}
CashMachine::CashMachine(const CashMachine& cm):
        payment_method(cm.payment_method), price(cm.price), change(cm.change)
{}
CashMachine::CashMachine() { }
CashMachine::CashMachine(unsigned int cash, bool payment_method, unsigned int price, unsigned int change)
        :Cashbox(cash), payment_method(payment_method), price(price), change(change) { }
