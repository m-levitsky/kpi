//
// Created by misha on 02/04/19.
//

#ifndef LABA_4_ROOM_H
#define LABA_4_ROOM_H

class Room {
private:

    bool is_open;
    int chairs = 3;
    bool is_free;
    int free_chairs = 3;

public:

    //constructor by default
    Room();

    //constructor 2 - manual
    Room(bool _is_open, bool _is_free, int _chairs, int _free_chairs);

    //destructor
    virtual ~Room();

    //methods

    //free chairs count
    int chairs_count();

    //+1 free
    void inc_chairs();

    //-1 free
    void dec_chairs();

    int getChairs() const;
    void setChairs(int chairs);

    int getFree_chairs() const;
    void setFree_chairs(int free_chairs);

};

#endif //LABA_4_ROOM_H
