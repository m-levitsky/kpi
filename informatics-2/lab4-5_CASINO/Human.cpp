#include <cstring>
#include <ctime>
#include <iostream>
#include "Human.h"
using namespace std;

Human::Human()
{
    srand(time(0));

    age = rand() % 40 + 18;
    int gender_ch = rand() % 2 + 0;
    gender = gender_ch == 1? 'M': 'F';

    const char* m_names[20] = {"Артём","Александр","Максим","Данила","Дмитрий","Иван","Кирилл ","Никита ","Михаил ","Егор","Андрей ","Илья ","Алексей ","Роман ","Сергей ","Владислав","Владимир","Павел ","Константин ","Евгений  "};
    const char* f_names[20] = {"Анастасия", "Дарья","Мария","Анна","Виктория ","Полина","Елизавета","Екатерина ","Ксения ","Валерия ","Александра","Вероника ","Алиса ","Алёна ","Юлия ","Карина","Евгения","Марина","Надежда","Инна"};


    const char* m_surnames[20] = {"Иванов", "Смирнов","Кузнецов","Попов","Васильев","Петров","Соколов","Михайлов","Новиков","Федоров","Морозов","Волков","Алексеев","Лебедев","Семенов","Егоров","Павлов","Козлов","Степанов","Андреев"};
    const char* f_surnames[20] = {"Иванова", "Смирнова","Кузнецова","Попова","Васильева","Петрова","Соколова","Михайлова","Новикова","Федорова","Морозова","Волкова","Алексеева","Лебедева","Семенова","Егорова","Павлова","Козлова","Степанова","Андреева"};


    if (gender_ch == 1)
    {
        name = m_names[rand() % 20];
        surname = m_surnames[rand() % 20];
    } else
    {
        name = f_names[rand() % 20];
        surname = f_surnames[rand() % 20];
    }

}

Human::Human (int age, char gender, string name, string surname)
{
    this->age = age;
    this->gender = gender;
    this->name = name;
    this->surname = surname;
}

Human::Human(int age, string name)
{
    this->age = age;
    this->name = name;

}

void Human::SetName(string name)
{
    this->name = name;
}

void Human::SetAge(int _age)
{
    this->age = age;
}

string Human::GetName()
{
    return name;
}

int Human::GetAge()
{
    return age;
}



void Human::Show()
{
    cout << "Имя: " << name << endl;
    cout << "Фамилия: " << surname << endl;
    cout << "Возраст: " << age << endl;
    cout << "Пол: " << gender << endl;

}

Human::~Human()
{}
char Human::getGender() const
{
    return gender;
}
void Human::setGender(char gender)
{
    Human::gender = gender;
}
const string& Human::getSurname() const
{
    return surname;
}
void Human::setSurname(const string& surname)
{
    Human::surname = surname;
}