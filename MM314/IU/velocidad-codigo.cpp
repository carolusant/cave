// Ejercicio #9 - Guia I Unidad MM-314 
/*9.	Elabore un programa en el cual dada la distancia total y el tiempo total Calcule la velocidad media. */
// Carlos'Gonzalez
#include <iostream>
#include<cstdlib>
using namespace std;
//variables
float dt, //distancia total
	tt, // tiempo total
	vm; // velocidad media
int main ()
{
	cout << "\tCalcular la velocidad media" <<endl;
	cout << "Introduce la distancia total recorrida en metros(m)"<<endl;
	cin >>dt;
		
	cout << "Introduce el tiempo empleado en segundos(s)"<<endl;
	cin >>tt;
	
	vm=(dt/tt);
	
	cout<< "\n\nLa velocidad media es de " <<vm<< " metros por segundo(m/s)."<<endl;
	
	cout <<"\n\nPULSE ENTER PARA FINALIZAR\n\n ..."<<endl;
		
	system("PAUSE");
	return EXIT_SUCCESS;
}
