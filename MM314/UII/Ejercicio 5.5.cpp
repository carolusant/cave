/*
------------------------------ Ejercico 5.5 ---------------------------------------
Escribir un programa que lea un límite máximo entero positivo, una base entera positiva, 
y visualice todas las potencias de la base, menores que el valor especificado límite máximo.

n=limite para exponente
a=base
p= potencias	 
	a^0
	a^1
	a^2
	a^3
	 .
	 .
	 .
	a^(n-1) 
	a^(n)
-------------------------------Carlos'Gz-------------------------------------------
*/
#include <iostream>
using namespace std;
int main ()
{
	int n, //limite
		a, //base
		i, //iterador
		p; //potencia
	cout<<"Calcular potencias (solo enteros positivos) "<<endl;
	cout<<"Introduzca la base"<<endl;
	cin>>a;
	cout<<"Introduzca el limite para exponente\n"<<endl;
	cin>>n;	
	cout<<a<<"^0=1\n";
	
	for (i=1; i<=n;i++)
	{
		p=p*a;
		cout<<a<<"^"<<i<<"="<<p<<"\n";
	}
	
}
