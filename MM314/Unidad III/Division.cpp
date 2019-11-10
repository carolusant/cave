/*
------------------------------ Ejercico 6.2 ---------------------------------------
Escribir una función que tenga como parámetr o dos números enteros positivos num1 y num2 , y calcule el resto de la divi-
sión entera del mayor de ellos entre el menor mediante suma y restas.
-------------------------------Carlos'Gz-------------------------------------------
*/
#include <iostream>
using namespace std;
int cociente( int, int );
int main ()
{
	int a,b;
	cout<<"Dame el primer numero"<<endl;
	cin>>a;
	cout<<"Dame el segundo numero"<<endl;
	cin>>b;
	cout<<cociente(a,b)<<endl;	
}

//funcion para calcular cociente
int cociente( int x, int y )
{
	int mayor, menor,res=0, quo=0;
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
	cout<<"El cociente al dividir "<<mayor<< " entre "<<menor<< " es igual a: ";	
	while(mayor>menor)
	{
		res=mayor-menor;	
		mayor=res;
		quo++;
	}
	return quo;
}
