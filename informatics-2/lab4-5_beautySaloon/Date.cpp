//
// Created by misha on 04/04/19.
//

#include "Date.h"
Date::Date() { }
Date::Date(int hours, int minutes)
        :hours(hours), minutes(minutes) { }
Date::Date(int hours, int minutes, int day, int month, int weekday)
        :hours(hours), minutes(minutes), day(day), month(month) { }



void Date::show()
{
    if (day > 9 && month > 9) cout << "Сегодня " << day << " . " << month << endl;
    else if (month <= 9 && day > 9) cout << "Сегодня " << day << " . 0" << month << endl;
    else if (month <= 9 && day <= 9) cout << "Сегодня 0" << day << " . 0" << month << endl;
    else cout << "Сегодня 0" << day << " . " << month << endl;

    switch(weekday)
    {
        case 1:
        {
        cout << "Понедельник" << endl;
        break;
        }
        case 2:
        {
            cout << "Вторник" << endl;
            break;
        }
        case 3:
        {
            cout << "Среда" << endl;
            break;
        }
        case 4:
        {
            cout << "Четверг" << endl;
            break;
        }
        case 5:
        {
            cout << "Пятница" << endl;
            break;
        }
        case 6:
        {
            cout << "Суббота" << endl;
            break;
        }
        case 7:
        {
            cout << "Воскресенье" << endl;
            break;
        }
    default:
    {
        cout << "Ошибка: введите число от 1 до 7" << endl;
    }
    }


    cout << "Текущее время " << hours << " : " << minutes << endl;
}

void Date::input()
{
    while(month < 1 || month > 12)
    {
        cout << "Введите месяц (1-12): ";
        cin >> month;
        if(month < 1 || month > 12) cout << "Ошибка: введите число от 1 до 12" << endl;
    }

    while(day < 1 || day > 31)
    {
    cout <<  "Введите день: ";
    cin >> day;
    if(day < 1 || day > 31) cout << "Ошибка: введите число от 1 до 31" << endl;
    }

    while(weekday < 1 || weekday > 7)
    {
    cout <<  "Введите день недели (1-7): ";
    cin >> weekday;
    if(weekday < 1 || weekday > 7) cout << "Ошибка: введите число от 1 до 7" << endl;
    }

    cout << endl;
    if (weekday == 6 || weekday == 7) hours = 11;
    else hours = 9;
    minutes = 30;

}

void Date::half()
{
    minutes += 30;
    if (minutes >= 60)
    {
        hours +=1;
        minutes = 0;
    }
}

void Date::hour()
{
    hours +=1;
}





int Date::getHours() const
{
    return hours;
}
void Date::setHours(int hours)
{
    Date::hours = hours;
}
int Date::getMinutes() const
{
    return minutes;
}
void Date::setMinutes(int minutes)
{
    Date::minutes = minutes;
}
int Date::getDay() const
{
    return day;
}
void Date::setDay(int day)
{
    Date::day = day;
}
int Date::getMonth() const
{
    return month;
}
void Date::setMonth(int month)
{
    Date::month = month;
}
Date::~Date()
{

}
int Date::getWeekday() const
{
    return weekday;
}
void Date::setWeekday(int weekday)
{
    Date::weekday = weekday;
}
