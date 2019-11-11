#include <iostream>
using namespace std;
int main ()
{
	int x=2;
	int y,cont;
	
	while (x<=99999)
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
			if (cont!=2)
			{
			cout<<x<<" " ;
			}
	x++;		
	}
}
