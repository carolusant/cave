//Ingresar 5 numeros y calcular su producto
#include <iostream>
using namespace std;
int main ()
{
	int n, p=1;
	cout<<"Calcular el producto entre 5 numeros"<<endl;
	cout<<"Ingrese 5 numeros"<<endl;
	for (int i=1; i<=5;i++)
	{
		cout<<"Ingrese un numero"; cin>>n;
		p*=n;
	}
	cout<<"\n "<<p<<endl;
}
