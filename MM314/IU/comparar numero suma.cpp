// Ejercicio #6 - Guia I Unidad MM-314 
/*//Pide tres numeros y determina si el tercero es igual a la suma de los primeros dos. */
// Carlos'Gonzalez
#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	/// declaro y pido tres numeros
	
	int pri, seg , ter ;
	
	cout << "Ingrese tres numeros "<<endl;
	cout<< "Primer numero: "<<endl;
	cin>>pri;
	cout<< "Segundo numero: "<<endl;
	cin>>seg;
	cout<< "Tercer numero: "<<endl;
	cin>>ter;
 
	
	/*If...else para comparar 
	 si tercer numero igual a la suma de primer y segundo numero.
	*/
	
	if (ter==(pri+seg))
	{
		cout  <<pri<<" + "<<seg<< " = " <<ter<<endl; 
		
	}else
	 cout  <<pri<<" + "<<seg<< " distinto de " <<ter<<endl; 
	
	
system("PAUSE");
return EXIT_SUCCESS;	
}
