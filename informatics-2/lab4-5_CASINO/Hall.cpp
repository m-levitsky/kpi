

#include "Hall.h"

int Hall::total_win;

Hall::Hall() {
    capacity = 100;
}
Hall::Hall(const string& type)
        :type(type) { }
Hall::Hall(int capacity)
        :capacity(capacity) { }
const string& Hall::getType() const
{
    return type;
}
void Hall::setType(const string& type)
{
    Hall::type = type;
}
int Hall::getCapacity() const
{
    return capacity;
}
void Hall::setCapacity(int capacity)
{
    Hall::capacity = capacity;
}
int Hall::getTotal_win()
{
    return total_win;
}
void Hall::setTotal_win(int total_win)
{
    Hall::total_win = total_win;
}
