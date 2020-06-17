//
// Created by misha on 6/14/20.
//

#include "goods.h"

list<goods> goods::l;

goods::goods()
{
    srand(time(0));

    price = rand() % 1500;
    name = "";
    amount = rand() % 50;

    this->add();
}


goods::goods(float price, char *name, int amount) : price(price), name(name), amount(amount) {}

goods::~goods() {

    name = "";
    price = 0;
    amount = 0;
}

float goods::getPrice() const {
    return price;
}

void goods::setPrice(float price) {
    goods::price = price;
}

char *goods::getName() const {
    return name;
}

void goods::setName(char *name) {
    goods::name = name;
}

int goods::getAmount() const {
    return amount;
}

void goods::setAmount(int amount) {
    goods::amount = amount;
}

void goods::add() {
    l.push_front(*this);
}



void goods::show() {

    cout << endl << this << " : " << endl;
    cout << "name: " << name << endl;
    cout << "price: " << price << endl;
    cout << "amount: " << amount << endl;
}

const list<goods> &goods::getL() {
    return l;
}

void goods::setL(const list<goods> &l) {
    goods::l = l;
}

void goods::print() {
    for (goods n : l) {
        n.show();
    }
}


