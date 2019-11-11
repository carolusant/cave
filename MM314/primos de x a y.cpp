#include <iostream>
using namespace std;
int main ()
{
	int x,k;
	int y,cont;
	cout<<"Start from: ";
	cin>>x;
	cout<<"to: ";
	cin>>k;
	
	
	while (x<=k)
	{
		y=1, cont=0;
		
		while (y<=x)
		{
			if (x%y==0)
			{
				cont++;
			}
			y++;
		}
			if (cont==2)
			{
			cout<<x<<" " ;
			}
	x++;		
	}
}
