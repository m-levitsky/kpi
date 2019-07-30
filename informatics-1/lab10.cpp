#include <iostream>
#include <math.h>
#include <limits>

using namespace std;

int main(int argc, char const *argv[]) {

float x = 1.4, k, F, inf;

  unsigned int a = (2*k);
      unsigned long long factorial = 1;

    for(int i = 1; i <=a; ++i)
      {
          factorial *= i;
      }

inf = numeric_limits<double>::max();

for ( k = 1; k < inf;) {

  F = 1 + (pow(x,2*k))/factorial;

  std::cout << F << '\n';
  break;

}
return 0;
}
