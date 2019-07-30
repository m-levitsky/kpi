#include <iostream>
#include <math.h>
#include <complex>
#include <bits/stdc++.h>

using namespace std;

int main() {

double x, y, n;
double ro = pow(x,2) + pow(y,2);
double fi = atan(y/x);

complex<double> z(x ,y);

cout << "Действительная часть:"<< endl;
	cin >> x;
cout << "Мнимая часть:"<< endl;
	cin >> y;

double F = pow(z,n);

complex<double> func(cos(n*fi), sin(n*fi) );

F = pow(ro, n/2) * func;

cout << F << '\n';

complex<double> n = log(z) / log(F);

cout << n << '\n';

  return 0;
}
