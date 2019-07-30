//
// Created by misha on 02/04/19.
//

#ifndef LABA_4_SERVICE_H
#define LABA_4_SERVICE_H

#include <string.h>
#include <iostream>
#include "Schedule.h"
#include "Room.h"

using namespace std;

class Service : public Schedule, public Room
{
private:

    int price;
    string name;
    static int times_provided;

public:

    Service();

    Service(int price, const string& name);

    int getPrice() const;

    void setPrice(int price);

    const string& getName() const;

    void setName(const string& name);

    void Order(string _name, string _surname);

    void inc_chairs();

    void dec_chairs();

    static int getTimes_provided();
    static void setTimes_provided(int times_provided);

    virtual ~Service();

};



#endif //LABA_4_SERVICE_H
