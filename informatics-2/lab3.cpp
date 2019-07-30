#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;

//вывод строки на экран
void output(char* a)
{
        cout << a << endl;
}

// рандом или вручную
int first_choice()
{
	cout << "Как заполнять строку? (1) - random, (2) - вручную ";
	int choice;
	cin >> choice;
	return choice == 1 ?  1 :  2;
}

// если рандом, то чем
int second_choice()
{
  cout << "Чем заполнять строку? (1) - цифры, (2) - буквы, (3) - любые символы ";
  int choice_2;
  cin >> choice_2;

  switch(choice_2)
  {

    case 1:
      return 1;
      break;
    case 2:
      return 2;
      break;
    case 3:
      return 3;
      break;
	default:
	    return -1;
  }

}

//и сколько
int size_definition()
{
    cout << "Введите кол-во символов: ";

    int size;
    cin >> size;

    return size;
}

//Stroka - random
char *Stroka_rand(int second_choice, int size)
{

    char *Stroka = new char[size];

    srand((unsigned)time(0));

    char type;
    int type2;
    switch(second_choice)
    {
    case 1:
        type = '0';
        type2 = 10;
        break;
    case 2:
        type = 'a';
        type2 = 10;
        break;
    case 3:
        type = 33;
        type2 = 94;
        break;
    default:
        cout << "Error in *Stroka_rand" << endl;

    }

    for (int i = 0; i < size ; ++i) {
        Stroka[i] = type + rand() % type2;
        cout << Stroka[i] << " ";
    }

    *(Stroka + size) = '\0';
    cout << endl;
    return Stroka;
}

//Stroka - ввод пользователем
char *Stroka_cin()
{
    cout << "Введите Stroka1: " << endl;
    int i;
    char *Stroka = new char[i];
    cin >> Stroka;

    return Stroka;
}

// Stroka2 - ввод пользователем
char *Stroka2()
{
    cout << "Введите Stroka2:  " << endl;
    int i;
    char *Stroka2 = new char[i];

    cin >> Stroka2;

    return Stroka2;
}

//qsort для Stroka
//...
char* quicksort(char *str, int minimal, int size)
{
    int left = minimal, right = size;
    char temp, p;

    p=str[((size+minimal)/2)];

    do
    {
        while ( str[left] < p ) left++;
        while ( str[right] > p ) right--;
        if (left <= right)
        {
            temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++; right--;
        }
    } while ( left<=right );

    if ( right > minimal )  {
        quicksort(str, minimal, right);
    }
    if ( size > left )  {
        quicksort(str, left,  size);
    }
return str;
}

//сколько раз стр2 встречается в стр1
int search(char *Stroka, char *Stroka2)
{
    int tmp = 0;

    char *pos;

    do
    {
       pos = strstr(Stroka, Stroka2);

       if(pos != NULL)
       {

           tmp++;
           Stroka = pos + strlen(Stroka2);
       }

    } while(pos != NULL);

    return tmp;
}

//Замена символов...
char* replacement(char* Stroka, char* Stroka2, int size1, int size2)
{

    for (int i = 0; i < size2; ++i) {

        for (int j = 0; j < size1; ++j)
        {
            if (Stroka[j] == Stroka2[i])
                Stroka[j] = '#';
        }
    }
    return Stroka;
}

//поиск Stroka2 в Stroka
bool check(char *Stroka, char *Stroka2)
{

    char *pos = strstr(Stroka, Stroka2);

    return pos != NULL ? true : false;
}

// инициализация массива NxN
int **array(int n)
{


    cout << endl << "Двумерный массив случайных чисел от -50 до 50" << endl;

    int **arr;

    arr = new int * [n];

    for (int i = 0; i < n; ++i) {
        arr[i] = new int [n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 100 - 50 ;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return arr;
}

//выбор где искать мин и макс значения
int area()
{
    cout << endl << "Выберите область для поиска мин. и макс. значений " << endl;

    cout << "   |  #  .  .  .  .  |        |  .  .  .  .  .  |        |  .  #  #  #  #  |" << endl;
    cout << "   |  #  #  .  .  .  |        |  .  .  .  .  .  |        |  .  .  #  #  #  |" << endl;
    cout << "1) |  #  #  #  .  .  |     2) |  .  .  #  .  .  |     3) |  .  .  .  #  #  |" << endl;
    cout << "   |  #  #  #  #  .  |        |  .  #  #  #  .  |        |  .  .  #  #  #  |" << endl;
    cout << "   |  #  #  #  #  #  |        |  #  #  #  #  #  |        |  .  #  #  #  #  |" << endl;

    int area_type;
    cin >> area_type;

    if(area_type < 1 || area_type > 3)
    {

        cout << "Error: invalid area";
        return -1;
    }
    else return area_type;
}

//min max
int min_value(int **Array, int size, int area)
{

    int value = 0, average;

     if (area == 1) {
        for (int i = 0; i<size; ++i) {
            for (int j = 0; j<=i; ++j) {

                if (Array[i][j] < value) {
                    value = Array[i][j];
                }

            }
        }
    }


     if (area == 2)
     {
         average = size/2;

        for (int i = size-1; i >= average; i--)
        {
            for(int j = size - 1 - i; j <= i; j++)
            {
                if (Array[i][j] < value) {
                    value = Array[i][j];
                }
            }

            for (int j = i; j >= average; j--)
            {
                if (Array[i][j] < value) {
                    value = Array[i][j];
                }
            }
        }
     }


     if (area == 3){

         average = size/2;

         for (int i = 0; i <= average; i++)
         {
             for(int j = i + 1; j < size; j++)
             {
                 if (Array[i][j] < value) {
                     value = Array[i][j];
                 }
             }
         }

         for (int i = size - 1; i >= average; i--)
         {
             for (int j = size - i; j < size; j++)
             {
                 if (Array[i][j] < value) {
                     value = Array[i][j];
                 }
             }
         }

     }

     cout << value;
    return value;
}

int max_value(int **Array, int size, int area)
{
    int value = 0, average;

    if (area == 1) {
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j <= i; ++j) {
                if (Array[i][j] > value) {
                    value = Array[i][j];
                }
            }
        }
    }


    if (area == 2)
    {
        average = size/2;

        for (int i = size-1; i >= average; i--)
        {
            for(int j = size - 1 - i; j <= i; j++)
            {
                if (Array[i][j] > value) {
                    value = Array[i][j];
                }
            }

            for (int j = i; j >= average; j--)
            {
                if (Array[i][j] > value) {
                    value = Array[i][j];
                }
            }
        }
    }

    if (area == 3){

        average = size/2;

        for (int i = 0; i <= average; i++)
        {
            for(int j = i + 1; j < size; j++)
            {
                if (Array[i][j] > value) {
                    value = Array[i][j];
                }
            }
        }

        for (int i = size - 1; i >= average; i--)
        {
            for (int j = size - i; j < size; j++)
            {
                if (Array[i][j] > value) {
                    value = Array[i][j];
                }
            }
        }

    }
    cout << value;
    return value;

}

void garbage_collector(char* Stroka, char* Stroka2, int** Array, int size)
{

    delete[] Stroka;
    delete[] Stroka2;

    for(int i = 0; i < size; i++)
    {
        delete[] Array[i];
    }

    delete[] Array;

}

int main()
{

    int choice1 = first_choice(); //как заполнять

    size_t size = 0;

    if (choice1 == 1) //выбран рандомный ввод
    {
        ////////////////////////////////////////////////
        int choice2 = second_choice(); //чем заполнять
        size = size_definition();
        char *str1 = Stroka_rand(choice2, size);
        ////////////////////////////////////////////////

        quicksort(str1, 0, size-1);
        cout << "Stroka отсортированная: " << endl;
        output(str1);

        char *str2 = Stroka2(); //ввод строки2
        size_t size2 = strlen(str2);

        cout << "Stroka2: " << endl;
        output(str2);

        cout << "Содержит ли Stroka все символы из Stroka2? " ;
        bool checkstr = check(str1, str2);
        if (checkstr == 1) cout << "Да" << endl;
        else cout << "Нет" << endl;

        cout << "Сколько раз Stroka2 встретилась в Stroka: " << search(str1, str2);
        cout << endl << "Cимволы из Stroka, равные символам из Stroka2, заменены на '#' : " ;
        char* repl = replacement(str1, str2, size, size2);
        output(repl);

        cout << endl << "-----------------------------------" << endl;

        cout << "Введите размер массива (n): ";
        int arr_size;
        cin >> arr_size;

        int **arr;
        arr = array(arr_size);
        int ch_area = area();

        cout << endl << "Минимальное значение: " ;
        min_value(arr, arr_size, ch_area);
        cout << endl << "Максимальное значение: " ;
        max_value(arr, arr_size, ch_area);

        cout << endl <<  "Введите (*) чтобы выйти ";
        char leave;
        while (leave != '*') cin >> leave;
        if (leave == '*') garbage_collector(str1,str2, arr, arr_size);

    } else if (choice1 == 2)
    {
        //////////////////////////////////////////////////////////
        char *str1 = Stroka_cin(); // ввод вручную
        size = strlen(str1);
        //////////////////////////////////////////////////////////
        quicksort(str1, 0, size-1);
        cout << "Stroka отсортированная: " << endl;
        output(str1);


        char *str2 = Stroka2(); //ввод строки2
        size_t size2 = strlen(str2);

        cout << "Stroka2: " << endl;
        output(str2);

        cout << "Содержит ли Stroka все символы из Stroka2? " ;
        bool checkstr = check(str1, str2);
        if (checkstr == 1) cout << "Да" << endl;
        else cout << "Нет" << endl;

        cout << "Сколько раз Stroka2 встретилась в Stroka: " << search(str1, str2);
        cout << endl << "Cимволы из Stroka, равные символам из Stroka2, заменены на '#' : " ;
        char* repl = replacement(str1, str2, size,size2);
        output(repl);

        cout << endl << "-----------------------------------" << endl;

        cout << "Введите размер массива (n): ";
        int arr_size;
        cin >> arr_size;

        int **arr;
        arr = array(arr_size);
        int ch_area = area();

        cout << endl << "Минимальное значение: " ;
        min_value(arr, arr_size, ch_area);
        cout << endl << "Максимальное значение: " ;
        max_value(arr, arr_size, ch_area);

        cout << endl <<  "Введите (*) чтобы выйти ";
        char leave;
        while (leave != '*') cin >> leave;
        if (leave == '*') garbage_collector(str1,str2, arr, arr_size);
    }

  return 0;
}
