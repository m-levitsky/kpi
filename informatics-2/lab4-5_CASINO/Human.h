

#ifndef LAB4_26_CASINO_HUMAN_H
#define LAB4_26_CASINO_HUMAN_H

#include <cstring>
#include <ctime>
#include <iostream>
using namespace std;

class Human {
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

    char getGender() const;
    void setGender(char gender);
    const string& getSurname() const;
    void setSurname(const string& surname);

    //destructor
    ~Human();

protected:

    int age;
    char gender;
    string name;
    string surname;

};


#endif //LAB4_26_CASINO_HUMAN_H
