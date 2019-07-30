

#include <zconf.h>
#include "slotMachines.h"

int slotMachines::house_money = 100000;

slotMachines::slotMachines() {
    type = "Зал игровых автоматов";
    min_bet = 100;
    machines_count = 20;
}
slotMachines::slotMachines( int min_bet, int machines_count)
         :min_bet(min_bet), machines_count(machines_count) {
    type = "Зал игровых автоматов";
}
int slotMachines::getHouse_money()
{
    return house_money;
}
void slotMachines::setHouse_money(int house_money)
{
    slotMachines::house_money = house_money;
}
int slotMachines::getMin_bet() const
{
    return min_bet;
}
void slotMachines::setMin_bet(int min_bet)
{
    slotMachines::min_bet = min_bet;
}
int slotMachines::getMachines_count() const
{
    return machines_count;
}
void slotMachines::setMachines_count(int machines_count)
{
    slotMachines::machines_count = machines_count;
}
slotMachines::~slotMachines()
{

}
void slotMachines::welcome()
{
    cout << "Добро пожаловать в зал игровых автоматов!" << endl;
    cout << "Кол-во автоматов: " << machines_count << endl;
    cout << "Минимальная ставка: " << min_bet << endl;
    cout << "Удачи!" << endl;
}
slotMachines::slotMachines(const slotMachines& slotMachines)
:min_bet(slotMachines.min_bet), machines_count(slotMachines.machines_count)
{}
bool slotMachines::play()
{
    cout << "Нажмите (X) чтобы крутить" << endl;

    bool win;

    char spin;
    cin >> spin;
    cout << endl;

    if(spin == 'X' || spin == 'x') {
        int num1, num2, num3;

        num1 = rand()%9;
        num2 = rand()%9;
        num3 = rand()%9;

        cout << num1 << "\t";
        sleep(1);
        cout << num2 << "\t";
        sleep(1);
        cout << num3 << "\t";
        sleep(1);

        if (num1 == num2 && num2 == num3) {
            cout << endl << "Поздравляем! Вы выиграли" << endl;
            win = 1;
        }
        else {
            cout << endl << "В следующий раз обязательно повезет" << endl;
            win = 0;
        }
    }
        else cout << "Ошибка!" << endl;

}

