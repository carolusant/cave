/*
------------------------------ Ejercicio 6.7.---------------------------------------
 Escribir una función que decida si un número entero positivo es primo.
-------------------------------Carlos'Gz-------------------------------------------
*/
#include <iostream>
#include <cmath> 
using namespace std;
int primo (int);
int main ()
{
	int n;
	cout<<"Determinar si un numero es primo"<<endl;
	cout<<"Dame un numero"<<endl;
	cin>>n;
	cout<<primo(n);
}

//funcion primo
int primo(int x)
{
	int div=0;
	
	for (int i=1 ; i<sqrt(x); i++)
	{
		if (x%i==0)
		div++;		
	}
	
	if (div==1)
	{
		cout<<x<< " es un numero primo"<<endl;
		cout<<"# Divisores = ";
		return div;
	}
	else
	{
		cout<<x<< " NO es un numero primo"<<endl;
		cout<<"# Divisores = ";
		return div;
	}
	
}
