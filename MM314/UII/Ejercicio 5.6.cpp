/*------------------------------ Ejercico 5.6 ---------------------------------------
Diseñar un algoritmo que sume los m = 30 primeros números pares.
-------------------------------Carlos'Gz--------------------------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	int i=1, //iterador
		n, 	/// cantidad de numeros pares
		s=0; //suma
	cout<<"Suma de los primeros 'n' numeros pares"<<endl;
	cout<<"Cuantos numeros quieres sumar?"<<endl;
	cin>>n;	
	while (i<=n)
	{
		s+=2*i;
		i++;
	}
	cout<<"La sumatoria de los "<<n<<" primeros numeros pares es igual a: "<<s<<endl;
}
