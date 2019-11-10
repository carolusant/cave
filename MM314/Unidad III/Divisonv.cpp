/*
------------------------------ Ejercico 6.1 ---------------------------------------
Escribir una función que tenga como parámetros dos números enteros positivos num1 y num2 y calcule el cociente de la di-
visión entera del primero entre el segundo mediante sumas y restas.
-------------------------------Carlos'Gz-------------------------------------------
*/
#include <iostream>
using namespace std;
int resto( int, int );
int main ()
{
	int a,b;
	cout<<"Dame el primer numero"<<endl;
	cin>>a;
	cout<<"Dame el segundo numero"<<endl;
	cin>>b;
	cout<<resto(a,b)<<endl;	
}

//funcion para calcular resto
int resto( int x, int y )
{
	int mayor, menor,res=0;
	if (x>=y)
	{
		mayor=x;
		menor=y;
	}
	else
	{
		mayor=y;
		menor=x;
	}
	cout<<"El resto de dividir "<<mayor<< " entre "<<menor<< " es igual a: ";	
	while(mayor>menor)
	{
		res=mayor-menor;	
		mayor=res;
	}
	return mayor;
}
