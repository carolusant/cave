/*
------------------------------ Ejercico 5.4 ---------------------------------------
Diseñar e implementar un programa que solicite a su usuario un valor no negativo n 
y visualice la siguiente salida (n = 6):

1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
-------------------------------Carlos'Gz-------------------------------------------
*/
#include <iostream>
using namespace std;
int main ()
{
	int k,c; //numero a ingresar 		
	cout<<"Ingrese un numero entero positivo"<<endl;
	cin>>c;

	while (c>=1)
	{
		k=1;
		while(k<=c)
		{
			cout<<" "<<k;
			k++;
		}
		cout<<endl;
		c--;
	}
}
