#include <iostream>
using namespace std;
int main ()
{
	int num,t, to=0;
	cout<<"Empeza a sumar desde"<<endl;
	cin>>num;
	cout<<"Hasta el"<<endl;
	cin>>t;
	while (num<=t)
	{
		to+=num;
		num+=1;
	}
	cout<<to;
}



/*
#include <iostream>
using namespace std;
int main ()
{
	
	for (int c=9999; c>=0 ;c--)
	{
		cout<<c<< " ";
	}
	
}
*/

