//
// Created by misha on 23/05/19.
//

#ifndef LABA_4_BARBER_H
#define LABA_4_BARBER_H

#include "Human.h"
#include "Employee.h"
class Barber : virtual protected Human, protected Employee{
private:
    bool is_universal_master;
    bool is_colorist;

public:
    Barber();

    Barber(bool is_universal_master);

    bool isIs_universal_master() const;
    void setIs_universal_master(bool is_universal_master);
    bool isIs_colorist() const;
    void setIs_colorist(bool is_colorist);

    virtual ~Barber();
};

#endif //LABA_4_BARBER_H
