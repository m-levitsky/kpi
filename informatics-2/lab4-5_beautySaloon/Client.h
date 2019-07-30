//
// Created by misha on 09/04/19.
//

#ifndef LABA_4_CLIENT_H
#define LABA_4_CLIENT_H
#include <cstring>
#include <ctime>
#include <iostream>

#include "Human.h"
class Client : Human {
protected:

    string email;
    int discount = 0;
    bool is_new;
    long card_number = 0000; // discount card

public:

    Client();

    Client(int _age, char _gender, const string& _name, const string& _surname, const string& email);

    Client(int _age, const string& _name, const string& email, bool is_new);

    void give_card(long card_number);

    void Show();

    void Input();

    const string& getEmail() const;
    void setEmail(const string& email);
    int getDiscount() const;
    void setDiscount(int discount);
    bool isIs_new() const;
    void setIs_new(bool is_new);
    const string& getName();

    virtual ~Client();

};

#endif //LABA_4_CLIENT_H
