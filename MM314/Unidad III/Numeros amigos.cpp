/*
------------------------------ Ejercicio 6.5.---------------------------------------
Escribir una funci�n que decida si dos n�mer os enteros positivos son amigos. 
Dos n�mer os son amigos, si la suma de los divisores distintos de s� mismo de
 cada uno de ellos coincide con el otr o n�mero. 
 Ejemplo 284 y 220 son dos n�meros amigos.
-------------------------------Carlos'Gz-------------------------------------------
*/
#include <iostream>
using namespace std;
int amigos (int , int);
int main ()
{
	int pn, sn;
	cout<<"Numeros amigos"<<endl;
	cout<<"Dame el primer numero "<<endl;
	cin>>pn;
	cout<<"Dame el segundo numero"<<endl;
	cin>>sn;
	cout<<amigos(sn, pn)<<endl;
}

int amigos (int x, int y)
{
	int sdivx=0,sdivy=0;
	
	for (int i=1; i<x; i++)
	{
		if(x%i==0)
		{
			sdivx+=i;
		}		
	}
	for (int a=1; a<y; a++)
	{
		if(y%a==0)
		{
			sdivy+=a;
		}	
		
	}
	

	if(sdivx==y && sdivy==x)
	{
		cout<<"\n\n"<<x<< " y " <<y<<" son numeros amigos"<<endl;
	}
	else 
	{
		cout<<"\n\n"<<x<< " y " <<y<<" NO son numeros amigos"<<endl;
	}
	
	cout<<"\n\nSuma de divisores de "<<x<<" == "<<sdivx<<endl;
	cout<<"Suma de divisores de "<<y<<" == ";
	return sdivy;
	
}

