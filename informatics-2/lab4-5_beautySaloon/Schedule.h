//
// Created by misha on 04/04/19.
//

#ifndef LABA_4_SCHEDULE_H
#define LABA_4_SCHEDULE_H
#include <cstring>
#include <ctime>
#include <iostream>
#include "Date.h" // dd mm yy
#include "Room.h" // free or not
//#include "Service.h" // time_needed depends on type of service
#include "Client.h"

class Schedule : protected Date {
private:

    string category;
    string comment;
    bool visit; // 1 - visited, 0 - not
    unsigned int time_needed;

public:
    Schedule();

    Schedule(int hours, int minutes, int day, int month, string category, string comment, bool visit,
            unsigned int time_needed);

    bool getVisit() const;
    void setVisit(bool visit);

    void blacklist(string name);

    unsigned int getTime_needed() const;
    void setTime_needed(unsigned int time_needed);

    virtual ~Schedule();

};

#endif //LABA_4_SCHEDULE_H
