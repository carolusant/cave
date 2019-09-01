/*------------------------------ Ejercico 5.7. ---------------------------------------
Escribir un programa que lea el radio de una esfera y visualice su área y su volumen.

area=4*pi*(r)^2
volumen=(4*pi*(r)^3)/3
-------------------------------Carlos'Gz--------------------------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	double	r,vol,area,pi=3.14159265358979323846;
	cout<<"Calcular el area y volumen de una esfera"<<endl;
	cout<<"Ingrese el radio"<<endl;
	cin>>r;
	area=4*pi*r*r;
	vol=(4*pi*r*r*r)/3;
	cout<<"El area es de "<<area<<endl;
	cout<<"El volumen es de "<<vol<<endl;
}
