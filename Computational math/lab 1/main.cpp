#include "functions.h"

int main()
{

	cout << "Завдання 1" << endl << endl;

	cout << "Введіть першу рівність: √a = b" << endl;
	cout << "a = ";
	float a, b;
	cin >> a;

	cout <<  "b = ";
	cin >> b;
	cout << endl;

	float b_appr = sqrt(a);

	cout << "Введіть другу рівність: x/y = z" << endl;
	cout << "x = ";
	float x, y, z;
	cin >> x;

	cout <<  "y = ";
	cin >> y;

	cout <<  "z = ";
	cin >> z;
	cout << endl;

	float z_appr = x/y;

	float absFirst = absError(b, b_appr);
	cout << "Абсолютна похибка для першої рівності: " << absFirst << endl;

	float maxAbsFirst = maxAbsError(absFirst, 100000);
	cout << "Гранична абсолютна похибка для першої рівності: " << maxAbsFirst << endl;


	float absSecond = absError(z, z_appr);
	cout << "Абсолютна похибка для другої рівності: " << absSecond << endl;

	float maxAbsSecond = maxAbsError(absSecond, 100000);
	cout << "Гранична абсолютна похибка для другої рівності: " << maxAbsSecond << endl;

	float maxPerFirst = maxPercentError(maxAbsFirst, b);
	cout << "Гранична відносна похибка для 1 рівності: " << maxPerFirst << endl;

	float maxPerSecond = maxPercentError(maxAbsSecond, z);
	cout << "Гранична відносна похибка для 2 рівності: " << maxPerSecond << endl;

	bool res = comparison(maxPerFirst, maxPerSecond);

	if(res) cout << "Перша рівність точніша, так як її відносна похибка менша" << endl;
	else cout << "Друга рівність точніша, так як її відносна похибка менша" << endl;




	return 0;
}
