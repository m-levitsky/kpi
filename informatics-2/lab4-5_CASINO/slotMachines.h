

#ifndef LAB4_26_CASINO_SLOT_MACHINES_H
#define LAB4_26_CASINO_SLOT_MACHINES_H

#include "Hall.h"
class slotMachines : public Hall{
public:
    slotMachines();

    slotMachines( int min_bet, int machines_count);

    slotMachines(const slotMachines& slotMachines);

    static int getHouse_money();
    static void setHouse_money(int house_money);

    int getMin_bet() const;
    void setMin_bet(int min_bet);
    int getMachines_count() const;
    void setMachines_count(int machines_count);

    void welcome();

    bool play();

    virtual ~slotMachines();

private:
    static int house_money;
    int min_bet;
    int machines_count;
};

#endif //LAB4_26_CASINO_SLOT_MACHINES_H
