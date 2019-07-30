#include <cstring>
#include <ctime>
#include <iostream>
#include <Windows.h>

#include "Human.h"
#include "Player.h"
#include "Croupier.h"
#include "Employee.h"
#include "Hall.h"
#include "slotMachines.h"
#include "Winning.h"

using namespace std;

int main()
{

    srand(time(0));

    Croupier *ptrCroupier = new Croupier;
    Sleep(1);


    Hall *ptrSlotMHall = new slotMachines;
    slotMachines *ptrSlotM = new slotMachines;

    Winning *ptrJackPot = new Winning("Jack-Pot");

    Human *ptrPlayer1 = new Player;
    Sleep(1);
    Human *ptrPlayer2 = new Player;

    cout << "Рады видеть вас в нашем казино!" << endl;
    Sleep(1);
    cout << endl << "Выберите игрока" << endl << endl;
    Sleep(1);
    cout << "Игрок 1: " << endl;
    ptrPlayer1->Show();
    Sleep(1);
    cout << endl << endl << "Игрок 2: " << endl;
    ptrPlayer2->Show();

    cout << endl << endl << "Нажмите (1) или (2) чтобы сделать выбор или нажмите (3) чтобы создать игрока вручную  ";

    int ch1;
    while(ch1 < 1 || ch1 > 3) cin >> ch1;
    cout << endl;

    switch (ch1){
    case 1: {
        Human* yourPlayer = ptrPlayer1;
        break;
    }
    case 2:
    {
        Human *yourPlayer = ptrPlayer2;
        break;
    }
    case 3:
    {
        Human *yourPlayer = new Player;
        yourPlayer->Show();
        cout << endl << endl;
        yourPlayer->Input();
        cout << endl;
        }
    }

    cout << "Готово! Наш крупье " << ptrCroupier->GetName() << " проводит вас в зал" << endl;
    Sleep(1);

    ptrSlotM->welcome();

    Sleep(1);
    cout << endl <<  "Для начала игры введите вашу ставку: ";
    int bet;

    cin >> bet;
    if(bet<ptrSlotM->getMin_bet()) cout << "Минимальная ставка - " << ptrSlotM->getMin_bet() << endl;

    ptrCroupier->setBet(bet);

    cout << endl;

    ptrSlotM->play();

    if(ptrSlotM->play() == 1)
    {
        ptrCroupier->setPrize(bet*10);
        cout << "Ваш выигрыш " << ptrCroupier->getPrize() << endl;
    }

    cout << "Хотите сыграть еще? (Х) - да, (У) - нет  ";
    char leave;
    cin >> leave;
    cout << endl;

    if(leave == 'X' || leave == 'x') {
        ptrSlotM->play();
        if(ptrSlotM->play() == 1)
        {
            ptrCroupier->setPrize(bet*10);
            cout << "Ваш выигрыш " << ptrCroupier->getPrize() << endl;
        }
    }

    else cout << "Приходите еще!" << endl;

    return 0;
}