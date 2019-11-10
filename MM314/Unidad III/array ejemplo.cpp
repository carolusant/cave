#include <iostream>
using namespace std;
int main ()
{
	int  n=10,a=1, b=3;
	double arreglo[n+1], h;
	h=(b-a)/n;
	int i=0;
	for(double x=a; x<=b; x=x+h)
	{
		arreglo[i]=2*x+3;
		i=i+1;
	}
	cout<<"   "<< arreglo[6];
}
