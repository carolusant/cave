/*
------------------------------ Ejercicio 6.6---------------------------------------
 Dado el valor de un ángulo, escribir una función que muestra el valor de todas las funciones trigonométricas corr espon-
dientes al mismo
-------------------------------Carlos'Gz-------------------------------------------
*/
#include <iostream>
#include <cmath>
using namespace std;
void trigo (float);
int main ()
{
	float ang;
	cout<<"Calcular las funciones trigonometricas de x angulo"<<endl;
	cout<<"Dame el angulo"<<endl;
	cin>>ang;
	trigo(ang);
}

void trigo (float x)
{
	float pi=3.14159265359,radia;
	radia=x*pi/180;
	
	cout<<"Seno de "<<x<< " grados ==" <<sin(radia)<<endl;
	cout<<"Coseno de "<<x<< " grados ==" <<cos(radia)<<endl;
	cout<<"Tangente de "<<x<< " grados ==" <<sin(radia)/cos(radia)<<endl;
	cout<<"Cotagente de "<<x<< " grados ==" <<cos(radia)/sin(radia)<<endl;
	cout<<"Secante de "<<x<< " grados ==" <<1/cos(radia)<<endl;
	cout<<"Cosecante de "<<x<< " grados ==" <<1/sin(radia)<<endl;
}
