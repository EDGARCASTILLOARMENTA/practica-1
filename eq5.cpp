#include<iostream>
using namespace std;
struct alumno{
int correlativo;
string nombre;
string apellido;
double notas[4];
};
int main()
{
int opcion,n,i;
alumno curso[12];

cout<<"\n   1 Ingresar datos";
cout<<"\n   2 Ingresar notas";
cout<<"\n   3 calculo de promedio";
cout<<"\n  ingrese la opcion a seleccionar: ";
do{
cin>>opcion;}
while (opcion>=1 || opcion<=3);
switch(opcion)
{
case 1:
cout<<"\nSeleccionaste la opcion 1?";
cout<<"\nIngresa cantidad de alumnos a ingresar: ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Ingrese Correlativo: ",cin>>curso[i].correlativo;
cout<<"Ingrese Nombre: ",cin>>curso[i].nombre;
cout<<"ingrese Apellido: ",cin>>curso[i].apellido;
}
break;
case 2:
for(i=0;i<n;i++)
{
cout<<"ingrese nota Certamen 1 (25%): ",cin>>curso[i].notas[0];
cout<<"ingrese nota Certamen 2 (30%): ",cin>>curso[i].notas[1];
cout<<"ingrese nota Certamen 3 (30%): ",cin>>curso[i].notas[2];
cout<<"ingrese nota Test (15%): ",cin>>curso[i].notas[3];
}


return 0;
}}
