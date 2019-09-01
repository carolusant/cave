/*------------------------------ Ejercicio 5.14 ---------------------------------------
 El valor de e a la x se puede aproximar por la suma de la serie ^&&*&&^
-------------------------------Carlos'Gz--------------------------------------------*/
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float	j=1, //iteredor factorial
	 		i, // iteredor para suma parcial = 15
			fac=1, // factorial
			x, // valor de prueba para x 
			se=1, // suma 
			pot=1; // potencia de x a la i 
	cout<<"Calcular 'e elevado a la x'"<<endl;
	cout<<"Utilizando serie con 15 sumas parciales"<<endl; 
	// para obtener una mejor aprox. se pide un numero "k" para reemplazar por 15 dentro del for() 
	cout<<"A que numero desea elevar e ?"<<endl;
	cin>>x;
	cout<<"======================================================="<<endl;
	for(i=1; i<=15; i++)
	{
		pot= pot*x;	
		while (j<=i)
		{
			fac=fac*j;
			j++;
		}
		//cout<<"potencia de "<<x<<" elevado a "<<i<<"="<<pot<<endl;
		//cout<<"factorial de"<<i<<"="<<fac<<endl;
		se+=pot/fac;
		cout<<i<<" suma parcial = "<<se<<endl;
		
	}
		cout<<endl;
		cout<<"======================================================="<<endl;
		cout<<"Resultado utilizando la serie"<<endl;
		cout<<"e^"<<x<<"= "<<se<<endl;
		cout<<"======================================================="<<endl;
		cout<<"Resultado utilizando la funcion exp() de C++ "<<endl;
		cout<<"e^"<<x<<"= "<<exp(x)<<endl;
		cout<<"======================================================="<<endl;
}
