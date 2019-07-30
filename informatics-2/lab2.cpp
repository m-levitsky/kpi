#include <iostream>
#include <ctime>

using namespace std;

void outArray(int s, int* a)
{
for (int i = 0; i < s; i++) {
  std::cout << a[i] << " ";
  }
}

bool compareSort(int a, int b, bool up)
{
  return up ? a > b : a < b;
}

void sortInsert(int s, int* a, bool up, int start_i)
{

for (int i = start_i; i < s; i++) {

  int key = a[i];
  int j = i;

  while ((j > start_i) && (compareSort(a[j-1],key,up) )) {

    int tmp = a[j];
    a[j] = a[j - 1];
    a[j - 1] = tmp;
    j--;
  }

  a[j] = key;

  }
} 

void sortSelect(int s, int* a, bool up,  int start_i)
{
  for (int i = start_i; i < s - 1; i++)
  {

    int key_j = i;

    for (int j = i + 1; j < s; j++) if (compareSort(a[key_j],a[j],up) ) key_j = j;


    if (key_j != i)
    {
      int tmp = a[key_j];
      a[key_j] = a[i];
      a[i] = tmp;

    }
  }
}

void sortBubble(int s, int* a, bool up, int start_i)
{

  for (int i = start_i; i < s - 1; i++) {
    for (int j = i + 1; j < s; j++) if ( /* a[j] < a[i] */ compareSort(a[i],a[j],up) ){

      int tmp = a[j];
      a[j] = a[i];
      a[i] = tmp;

    }
  }
}

void gistograma(int s, int* a)
{

for (int i = 0; i < s; i++) {
  int z = a[i];
  std::cout << "arr["<< i << "] = " << a[i] << " ";
  for (size_t j = 0; j < a[i]; j++) {
    std::cout << "*";
  }
  std::cout << '\n';
}



}

void common(int s, int* a)
{
  int cur_value = a[0];
  int cur_number = 1;
  int max_value = a[0];
  int max_number = 1;

  for (int i = 1; i < s; i++) {
    if (a[i] == cur_value) cur_number++;
    if (max_number < cur_number)
    {
       max_value = cur_value;
       max_number = cur_number;
    }
    else {
      cur_value = a[i];
      cur_number = 1;
    }
  }
  std::cout << "Элемент " <<max_value << " встретился аж " << max_number << "раз(а)" <<'\n';
}

int binarySearch(int s, int* a, int key)
{
  int m = 0;
  int left = 0;
  int right = s;
  while (true)
  {
    m = (left + right) / 2;
    if (key < a[m]) right = m - 1;
    else if (key > a[m]) left = m + 1;
    else return m;
    if (left > right) return -1;
  }
}

int linearSearch(int s, int* a, int key)
{
  for (int i = 0; i < s; i++)
  if (a[i] == key) return i;
  return -1;
}

int main()
{

std::cout << "Введите размер массива: ";
int size;
cin >> size;
int arr[size];

int start_i = 0;
int end_i = size;


std::cout << "Массив из "  << size << " случайных чисел от 0 до 50: " << '\n';

srand(time(0));

for (int i = 0; i < size; i++) {
  arr[i] = rand() % 50;
}

outArray(size, arr);
cout << endl;

std::cout << "Гистограма: " << '\n';
gistograma(size, arr);
std::cout << "Сортировать по возрастанию (1) или спаданию (0): ";
int choice1;
cin >> choice1;
bool up;
if (choice1 == 1) {
  up = true;
} else if (choice1 == 0) {
  up = false;
} else {
  std::cout << "Ошибка!" << '\n';
}



std::cout << "Какую часть массива сортировать: весь (1), без мин. и макс. значений (2): ";
int choice2;
cin >> choice2;
if (choice2 == 1) {
  start_i = 0;
  end_i = size;
}
else if (choice2 == 2)
{
  start_i += 1;
  end_i = size - 1;
} else cout << "Ошибка!" << '\n';



std::cout << "Каким алгоритмом сортировать: вставками (1), выбором (2), пузырьком (3): ";
int choice3;
cin >> choice3;
switch (choice3) {
  case 1:
  sortInsert(end_i , arr,up, start_i);
  break;
  case 2:
  sortSelect(end_i , arr,up, start_i);
  break;
  case 3:
  sortBubble(end_i , arr,up, start_i);
  break;
  default: std::cout << "Ошибка!" << '\n';
}

outArray(size, arr);

int arrMin, arrMax;
if (up == true) {
  arrMin  = arr[0];
  arrMax = arr[size - 1];
} else if (up == false) {
  arrMin = arr[size - 1];
  arrMax = arr[0];
}

std::cout << '\n' << "Минимальный элемент массива: " << arrMin << '\n';
std::cout << "Максимальный элемент массива: " << arrMax << '\n';

common(size, arr);

std::cout << "Что искать: ";
int search_value;
cin >> search_value;

std::cout << "Искать число " << search_value << " линейным (1) или двоичным (2) поиском? ";
int choice4;
cin >> choice4;

int ind_search;
if (choice4 == 1) {
  ind_search = linearSearch(size, arr, search_value);
} else if (choice4 == 2) {
  ind_search = binarySearch(size, arr, search_value);
} else {
  std::cout << "Ошибка!" << '\n';
}

if (ind_search == -1) cout << "Не найдено" << '\n';
else std::cout <<"Номер элемента: " << ind_search << '\n';

char c;
cin >> c;
  return 0;
}
