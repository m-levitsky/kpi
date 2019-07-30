
#include <cstring>
#include <ctime>
#include <iostream>
#include "Human.h"
#include "Employee.h"

//constructor by default
Employee::Employee() : Human()
{
    srand(time(0));
    company = "Казино";
    salary = rand() % 4000 + 15000;
    experience = rand() % 10 + 1;
}


Employee::Employee(string _post) : Human()
{
    srand(time(0));
    company = "Казино";
    salary = rand() % 4000 + 15000;
    experience = rand() % 10 + 1;
    this->post = post;
}



Employee::Employee(int _age, char _gender, string _name, string _surname, string post) :Human( _age,_gender,_name,_surname )
{
    company = "Казино";
    salary = rand() % 4000 + 15000;
    experience = rand() % 10 + 1;
}

//constructor 3 - manual
Employee::Employee(int _age, char _gender, string _name, string _surname, string post, string company, int salary, int experience) :Human( _age,_gender,_name,_surname )
{}

void Employee::InputWithName()
{
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter gender (M/F) : ";
    cin >> gender;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter surname: ";
    cin >> surname;

    cout << "Enter company: ";
    cin >> company;
    cout << "Enter post: ";
    cin >> post;
    cout << "Enter experience: ";
    cin >> experience;
    cout << "Enter salary: ";
    cin >> salary;
}

void Employee::Input()
{
    cout << "Введите название компании: ";
    cin >> company;
    cout << "Введите должность: ";
    cin >> post;
    cout << "Введите опыт работы (лет): ";
    cin >> experience;
    cout << "Введите з/п: ";
    cin >> salary;
}

void Employee::Show()
{
    cout << "Имя: " << name << endl;
    cout << "Фамилия: " << surname << endl;
    cout << "Пол: " << gender << endl;
    cout << "Возраст: " << age << endl;
    cout << "Работает в " << company << " на должности " << post << " " << experience << " лет" << endl;
    cout << "Зарплата " << salary << endl << endl;

}

//destructor
Employee::~Employee()
{}
const string& Employee::getPost() const
{
    return post;
}
void Employee::setPost(const string& post)
{
    Employee::post = post;
}

const string& Employee::getName()
{
    return name;
}
