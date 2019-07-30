#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[]) {

float x = 3.595, y = 1.547, F;
const double pi=3.1415926;

std::cout << "X= " << x << '\n';
std::cout << "Y= " << y <<'\n';

F = (2 * cos(x - pi/6))/(1/2 + pow(sin(y),2)) * (1 + pow(x,2)/(3 + (pow(x,2)/5)));
std::cout << "F= " << F << '\n';

getchar();
}
