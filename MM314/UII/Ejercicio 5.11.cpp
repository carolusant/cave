/*------------------------------ Ejercico 5.11 ---------------------------------------
Escribir un programa que calcule y visualice el más grande, 
el más pequeño y la media de n números (n > 0).
-------------------------------Carlos'Gz--------------------------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	double m;	//media	
	int	n, //numero  de numeros
		num, //numero ingresado
		i, //iterador
		s=0, //total suma
		mayor,
		menor; 
	cout<<"Mayor, menor y media de 'n' numeros"<<endl;
	cout<<"Cuantos numeros desea ingresar"<<endl;
	cin>>n;
	mayor=num;
	menor=num;
	for (i=1;i<=n;i++)
	{
		cout<<"Ingrese un numero"<<endl;
		cin>>num;
		//encontrar el mayor
		if (num>=mayor)
		{
			mayor=num;
		}
		else
		{
			if (num<menor)
			{
			menor=num;
			}
		}
		//sumatoria para encontrar media
		s+=num;
	}
	m=s/n;
	cout<<"El mayor es el "<<mayor<<endl;
	cout<<"El menor es el "<<menor<<endl;
	cout<<"El promedio es "<<m<<endl;
}
