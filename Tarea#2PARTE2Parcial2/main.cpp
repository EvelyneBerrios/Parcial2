#include <iostream>
/*
2- Elaborar un procedimiento para ingresar 5 numeros
enteros comprendidos entre 1-10 a un arreglo.
elaborar una funcion para obtener el factorial de un numero
<Luego calcular la factorial de cada uno de los numeros
del arreglo y presentarlo, s debera de llamar la funcion del factorial para hacer el calculo
por cada numero del arreglo.
usar un void para realizar este procedimiento
*/

using namespace std;
int numero [4];


void ingreso (int numero[])

{
    int i=0;
    for (i=0;i<5;i++)
{do {
       cout<<"Ingresar Numero["<<i<<"] :";
       cin>>numero [i];
    } while ((numero[i]<=0) or (numero[i]>=10));
}
}
int factorial (int numero)
{
int i, fac=1;
for (i=0; i<numero;i++)
  {
      fac = fac *i;
  }
  return fac;
}
void presentarFactorial (int numero[])
{
    int i=0;
    int facto;
    for (i=0; i<5;i++)
    {
    facto = factorial(numero[i]);
    cout<<"Factorial de "<<numero [i]<< "es "<<facto<<"\n";
    }
}

int main()
{ ingreso (numero);
   presentarFactorial (numero);

    return 0;
}
