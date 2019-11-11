//Calcular una resta sin usar operador
#include <iostream>
using namespace std;
int main ()
{
	int a,b,res=0;
	cout<<"Calculadora de restas"<<endl;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>a;
	cout<<"Ingrese el segundo  numero"<<endl;
	cin>>b;
	
	while(b<a)
	{
		b++;
		res++;
	}
	
	cout<<a<<" menos "<<b<<"== "<<res<<endl;
}
