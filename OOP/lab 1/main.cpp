
#include <iostream>
#include "Receipt.h"

void (Receipt::*ps) ();

void View(Receipt obj)
{
    obj.Show();
}


int main() {

    Receipt *p;

    p = new Receipt;

    p->setDate(210620);
    p->setSum(1300);
    p->setNumber(777);

    ps = &Receipt::Show;

    Receipt p2(123, 201219, 999);

    p->Show();

    View(p2);




    return 0;
}
