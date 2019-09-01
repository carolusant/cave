/*------------------------------ Ejercicio 5.12 ---------------------------------------
Encontrar un número natural n más pequeño tal que la suma de los n primeros términos 
de la serie sumatoria de i*i–i–2 cuando i va desde 1 a n ,exceda de una cantidad 
introducida por el teclado máximo.
-------------------------------Carlos'Gz--------------------------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	double	s=0, //sumatoria
	 		tope; //maximo introducido
	int 	i=0,x;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"Dada la serie:"<<endl;
	cout<<"Sumatoria de i*i-i-2 cuando i va desde 1 a n"<<endl;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"Encontrar los primeros 'n' terminos de la serie"<<endl;
	cout<<"cuando la sumatoria exceda un numero tope"<<endl;
	cout<<">>>>>>>Ingrese el tope: "; cin>>tope;
	cout<<endl;	

	while(s<=tope)
	{
		i++;
		s+=(i*i)-i-2;
	}
	x=i;
	cout<<endl;
	cout<<"La sumatoria de la serie excede "<<tope<<" en sus "<<x<<" primeros terminos"<<endl;
	cout<<"Sumatoria cuando n vale "<<x<<" es igual a "<<s;
}
