#include <iostream>
using namespace std;
int main ()
{
	int x=2,k=1;
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
		 	while (k>=15)
			{
				if (cont!=2)
				{
				cout<<x<<" " ;
				}
				k++;	
			}
			
	x++;		
	}
	
}
