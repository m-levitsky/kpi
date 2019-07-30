//
// Created by misha on 09/04/19.
//
#include <cstring>
#include <ctime>
#include <iostream>
#include "Client.h"
Client::Client(int _age, char _gender, const string& _name, const string& _surname, const string& email)
        :Human(_age, _gender, _name, _surname), email(email) { }
Client::Client(int _age, const string& _name, const string& email, bool is_new)
        :Human(_age, _name), email(email), is_new(is_new) { }

void Client::give_card(long card_number)
{
    card_number += rand() % 9;
    cout << "Выдана карта № 00" << card_number;
    discount = 10;
}

void Client::Show()
{
    cout << "Имя: " << name << endl;
    cout << "Фамилия: " << surname << endl;
    cout << "Возраст: " << age << endl;
    cout << "Пол: " << gender << endl;

    if(discount != 0)
    {
        cout << "Скидка: " << discount << "%" << endl;
        cout << "Карта постоянного клиента № " << card_number << endl;
    }

}



const string& Client::getEmail() const
{
    return email;
}
void Client::setEmail(const string& email)
{
    Client::email = email;
}
int Client::getDiscount() const
{
    return discount;
}
void Client::setDiscount(int discount)
{
    Client::discount = discount;
}
bool Client::isIs_new() const
{
    return is_new;
}
void Client::setIs_new(bool is_new)
{
    Client::is_new = is_new;
}

const string& Client::getName()
{
    return name;
}

Client::~Client()
{

}
Client::Client() { }
void Client::Input()
{
        cout << "Введите e-mail: ";
        cin >> email;
        cout << "Введите скидку (%): ";
        cin >> discount;
}
