#include <iostream>
using namespace std;


/*
const int n = 10;


double lagrange(double X[n], double Y[n], double t)
{
    double sum,prod;
    sum=0;

    for (int j=0; j<n; j++){
        prod=1;

        for (int i=0; i<n; i++){
            if (i!=j){
                prod *= (t-X[i])/(X[j]-X[i]);
            }
        }
        sum += (Y[j]*prod);
    }
    return sum;
}
*/

float x[4] = {};
float y[4] = {};


float L(float xp, int n, int i)
{
	float chesl;
	float znam;

	chesl = 1;
	znam = 1;


	int k;

	for(k = 0; k!=n; k++)
	{
		if(k == 1) continue;
		chesl *= xp - x[k];

	}

	for(k = 0; k!=n; k++)
	{
		if(x[i] == x[k]) continue;
		znam *= x[i] - x[k];
	}

	return chesl/znam;

}


int main()
{

/*
	double X[n];

	for(int i = 0; i < 8; i++)
	{
		cout << "Введите X" << i << " \t";
		cin >> X[i];
	}

	cout << endl;

	double Y[n];

	for(int i = 0; i < 4; i++)
		{
			cout << "Введите Y" << i << " \t";
			cin >> Y[i];
		}

	for (int i = 4; i < n; i++)
	{
		Y[i] = 0;
	}


	cout << endl << "n = 3" << endl << endl;

	double x1 = lagrange(X, Y, -1.5);
	//cout << lagrange(X, Y, -1);
	//cout << lagrange(X, Y, -0.5);
	//cout << lagrange(X, Y,1.5);
*/


	cout << "Введите значения Х для которых известно значение У: " << endl;

	for(int i = 0; i < 4; i++)
	{
		cin >> x[i];
	}

	cout << endl << "Введите значения  У: " << endl;

	for(int i = 0; i < 4; i++)
	{
		cin >> y[i];
	}

float px = 1;

for(int i = 0; i < 4; i++)
{


cout << "Введите Х для которого надо найти значение У: " << endl;

cin >> px;

int n = sizeof(y)/sizeof(float);

float r = 0;



for(int i = 0; i != n; i++)
{
	r += y[i]*L(px,n,i);
}

cout << "У = " << r << endl;

}

	return 0;
}

