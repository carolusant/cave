/*
------------------------------ Ejercicio 1)---------------------------------------
Crea un programa que elija dos números enteros aleatorios A y B pero no los muestre por pantalla aún.
 Si los dos números fueran iguales, deberá repetirse la elección hasta que sean distintos. 
 El programa preguntará por quién apostamos, A o B (gana el número más alto). 
 Una vez el usuario haya introducido su apuesta, el programa mostrará el valor de A y B, 
 dirá si hemos ganado la apuesta (acertado el número más alto) o perdido y nos dirá cuántas partidas 
 hemos ganado y perdido hasta el momento. Tras una jugada, nos preguntará si queremos jugar otra vez.
-------------------------------Carlos'Gz-------------------------------------------
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
	int A,B,mayor,pg=0,pp=0;
	char apu,seguir,band;
	do 
	{
		srand(time(0));
		A=rand();
		B=rand();
		mayor=B;
		band='B';
		if(A>mayor)
		{
			mayor=A;
			band='A';
		}	
		cout<<"Hay dos numeros, A y B, uno es mayor que el otro"<<endl;
		cout<<"Por cual apuestas? ---> A o B? ";
		cin>>apu;	
		if (apu==band)
		{
			pg++;
			cout<<"Felicidades"<<endl;
			cout<<"Usted ha ganado"<<endl;
			cout<<"A == "<<A<< " y B == "<<B<<endl;
			cout<<"Su apuesta fue " <<apu<<endl;
			cout<<"Lleva "<<pg<<" partidas ganadas y "<<pp<< " perdidas"<<endl;
			cout<<"Desea seguir jugando S / N : ";
			cin>>seguir;
			if (seguir=='N')
			{
				cout<<"Gracias por jugar..."<<endl;
				break;
			}		
		}
		else
		{
			pp++;
			cout<<"No ganaste"<<endl;
			cout<<"A == "<<A<< " y B == "<<B<<endl;
			cout<<"Su apuesta fue " <<apu<<endl;
			cout<<"Lleva "<<pg<<" partidas ganadas y "<<pp<< " perdidas"<<endl;
			cout<<"Quieres intentar de nuevo? S / N : ";
			cin>>seguir;
			if (seguir=='N')
			{
				cout<<"Gracias por jugar..."<<endl;
				break;
			}	
		}
		
		}
	while(true);
}
