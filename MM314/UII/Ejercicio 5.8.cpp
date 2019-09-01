/*------------------------------ Ejercico 5.8 ---------------------------------------
Escribir un programa que presente los valores de la función coseno(3x )-2x para 
los valores de x igual a 0, 0.5, 1.0, ... 4.5, 5.

-------------------------------Carlos'Gz--------------------------------------------*/
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double	f, //funcion
			x=5,
			i;
	for (i=0;i<=x;i+=0.5)
	{
		f=cos(3*i)-2*i;
		cout<<"Cos(3*"<<i<<")-2*"<<i<<"= "<<f<<endl;
	}		
}
