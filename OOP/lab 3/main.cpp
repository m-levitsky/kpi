
#include <iostream>

#include "goods.h"
#include "product.h"

#include "toy.h"
#include "milk_product.h"

using namespace std;

int main() {


goods *ptrToy = new toy;
ptrToy->setName("spiderman");
ptrToy->show();

product rice(25, "rice", 10, "groats",500);
rice.show();

product *ptrMilk = new milk_product;


ptrMilk->setName("prostokvashino");
ptrMilk->setType("milk");

ptrMilk->show();



    return 0;
}
