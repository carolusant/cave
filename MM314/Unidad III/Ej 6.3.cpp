/*
------------------------------ Ejercico 6.3---------------------------------------
Escribir un programa que calcule los valores de la función definida de la siguiente forma:
funciony(0) = 0,
funciony(1) = 1
funciony(2) = 2
funciony(n) = funciony(n – 3) + 3 * funciony(n – 2) – funcionx(n – 1) si n > 2
-------------------------------Carlos'Gz-------------------------------------------
*/
#include <iostream>
using namespace std;
int funci(int);
int main()
{
	int n;
	cout<<"Ingrese n para calcular funcion"<<endl;
	cin>>n;
	cout<<"El valor de la funcion es "<<funci(n)<<endl;
}


int funci ( int x)
{
	if (x==0)
	return 0;
	else
	if (x==1)
	return 1;
	else 
	if (x==2)
	return 2;
	else 
	return funci(x-3)+3*funci(x-2)-funci(x-1);
	
}
