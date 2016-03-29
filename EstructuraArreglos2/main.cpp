#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct emple
{
    char nombre[30];
    int ventas[3];
    double total, comis;

};
emple empleados [5];
/*Procedimiento d ingreso del nombre y las ventas
 de todos los empleados.*/
  void IngresoEmpleados (emple empleados [])
{
    int i,k;
    for(i=0;i<5;i++)
    {
        cout<<"Nombre del empleado...:";
        cin.getline(empleados[i].nombre,30);
        for(k=0;k<3;k++)
        {
            cout<<"Ingresar la venta "<<k<<"...:";
            cin>>empleados[i].ventas[k];
        }
        _flushall();
    }
}
/*Elaborar un procedimiento para calcular el total de las ventas,
la comision que es el 5% del total de ventas */
void Calcular(emple empleados[])
{
    int i,k;
    for(i=0;i<5;i++)
    {
        empleados[i].total=0;
        for(k=0;k<3;k++)
        {empleados[i].total+= empleados[i].ventas[k];}
        empleados[i].comis = empleados[i].total *0.05;
    }
}
void Presentar (emple empleados[])
{
    int i,k;
    for(i=0;i<5;i++)
    {
        cout<<"Empleados "<<empleados[i].nombre<<"\n";
        for(k=0;k<3;k++)
        {
            cout<<"Venta "<<k+1<<"...:"<<empleados[i].ventas[k]<<"\n";
        }
        cout<<"Total ventas "<<empleados[i].total<<"\n";
        cout<<"Comision "<<empleados[i].comis<<"\n";
        cout<<"\n\n";
}
}
int main()
{
    IngresoEmpleados(empleados);
    Calcular(empleados);
    Presentar(empleados);
    return 0;
}

