//
#include <iostream>
#include <fstream>
#include <string>

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

string path = "file.txt";
fstream fs;
fs.open(path, fstream::in | fstream::out | fstream::app);

if(fs.is_open())
{
    cout << endl << "file " << path << " opened" << endl << endl;

    fs << "name" << "\t" << "price" << "\t" << "type" << endl;
    fs << ptrToy->getName() << "\t" << ptrToy->getPrice() << "\t" <<  ptrToy->getType() << endl;
    fs << ptrMilk->getName() << "\t" << ptrMilk->getPrice() << "\t" <<  ptrMilk->getType() << endl;
    fs << rice.getName() << "\t" << rice.getPrice() << "\t" << rice.getType() << endl;

} else cout << " error " << endl;

fs.close();
ifstream file(path);
char buf[50] = { '\0'};
file.getline(buf,50);
cout << buf << endl;
file.getline(buf,50);
cout << buf << endl;
file.getline(buf,50);
cout << buf << endl;
file.getline(buf,50);
cout << buf << endl;


    return 0;
}
