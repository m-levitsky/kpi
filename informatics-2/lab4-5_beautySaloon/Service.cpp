//
// Created by misha on 02/04/19.
//

#include "Service.h"

int Service::times_provided = 0;

Service::~Service()
{

}

Service::Service() { }

Service::Service(int price, const string& name)
        :price(price), name(name) { }

int Service::getPrice() const
{
    return price;
}

void Service::setPrice(int price)
{
    Service::price = price;
}

const string& Service::getName() const
{
    return name;
}

void Service::setName(const string& name)
{
    Service::name = name;
}

void Service::Order(string _name, string _surname)
{
    cout << "Посетитель " << _name << _surname << " заказал(а) услугу " << Service::name;
    cout << "Это будет стоить " << Service::price;
}
int Service::getTimes_provided()
{
    return times_provided;
}
void Service::setTimes_provided(int times_provided)
{
    Service::times_provided = times_provided;
}
