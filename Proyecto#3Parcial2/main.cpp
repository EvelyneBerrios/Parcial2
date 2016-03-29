#include <iostream>
/*
Se tine que ingresar 5 numeros a un arreglo.
Elaborar un procedimiento para devolver el
numero de pares e impares.
Una funcion para contar los numeros mayores a 100.
*/

using namespace std;
int num [5];

void ingresarDatos(int num[])
{
    for(int i=0; i < 5 ;i++)
    {
       cout<<"Ingresar Numero["<<i<<"]: ";
       cin>>num[i];
    }
}
void ContarParesImpares ()
{
    int Pares=0; int Impares=0;
    for(int i=0; i < 5 ;i++)
    {
        if (num[i]%2==0)
            Pares++;
        else
            Impares++;
    }
    cout<<"Numero de Pares   :"<<Pares<<endl;
    cout<<"Numero de Imapres :"<<Impares<<endl;

}
void ContarMayores100 ()
{
   int Mayor100=0;
   for(int i=0; i < 5 ;i++)
   {
       if(num[i]>100)
        Mayor100++;
   }
   cout<<"Numeros Mayores a 100 :"<<Mayor100<<endl;
}


int main()
{
    ingresarDatos(num);
    ContarParesImpares();
    ContarMayores100();

    return 0;
}
