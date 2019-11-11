//Calcular potencia
#include <iostream>
using namespace std;
int main ()
{
	int a,n,p=1;
	cout<<"Calcular a la n"<<endl;
	cout<<"Ingrese la base"<<endl;
	cin>>a;	
	cout<<"Ingrese el exponente"<<endl;
	cin>>n;
	
	for (int i=1; i<=n;i++ )
	{
		p=p*a;
		cout<<a<<" a la "<<i<<" == "<<p<<endl;
	}
}
