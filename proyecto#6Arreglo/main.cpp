#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
const int lin=4;
const int col=4;


int num[lin][col];

void ingreso (int num[lin][col])
{
    int uc=col-1;
    for(int l=0;l<lin;l++)

  {  for(int c=0; c<col;c++)

     {
        num[l][uc]= 50 + rand() % (100-50);;
     }

  }
}
void promedio (int num[lin][col])
{
    int ul=lin-1; int suma=0,cp=0;
    for(int c=0;c<col;c++)
    {
        cp=0; suma=0;
        for(int l=0;l<lin-1;l++)
        {
            if (num[l][c]%2==0)
            {
                suma +=num[l][c];
                cp++;
            }
        }
        if (cp>0)
            num[ul][c]= suma/ cp;
    }
}
void presentar (int num[][col])
{

    for(int l=0;l<lin;l++)
  {
     for(int c=0;c<col;c++)
     {
        cout<<num[l][c]<<" ";
     }
     cout<<"\n";
  }
}
int main()
{
    ingreso(num);
    promedio(num);
    presentar(num);
    return 0;
}
