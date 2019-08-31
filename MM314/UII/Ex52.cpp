/*
------------------------------ Ejercicio 5.2 ---------------------------------------
Escribir un programa que visualice la siguiente salida:
1
1 2
1 2 3
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
	int i=1,j,c=6,k;
	
	while (i<=5)
	{
		j=1;
		while(j<=i)
		{
			cout<<" "<<j;
			j++;
		}
		cout<<endl;
		i++;
	}
	
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
