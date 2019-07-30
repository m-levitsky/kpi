//
// Created by misha on 04/04/19.
//

#include "Schedule.h"
Schedule::Schedule() { }
Schedule::Schedule(int hours, int minutes, int day, int month, string category, string comment, bool visit,
        unsigned int time_needed)
        :Date(hours, minutes, day, month, 0)
        {

        }

bool Schedule::getVisit() const
{
    return visit;
}
void Schedule::setVisit(bool visit)
{
    Schedule::visit = visit;
}
unsigned int Schedule::getTime_needed() const
{
    return time_needed;
}
void Schedule::setTime_needed(unsigned int time_needed)
{
    Schedule::time_needed = time_needed;
}
Schedule::~Schedule()
{

}
void Schedule::blacklist(string name)
{
        cout << "Клиент " << name << " добавлен в черный список" << endl;
}
