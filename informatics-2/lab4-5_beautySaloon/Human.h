//
// Created by misha on 26/03/19.
//

#ifndef LABA_4_HUMAN_H
#define LABA_4_HUMAN_H

#include <cstring>
#include <ctime>
#include <iostream>
using namespace std;

class Human {
protected:

    int age;
    char gender;
    string name;
    string surname;

public:

    //constructor by default
    Human();

    //constructor 2
    Human (int _age, char _gender, string _name, string _surname);

    //constructor 3
    Human(int _age, string _name);

    void SetName(string _name);

    void SetAge(int _age);

    string GetName();

    int GetAge();


    virtual void Input() = 0;

    virtual void Show();

    //destructor
    ~Human();

};

#endif //LABA_4_HUMAN_H
