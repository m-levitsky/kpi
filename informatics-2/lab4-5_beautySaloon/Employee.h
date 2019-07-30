//
// Created by misha on 02/04/19.
//

#ifndef LABA_4_EMPLOYEE_H
#define LABA_4_EMPLOYEE_H
#include <cstring>
#include <ctime>
#include <iostream>
#include "Human.h"

class Employee : virtual public Human
{
protected:

    string company;
    string post;
    int salary;
    int experience;

public:

    //constructor by default
    Employee();

    Employee(string post);

    //constructor 2 - beauty saloon employee
    Employee(int _age, char _gender, string _name, string _surname, string post);

    //constructor 3 - manual
    Employee(int _age, char _gender, string _name, string _surname, string post, string company, int salary, int experience);

    void InputWithName();


    void Input();


    void Show();

    // get set

    const string& getPost() const;
    void setPost(const string& post);

    const string& getName();

    //destructor
    ~Employee();


};
#endif //LABA_4_EMPLOYEE_H
