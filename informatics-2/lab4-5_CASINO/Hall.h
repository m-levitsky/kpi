
#ifndef LAB4_26_CASINO_HALL_H
#define LAB4_26_CASINO_HALL_H

#include <cstring>
#include <ctime>
#include <iostream>
using namespace std;

class Hall {
public:
    Hall();

    Hall(const string& type);

    Hall(int capacity);

    const string& getType() const;
    void setType(const string& type);
    int getCapacity() const;
    void setCapacity(int capacity);

    static int getTotal_win();
    static void setTotal_win(int total_win);

    virtual void welcome() = 0;

protected:
    string type;
    int capacity;
    static int total_win;

};

#endif //LAB4_26_CASINO_HALL_H
