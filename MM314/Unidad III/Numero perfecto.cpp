/*
------------------------------ Ejercico 6.4 ---------------------------------------
Un número entero n se dice que es perfecto si la suma de sus divisor es incluyendo 1 y e xcluyéndose él coincide consigo-
mismo. Codificar una función que decida si un número es perfecto. Por ejemplo 6 es un número perfecto 1 + 2 + 3 = 6 
-------------------------------Carlos'Gz-------------------------------------------
*/
#include <iostream>
using namespace std;
int perfect (int);
int main ()
{
	int num;
	cout<<"Determinar si un numero es perfecto"<<endl;
	cout<<"Dame el numero"<<endl;
	cin>>num;
	cout<<perfect(num)<<endl;
}
/// funcion perfect
int perfect(int x)
{
	int div=0,sdiv=0;
	for (int i=1;i<x; i++)
	{
		if (x%i==0)
		{
			div++;
			sdiv+=i;
		}
		
	}
	if (sdiv==x)
	{
		cout<<"El numero "<<x<<" es perfecto"<<endl;
		cout<<"Porque sus divisores suman ";
		return sdiv;
	}
	else 
	{
		cout<<"El numero "<<x<<" NO es perfecto"<<endl;
		cout<<"Porque sus divisores suman ";
		return sdiv;
	}
}
