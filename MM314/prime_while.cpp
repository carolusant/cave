#include <iostream>
using namespace std;
int main ()
{
	int x, i=0, n=2;
	cout<<"Ingrese un numero" <<endl;
	cin>>x;
	while (n<x)
	{
		if (x%n==0)
		{
			i++;
		}
		n++;		
	}
	if (i==0)
	{
		cout<<"Primo"<<endl;
	}
	else
	{
		cout<<"Compuesto"<<endl;
	}
}
