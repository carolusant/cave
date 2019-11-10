/*
------------------------------------ Ejercicio 6.8.--------------------------------------------------
 Escribir una función para calcular las coordenadas x e y de la trayectoria de un proyectil 
 de acuerdo a los parámetros ángulo de inclinación alfa y velocidad inicial v a intervalos de 0.1 s
 
 Las fórmulas que dan las coordenadas x e y del proyectil son:
x = v * cos(alfa) * t
y = v * seno(alfa) – a * t 2 /2
a = 40m/s 2
--------------------------------------Carlos'Gz-------------------------------------------------------
*/
#include <iostream>
#include <cmath>
using namespace std;
void proyectil (float , float );
int main ()
{
	float ang, v;
	cout<<"Dame el valor del angulo (>0)"<<endl;
	cin>>ang;
	cout<<"Dame la velocidad (>0)"<<endl;
	cin>>v;
	
	proyectil(ang, v);
}

void proyectil (float an , float vx )
{
		float pi=3.14159265359, x,t=0.1, y=1,rad;
		rad=an*pi/180;
	while (y>0)
		{
			x=vx*cos(rad)*t;
			y=vx*sin(rad)*t-40*t*t/2;
			if (y>0)
			cout<<x<< " \t" <<y<<endl;
			t+=0.1;
		}
}
