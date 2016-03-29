#include <iostream>
#include <stdlib.h>
#include <time.h>

/*
numero mayor en las lineas 3x3

*/

using namespace std;
const int lin=3;
const int col=4;


int num[lin][col];

void ingreso (int num[lin][col])
{
    int uc=col-1;
    for(int l=0;l<lin;l++)

  {  num[l][uc]=num[l][0];
     for(int c=0;c<col;c++)
     {
        if ( num[l][uc]<num[l][c])
        num[l][uc]=num[l][c];
     }
     cout<<"\n";
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
    srand(time(0));
    ingreso(num);
    presentar(num);

    return 0;
}
