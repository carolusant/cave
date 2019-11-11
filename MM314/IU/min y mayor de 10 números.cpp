/* 	
Ejercicio #5 - Guia I Unidad MM-314
5.	Que pida 10 números y diga cuál es el mayor y cual el menor.

Carlos'Gonzalez
*/

#include <iostream>
using namespace std;
int main ()
{
	double n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,mayor,menor;
	cout<<"Encontrar el mayor y el menor de 10 numeros"<<endl;
	cout<<"Ingrese diez numeros"<<endl;
	cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8>>n9>>n10;
	
	//averigua mayor
	mayor=n1;
	if (n2>mayor)
	{
		mayor=n2;
	}
	if (n3>mayor)
	{
		mayor=n3;
	}
	if (n4>mayor)
	{
		mayor=n4;
	}
	if (n5>mayor)
	{
		mayor=n5;
	}
	if (n6>mayor)
	{
		mayor=n6;
	}
	if (n7>mayor)
	{
		mayor=n7;
	}
	if (n8>mayor)
	{
		mayor=n8;
	}
	if (n9>mayor)
	{
		mayor=n9;
	}
	if (n10>mayor)
	{
		mayor=10;
	}
	cout<<"\nEl numero mayor es "<<mayor;
	
	//averigua el menor
	menor=n1;
	if (n2<menor)
	{
		menor=n2;
	}
	if (n3<menor)
	{
		menor=n3;
	}
	if (n4<menor)
	{
		menor=n4;
	}
	if (n5<menor)
	{
		menor=n5;
	}
	if (n6<menor)
	{
		menor=n6;
	}
	if (n7<menor)
	{
		menor=n7;
	}
	if (n8<menor)
	{
		menor=n8;
	}
	if (n9<menor)
	{
		menor=n9;
	}
	if (n10<menor)
	{
		menor=10;
	}
	cout<<" y el numero menor es "<<menor<<endl;
}
