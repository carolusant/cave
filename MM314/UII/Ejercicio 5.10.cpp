/*------------------------------ Ejercico 5.10 ---------------------------------------
Implementar el algoritmo de Euclides que encuentra el máximo común divisor 
de dos números enteros y positivos.

-------------------------------Carlos'Gz--------------------------------------------*/

#include <iostream>
using namespace std;
int main ()
{
	///Implementacion del algoritmo de Euclides
	int pn, //primer numero
		sn, //segundo numero
		mayor, //numero mayor
		mayorr, // nuevo mayor
		menor, //numero menor
		menorr, // nuevo menor
		rest,// resto
		mcd=0; //maximo comun divisor
		
	cout<<"Encontrar el MCD de dos numeros"<<endl;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>pn;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>sn;
	cout<<endl;
	//cual es mayor?
	if (pn>sn)
	{
		mayor=pn;
		menor=sn;
	}	
	else
	{
		mayor=sn;
		menor=pn;
	}
	
	///
	while(rest!=0)
	{
		if (mayor%menor==0)
		{
			mcd=menor;
			cout<<"----------------------------------------------------"<<endl;
			cout<<"El MCD de "<<pn<<" y "<<sn<<" es igual a "<<mcd<<endl;
			cout<<"----------------------------------------------------"<<endl;
			rest==0; //por que no termina con eso?
			break; // me toco agregar un break??? why???
		}
		else
		{
			mayorr=menor;
			menorr=mayor%menor;
		}
		
		
		if (mayorr%menorr==0)
		{
			mcd=menorr;
			cout<<"---------------------------------------------------"<<endl;
			cout<<"El MCD de "<<pn<<" y "<<sn<<" es igual a "<<mcd<<endl;
			cout<<"----------------------------------------------------"<<endl;
			rest==0; //por que no termina con eso?
			break;	// me toco agregar un break??? why???
		}	
		else
		{
			mayor=menorr;
			menor=mayorr%menorr;
		}
	}
		
}
