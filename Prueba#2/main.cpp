#include <iostream>
/*1Ingresar 5 nuemros a un arreglo, usando un
procedimiento (deben de ser pares y mayores a 50).
2Elaborar una funcion donde encuentre el numero mayor
del arreglo.
3Elaborar una funcion donde me calcule el promedio
de los diisibles entre 5.
4usando un procedimiento obtener el numero menor del arreglo.
5En el programa principal llamar el procedimiento de ingreso, el
procedimiento de obtener el numero menor y asignar los vaores devueltos
por las funciones a variables, para que se presenten posteriormente.

*/

using namespace std;
int num [4];
int mayor, menor;
double promed;


void ingresar(int numero[])
do
{   int i;
    for(int i=0; i<4 ;i++)
    {
       cout<<"Ingresar Numero["<<Pares<<"]: ";
       cin>>num[Pares];
    }while(numero)
}
int Mayor (int numero[])
{   int i;
    int mayores=0;
    for(int i=0; i < 4 ;i++)
    {
        if (mayores<numero[i])
            mayores=numero[i];
    }
    return mayores;
int Promedio (int numero[])
{
    int i;
    int suma=0, prom;
    for (int i=0; i < 4 ;i++)
    {
        suma=numero[i];
    }
    prom=suma/4
}

}




int main()
{
    ingresarNumero(num);
    ContarPares();
    return 0;
}
