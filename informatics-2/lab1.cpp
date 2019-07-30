#include <iostream>
#include <math.h>

using namespace std;


// 1 - кол-во цифер в числе
//for
int numCount(int a)
{
  int count = 1;
  for (int i = 10; a/i; i *= 10 )
  {
    if(a > 0) count++;
  }
  return count;
}

// 2 - организовать массив, элементы которого - цифры числа
//do while

int value[12];

void numArray(int a)
{
  int count = numCount(a);
  int j = 0;
  int i = count - 1;

do {
  int x = a % 10;
  value[i] = x;
  a /= 10;
  i--;
} while(i >= 0);

  for(i = 0;i <= count - 1;++i) {
  cout <<  value[i] << ' ';
  }
}

// 3 - среднее арифметическое цифер числа
//while

float numSAr (int a)
{
  int i = 0;
  int count = numCount(a);
  float s = 0;
  while (i <= count) {
    s += value[i++];
  }
return (s/count);
}

// 4 - среднее геометрическое цифер числа
//for

float numSGeom (int a)
{
  int count = numCount(a);
  float s = 1;
  for (int i = 0; i < count; i++) {
    s *= value[i];
  }
return (s/count);
}

// 5 - факториал числа
// do while

long double numFact (int a)
{

  long double factorial = 1;

  do {
   factorial *= a;
    a--;
  } while(a > 1);

  return factorial;
}

// 6 - сумма всех четных чисел от 1 до N
//while

int numEven (int a)
{
  int s = 0;
  int i = 0;
  while(i <= a){

  if (!(i % 2))
  {
    s += i;
  }
    i++;
  }
   return s;
  }

// 7 - сумма всех нечетных чисел от 1 до N
//while

int numOdd (float a)
{

  if (a != (int)a) {
    cout << "Введенное число не целого типа" << '\n';
    return -1;
  } else
    {
  int s = 0;
  int i = 0;
  while(i <= a){

  if (i % 2)
  {
    s += i;
  }
    i++;
  }
   return s;
 }

  }


int numOdd(float a, int b)
{

      a += b;
      return numOdd(a);

}

int main()
{
  float n;
  cout << "Введите аргумент N: ";
  cin >> n;


  std::cout << "Нажмите 1 чтобы ввести второй аргумент: ";
  int ch;
  int m;
  cin >> ch;
  if (ch == 1) {
    cout << "Введите аргумент M: ";
    cin >> m;
  } else m = 0;


  cout <<"кол-во цифер в числе: " << numCount(n) << endl;
  cout << "массив из цифер числа: ";
  numArray(n);
  cout << endl;
  cout << "среднее арифметическое цифер числа: " << numSAr(n) << endl;
  cout << "среднее геометрическое цифер числа: " << numSGeom(n) << endl;
  cout << "факториал числа: " << numFact(n) << endl;
  cout << "сумма всех четных чисел от 1 до N: " << numEven(n) << endl;

  if (ch == 1) {
    cout << "сумма всех нечетных чисел от 1 до N (для двух аргументов): " << numOdd(n,m) << endl;
  }
  else cout << "сумма всех нечетных чисел от 1 до N (для одного аргумента): " << numOdd(n) << endl;

  getchar();
  getchar();
  return 0;
}
