#include <iostream>
#include <string.h>

using namespace std;

void read(FILE*file){
    char tmp[100];
    rewind(file);
    while ((fgets(tmp,100,file)))
        puts(tmp);
    printf("---------------------------");
    rewind(file);
}

int main() {

setlocale(LC_ALL, "Russian");

FILE *SOURCE, *OUTPUT;

SOURCE = fopen("i.txt","r");
OUTPUT = fopen("o.txt","w");

cout << "\nИсходный файл содержит:\n\n";
read(SOURCE);

int fend;
char fam[15];
long zp;
int nzp;

FILE *fpin,*fpout;
fpin = fopen ("i.txt", "r");
fpout = fopen ("o.txt", "w");

for (;;)
{
     fend = fscanf (fpin, "%s %ld", fam, &zp);
    if (fend == EOF)
       break;

       cout << "\n\n Введите  фамилию: " ;
       cin >> fam;

       if(strcmp(fam,"*") == 0)
       break;

       cout << "\n Введите новую зарплату:  " ;
       cin >> nzp;

       fprintf(fpout,"%s %d\n",fam,nzp);

}

fclose(fpin);
fclose(fpout);

fpin = fopen ("o.txt", "r");

std::cout << "\n Изменения:" << '\n';

for (;;)
{
fend= fscanf (fpin, "%s %d", fam, &nzp);
    if (fend == EOF)
        break;
    cout << "\n" << fam << "   " << nzp;
}
  return 0;
}
