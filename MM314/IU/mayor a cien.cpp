#include <iostream>
#include <cstdlib>
using namespace std;
//declara variable num
int num;
 
int main ()
{
	cout<< "Dame un numero"<<endl;
	cin>>num;
	
		if (num==100)
		{
			cout<< "Dame un numero distinto de 100"<<endl;
			}
			else
				if (num>100)
				{
					cout<< "El numero "<<num<< " es mayor que 100."<<endl;
					}	
					else
						cout<< "El numero "<<num<< " es menor que 100."<<endl;
	
	
	
	
system("PAUSE");
return EXIT_SUCCESS;	
}
