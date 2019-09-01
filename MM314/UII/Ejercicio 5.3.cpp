/*
------------------------------ Ejercico 5.3 ---------------------------------------
Diseñar e implementar un programa que lea un total de 10 números y cuente el número de sus entradas que son positivos,
negativos y cero.
-------------------------------Carlos'Gz-------------------------------------------
*/
#include <iostream>
using namespace std;
int main ()
{
	int i, //iterador
		p=0, // contador de positivos
		n=0, //contador de  negativos
		z=0, //contador de de ceros
		num; // numero
	cout<<"Introduzca 10 numeros"<<endl;
	for (i=1; i<=10; i++)
	{
		cout<<"Dame un numero"<<endl;
		cin>>num;
 		if (num==0)	//ir contando zeros
		{
			z++;
		}
		else
		{
			if (num>0)  //sino contar postivos
			{
			p++;
			}
			else //sino negativos
			{
			n++;  
			}	
			
		 } 
	
		 
	}	
		
cout<<"Usted introdujo "<<p<<" numeros positivos,"<<n<<" numeros negativos y " <<z<<" ceros."<<endl;
	
}
	
