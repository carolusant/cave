/*
------------------------------ Ejercicio 4) ---------------------------------------
 Implemente de forma recursiva una función que nos devuelva el máximo común divisor de
dos números enteros utilizando el algoritmo de Euclides(investigue cual es este algoritmo)

mcd(15, 9) == mcd(9, 15%9) == mcd (6, 9%6) == mcd(3, 6%3) == mcd (0, 3

mcd (x ,y) == mcd (y, x%y) 
-------------------------------Carlos'Gz-------------------------------------------
*/
#include <iostream>
using namespace std;
int mcd (int, int); //prototipo de funcion
int main ()
{
	int pn, sn; // primer numero, segundo numero 
	cout<<"Calcula MCD"<<endl;
	cout<<"Ingrese dos numeros enteros positivos"<<endl;
	cin>>pn>>sn; 
	
	if (pn>sn)
	{
		cout<<" El MCD de "<<pn<< " y "<<sn<<" es : "<<mcd(pn,sn);
			
	}
	else 
	{
		cout<<" El MCD de "<<pn<< " y "<<sn<<" es : "<<mcd(sn,pn);
	}

}

//funcion mcd
int mcd (int x, int y)
{
	if (y==0)
	{
		return x;
	}
	else
	{
		return mcd(y, x%y);
	}
	
}

