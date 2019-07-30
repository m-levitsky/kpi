
#include <iostream>
#include <cstring>
#include <ctime>  // srand
#include <unistd.h> // sleep

#include "Human.h"
#include "Employee.h"
#include "Room.h"
#include "CashMachine.h"
#include "Service.h"
#include "Date.h"
#include "Client.h"
#include "Schedule.h"

using namespace std;

void open(Date today, Employee admin, Employee barber, Employee stylist, Employee visagist)
{


    today.show();

    cout << endl << "Сегодня на смену вышли: " << endl << endl;

    cout << "*********************" << endl;
    admin.Show();

    cout << "*********************" << endl;
    barber.Show();

    cout << "*********************" << endl;
    stylist.Show();

    cout << "*********************" << endl;
    visagist.Show();

}

void appointment(Employee master, Client client, Date app_time)
{
    char ch1;
    cout << endl <<  "Звонок от клиента!" << endl;

    while (ch1 != 'y') {

        sleep(1);

        cout << "Взять трубку? (y/n)" << endl;


            cin >> ch1;
            if(ch1 != 'y' && ch1 != 'n')
            {
                cout << "Ошибка: введите 'y' или 'n' " << endl;
                continue;
            }


        if (ch1 == 'y') {

            cout << "Информация про клиента: " << endl;

            client.Show();

            cout << "Клиент записался к " << master.getPost() << " " << master.getName() << endl;





            cout << "На " << app_time.getHours() << ":" << app_time.getMinutes() << endl;

            break;
        }
        else
        {
            sleep(3);
            cout << "Еще один звонок" << endl;
        }
    }

    cout << endl << endl;

}

void coming(Employee master, Client client, Room room, Date today, Service service, Date app_time, Schedule schedule)
{

    cout << "Сейчас " << app_time.getHours() << ":" << app_time.getMinutes() << endl;

    if(schedule.getVisit() == 1) {
        cout << "Клиент " << client.getName() << " пришел к " << master.getPost() << " " << master.getName() << endl;


        sleep(1);

        cout << "Свободных мест сейчас: " << room.getFree_chairs() << endl;

        if (room.getFree_chairs()==0) cout << "Придется подождать" << endl;
        else room.dec_chairs();

        int x = rand() % 2;
        client.setIs_new(x);
        if(client.isIs_new() == 0)
        {
            client.setDiscount(10);
            cout << "Скидка постоянного клиента: " << client.getDiscount() << endl;
        }

        client.give_card(0);

    } else
    {
        cout << "Клиент не пришел!" << endl;
        schedule.blacklist(client.getName());
    }

}

void checkout(Employee master, Service service, CashMachine cash, int cash_deck, Room room, Date app_time, Client client)
{
    cout << endl;

    app_time.half();
    sleep(5);

    cout << master.getPost() << " " << master.getName() << " закончил работу" << endl;
    room.inc_chairs();

    cout << "***** Оплата ***** " << endl << endl;

    sleep(1);

    cout << "Услуга: " << service.getName() << endl;

    int pricetag;

    if(client.isIs_new() == 1)
    {
        pricetag = service.getPrice();
    } else
    {
        pricetag = service.getPrice();
        pricetag -= pricetag % 10;
    }

    bool pm = rand() % 2;
    int money = rand() % pricetag + 500;

    cash.checkout(pm, pricetag, money, cash_deck);

    cout << endl;
}

void close(CashMachine cash, Date app_time, Date today)
{
    cout << endl << "***** Рабочее время окончено! *****" << endl;
    sleep(1);

    if(today.getMonth() <= 9)
    {
        cout << "Прибыль за " << today.getDay() << ".0" << today.getMonth() << " : ";
    }
    else cout << "Прибыль за " << today.getDay() << "." << today.getMonth() << " : ";

    sleep(1);

    cout << cash.getCash_deck() << endl;

}

int main()
{
    Schedule schedule;
    Date today;

    cout << "Добро пожаловать в салон красоты " << endl;

    today.input();

    Employee admin("администратор");
    sleep(1);

    Employee barber("парикмахер");
    sleep(1);

    Employee stylist("стилист");
    sleep(1);

    Employee visagist("визажист");
    sleep(1);

    Client client_first;

open(today, admin, barber, stylist, visagist);

    int a = rand() % 12 + 8;
    int b = rand() % 60;
    Date app_time(a,b);

appointment(barber, client_first, app_time);

    Room room;

    Service haircut(150, "стрижка");

    CashMachine cash;
    CashMachine *ch = &cash; // pointer
    ch->setCash_deck(500);

    sleep(5);

coming(barber, client_first, room, today, haircut, app_time, schedule);
room.dec_chairs();


Client client_second;

app_time.hour();

appointment(stylist, client_second, app_time);

    Service styling(350, "услуги стилиста");

    sleep(1);

    int x = rand() % 2;
    schedule.setVisit(x);

coming(stylist, client_second, room, today, styling, app_time, schedule);

sleep(1);

if(schedule.getVisit() == 1)
checkout(barber, haircut, cash, cash.getCash_deck(), room, app_time, client_first);

checkout(stylist, styling, cash, cash.getCash_deck(), room, app_time, client_second);

close(cash, app_time , today);


return 0;
}
