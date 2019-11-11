// Ejercicio #1 - Guia I Unidad MM-314 
// Programa que pide tres numeros y los ordena de mayor a menor
// Carlos'Gonzalez
#include <iostream>
#include<cstdlib>
using namespace std;
int main () 
{
	//declara variables 
	float pnum, snum, tnum;
	
	//Pide los numeros
	cout<< "Dame el primer numero: "<<endl;
	cin>>pnum;
	cout<< "Dame el segundo numero: "<<endl;
	cin>>snum;
	cout<< "Dame el tercer numero: "<<endl;
	cin>>tnum;

	//comparo los tres numeros con la condicion if anidada
	if (pnum>snum)
	{
		if (pnum>tnum)
		{
		
				if (tnum>snum)
				{
				cout << "El numero mayor es el " <<pnum<< " el siguiente es el " <<tnum<< " y el menor es el  " <<snum<<endl; 	
				}
				else
				cout << "El numero mayor es el " <<pnum<< " el siguiente es el " <<snum<< " y el menor es el  " <<tnum<<endl; 	
		

		}
		else
		cout << "El numero mayor es el " <<tnum<< " el siguiente es el " <<pnum<< " y el menor es el " <<snum<<endl;
	
	}
	else //el otro bloque 
	
	if (snum>tnum)
	{
			if (tnum>pnum)
			{	
			cout << "El numero mayor es el " <<snum<< " el siguiente es el " <<tnum<< " y el menor es el " <<pnum<<endl;
			}
			else 
			cout << "El numero mayor es el " <<snum<< " el siguiente es el " <<pnum<< " y el menor es el " <<tnum<<endl;

	}
	else 
	cout << "\nEl numero mayor es el " <<tnum<< " el siguiente es el " <<snum<< " y el menor es el " <<pnum<<endl;

	
/*La sentencia system("PAUSE") obliga a que se visualice el resultado de la ejecución hasta que se pulse una tecla. 
La sentencia return EXIT_SUCCESS , retorna el control al sistema operativo, una vez terminada la ejecución.
*/
system("PAUSE");
return EXIT_SUCCESS;
}
	
	

