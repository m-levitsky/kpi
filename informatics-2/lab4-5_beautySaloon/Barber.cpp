//
// Created by misha on 23/05/19.
//

#include "Barber.h"
Barber::Barber() {
    post = "парикмахер";
}
bool Barber::isIs_universal_master() const
{
    return is_universal_master;
}
void Barber::setIs_universal_master(bool is_universal_master)
{
    Barber::is_universal_master = is_universal_master;
}
bool Barber::isIs_colorist() const
{
    return is_colorist;
}
void Barber::setIs_colorist(bool is_colorist)
{
    Barber::is_colorist = is_colorist;
}
Barber::~Barber()
{

}
Barber::Barber(bool is_universal_master)
        :is_universal_master(is_universal_master) { }

