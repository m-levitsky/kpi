//
// Created by misha on 6/14/20.
//

#include "Receipt.h"
#include <iostream>

using namespace std;

Receipt::Receipt()
{
    cout << "default constructor call for " << this << endl;
    number = 0;
    date = 0;
    sum = 0;
}

Receipt::Receipt(int number, int date, float sum) : number(number), date(date), sum(sum)
{
    cout << "parameterized constructor call for " << this << endl;
}

Receipt::Receipt(Receipt const & obj) : number(obj.number), date(obj.date), sum(obj.sum){

    cout << "copy constructor call for " << this << endl;
}


int Receipt::getNumber() const {
    return number;
}

void Receipt::setNumber(int number) {
    Receipt::number = number;
}

int Receipt::getDate() const {
    return date;
}

void Receipt::setDate(int date) {
    Receipt::date = date;
}

float Receipt::getSum() const {
    return sum;
}

void Receipt::setSum(float sum) {
    Receipt::sum = sum;
}

Receipt::~Receipt() {

}

void Receipt::Show() {

    cout << endl << "obj " << this << " : " << endl;
    cout << "number: " << number << endl;
    cout << "date: " << date << endl;
    cout << "sum: " << sum << endl << endl;

}

