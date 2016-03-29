#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /*  Elaborar un arreglo de 5 numeros pares enteros
1 elaborar una funcion que genere un numero par entre 50-150
 2 elaborar un procedimiento donde se rellene el arreglo usando ls funvion que generea los
 numeros
 3. elaborar un procedimiento que me devuelva el numero mayory menor  principal llamar el ingreso, mayor y presentar
 presentar las variables del mayor y menor*/

using namespace std;
int numero [4];
int mayor=0;
int menor=150;
int cualquiera ()

{
    int num=0;
    do
    {
    num= 50  + (rand()%100);
    } while (!(num%2==0));

    return num;
}
void generar (int numero[])
{

    int i;
    for (i=0; i<5; i++)
    {
        numero [i]= cualquiera();
    }
}
void mayormenor (int numero[], int &mayor, int &menor)
{
    int i;
    for(i=0;i<5;i++)
    {
        if (numero [i]>mayor)
        {
            mayor=numero[i];
        }
        if (numero [i]<menor)
        {
            menor=numero[i];
        }
    }
}
void presentar (int numero [])
{
    int i;
     for (i=0; i<5; i++)
     {
         cout<<"Numero["<<i<<"]="<<"es"<<numero [i]<<"\n";
     }

}

int main ()
{
generar(numero);
mayormenor(numero, mayor, menor);
presentar(numero);
    cout<<"Numero mayor es"<<mayor<<"\n";
    cout<<"Numero menor es"<<menor<<"\n";
}
