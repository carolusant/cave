/*------------------------------ Ejercico 5.9 ---------------------------------------
Escribir y ejecutar un programa que invierta los dígitos de un 
entero positivo dado leído del teclado.

-------------------------------Carlos'Gz--------------------------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	int	n, //numero ingresado
		no, //numero original
		inv=0, // inverso 
		res=0; //res
	cout<<"Imprimir un numero al reves"<<endl;
	cout<<"Dame un numero"<<endl;
	cin>>n;
	cout<<endl;
	no=n; //guardar numero orignal para imprimirlo al final
	while (n>0)
	{
		res=n%10;
		//cout<<"-----------------------------\n"<<endl;
		//cout<<n<<"mod"<<"10= "<<res<<endl;
		//cout<<"Inverso es igual a "<<inv<<"*10+"<<res<<"= ";
		inv=inv*10 + res;
		//cout<<inv<<endl;
		n=n/10;
		//cout<<" Ahora n vale= "<<n<<endl;
		//cout<<"-----------------------------\n"<<endl;
	}	
	cout<<"El inverso de "<<no<<" es "<<inv<<endl;
}

