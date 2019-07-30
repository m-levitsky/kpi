

#ifndef LAB4_26_CASINO_EMPLOYEE_H
#define LAB4_26_CASINO_EMPLOYEE_H

#include "Human.h"
class Employee : virtual public Human
{
public:

    //constructor by default
    Employee();

    Employee(string post);

    //constructor 2
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
    virtual ~Employee();

protected:

    string company;
    string post;
    int salary;
    int experience;


};

#endif //LAB4_26_CASINO_EMPLOYEE_H
