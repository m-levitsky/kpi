//
// Created by misha on 04/04/19.
//

#ifndef LABA_4_TIME_H
#define LABA_4_TIME_H

#include <cstring>
#include <iostream>
using namespace std;

class Date {
protected:

    int hours;
    int minutes;
    int day; // in month (1-31)
    int month;
    int weekday; // 1-7

public:

    //constr
    Date();

    Date(int hours, int minutes);

    Date(int hours, int minutes, int day, int month, int weekday);

    //methods
    void show();

    void input();

    void half();

    void hour();

    // get set
    int getHours() const;
    void setHours(int hours);
    int getMinutes() const;
    void setMinutes(int minutes);
    int getDay() const;
    void setDay(int day);
    int getMonth() const;
    void setMonth(int month);
    int getWeekday() const;
    void setWeekday(int weekday);

    //destr
    virtual ~Date();

};

#endif //LABA_4_TIME_H
