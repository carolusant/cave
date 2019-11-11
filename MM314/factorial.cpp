#include <iostream>
using namespace std;
int main ()
{
	int n, fac=1;
	
	cout<<"Dame el factorial de "<<endl;
	cin>>n;
	int i=1;
	while (i<=n)
	{
		fac=fac*i;
		cout<<i<<"*";
		i++;
	}
	cout<<"= "<<fac<<endl;
}
