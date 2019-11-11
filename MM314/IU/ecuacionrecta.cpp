// Ejercicio 
/*// Programa que calcula la ecuacion de la recta dados la pendiente y punto cualquiera en la recta */
// Carlos'Gonzalez
#include <iostream>
using namespace std;
//declarar variables
double 	py, //punto en y
		px, //punto en x
		m, //pendiente 
		iy; // intercepto en y 
int main ()
{
	cout << "\tEncontrar la ecuacion de la recta" <<endl;
	cout << "\t\ty=mx+b" <<endl;
	cout << "Ingrese la pendiente de la recta"<<endl;
	cin>>m;
	cout << "Ingrese un punto X de la recta"<<endl;
	cin>>px;
	cout << "Ingrese un punto Y de la recta"<<endl;
	cin>>py;

	/* de punto-pendiente a pendiente-intercepto
	
	 (y - y0) = m(x - x0) lo que es igual a >>>> (y - py) = m(x - px) 
	 Al despejar se obtine >>>> y= mx -mpx + py 
	 y= mx -mpx + py equivale y= mx +b
	 donde b es el intercepto en la ordenada (iy) 
	 entonces b=iy= -mpx + py 
	*/
	iy = (m*px*-1) + py ;
	
	
	// condicional para escribir el resultando dependiendo del signo de iy 
	if (iy>=0)
	{
		cout << " La ecuacion de la recta es y= " <<m<< "x + "<<iy<<endl; 
	}
	else
	
	cout << " La ecuacion de la recta es y= " <<m<< "x "<<iy<<endl; 
	
}

