#include <iostream>


using namespace std;

int main() {

int i, a[i],b[i];

for ( i = 0; i < 10; i++) {
  cin >> a[i];


  if (a[i]==a[i+1]) {
    b[i] =  1;
    b[i+1]= 1;

  } else {
      b[i]  = 0;
      b[i+1]= 0;
  }
}

for ( i = 0; i < 10; i++) {
std::cout << '\n'<< b[i];
}

return 0;
}
