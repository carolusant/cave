/*
------------------------------ Ejercicio 5)---------------------------------------
 Diseñe e implemente un algoritmo que imprima todas las posibles descomposiciones 
de un número natural como suma de números menores que él (sumas con 2, 3 o 4 sumandos).
a
(a-1)+1


n=15
14+1
13+1+1
12+1+1+1
13+2
11+2+2
9+2+2+2
12+3
9+3+3
6+3+3+3
11+4
7+4+4
3+4+4+4
10+5
5+5+5
9+6
3+6+6
8+7
1+7+7
7+8
6+9
5+10
4+11
3+12
2+13
1+14
-------------------------------Carlos'Gz-------------------------------------------
*/
#include <iostream>
using namespace std;
int main ()
{
	int n ;
	cout<<"Descomponer un numero"<<endl;
	do
	{
		cout<<"Ingrese un numero entero positivo"<<endl;
		cin>>n;
	}while(n<0);
	
	int a=1,ori=n;;
	while (n>1)
	{
		n--;
		
		int temp=n;
		for( int i=1; i<4; i++)
		{
			cout<<temp<< " + ";
			for (int j=1; j<=i;j++)
			{
			
					cout<<a<< " + ";
			
			}
			
			temp-=a;
				cout<<endl;
		}
		cout<<endl;
		a++;
	}
}



