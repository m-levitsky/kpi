//
// Created by misha on 02/04/19.
//

#include "Room.h"

//constr
Room::Room() { }

Room::Room(bool is_open, bool is_free, int chairs, int free_chairs)
{
    this->is_open = is_open;
    this->is_free = is_free;
    this->chairs = chairs;
    this->free_chairs = free_chairs;
}

//methods


//check if open etc





//free chairs count
int Room::chairs_count()
{
    return free_chairs;
}

//+1 free
void Room::inc_chairs()
{
    if (free_chairs < 3) free_chairs++;
}

//-1 free
void Room::dec_chairs()
{
    if (free_chairs > 0) free_chairs--;
}

//set / get
int Room::getChairs() const
{
    return chairs;
}
void Room::setChairs(int chairs)
{
    Room::chairs = chairs;
}
int Room::getFree_chairs() const
{
    return free_chairs;
}
void Room::setFree_chairs(int free_chairs)
{
    Room::free_chairs = free_chairs;
}

//destr
Room::~Room()
{}


