								// Ejercicio #10 - Guia I Unidad MM-314 
/*  Elabore un programa en el cual dada la variación de velocidad y el intervalo tiempo, calcule la aceleración. */
										// Carlos'Gonzalez

#include <iostream>
#include<cstdlib>
using namespace std;
//variables
float	vt, //velocidad total
		t,	//tiempo
		ace; //aceleracion
int main ()	{
	cout<< "\tCalcular la aceleracion." <<endl;
	cout <<"Introduce la velocidad media en metros por segundo (m/s)"<<endl;
	cin >> vt;
	cout <<"Introduce el intervalo de tiempo en segundos (s)"<<endl;
	cin >>t;
	//La aceleración en un intervalo de tiempo t es el cociente vt/t, donde vt es la variación de velocidad en dicho intervalo de tiempo
	ace=(vt/t);
	cout << "La aceleracion es de " <<ace << " metros por segundo al cuadrado (m/s^2)"<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;	
}	
