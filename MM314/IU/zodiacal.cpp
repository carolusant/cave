// Ejercicio #7 - Guia I Unidad MM-314 
/*/	Este programa muestra el signo zodiacal de una persona. 
Para ello el usuario debe introducir únicamente el día y el mes de nacimiento 
Carlos'Gonzalez*/
#include <iostream>
using namespace std;
int main ()
{
	int mes, dia;
	cout<<"Averigue su signo zodiacal"<<endl;
	cout<<"Ingrese su mes de nacimiento"<<endl;
	cin>>mes;
	cout<<"Ingrese su dia de nacimiento"<<endl;
	cin>>dia;
	
	switch (mes)
	{
		case 1: 
				if (dia<21)
				{
					cout<<"Su signo es capricornio"<<endl;
				}
				else 
				{
					cout<<"Su signo es acuario"<<endl;
				}
				break;
		case 2: 
				if (dia<21)
				{
					cout<<"Su signo es acuario"<<endl;
				}
				else 
				{
					cout<<"Su signo es piscis"<<endl;
				}		
				break;
		case 3: 
				if (dia<21)
				{
					cout<<"Su signo es piscis"<<endl;
				}
				else 
				{
					cout<<"Su signo es aries"<<endl;
				}		
				break;	
		case 4: 
				if (dia<21)
				{
					cout<<"Su signo es aries"<<endl;
				}
				else 
				{
					cout<<"Su signo es tauro"<<endl;
				}		
				break;	
		case 5: 
				if (dia<21)
				{
					cout<<"Su signo es tauro"<<endl;
				}
				else 
				{
					cout<<"Su signo es geminis"<<endl;
				}		
				break;		
		case 6: 
				if (dia<21)
				{
					cout<<"Su signo es geminis"<<endl;
				}
				else 
				{
					cout<<"Su signo es cancer"<<endl;
				}		
				break;	
		case 7: 
				if (dia<21)
				{
					cout<<"Su signo es cancer"<<endl;
				}
				else 
				{
					cout<<"Su signo es leo"<<endl;
				}		
				break;	
		case 8: 
				if (dia<21)
				{
					cout<<"Su signo es leo"<<endl;
				}
				else 
				{
					cout<<"Su signo es virgo"<<endl;
				}		
				break;	
		case 9: 
				if (dia<21)
				{
					cout<<"Su signo es virgo"<<endl;
				}
				else 
				{
					cout<<"Su signo es libra"<<endl;
				}		
				break;	
		case 10: 
				if (dia<21)
				{
					cout<<"Su signo es libra"<<endl;
				}
				else 
				{
					cout<<"Su signo es escorpio"<<endl;
				}		
				break;	
		case 11: 
				if (dia<21)
				{
					cout<<"Su signo es escorpio"<<endl;
				}
				else 
				{
					cout<<"Su signo es sagitario"<<endl;
				}		
				break;	
		case 12: 
				if (dia<21)
				{
					cout<<"Su signo es sagitario"<<endl;
				}
				else 
				{
					cout<<"Su signo es capricornio"<<endl;
				}		
				break;	
		default: 
				cout<<"Por favor ingrese un mes valido"<<endl;
				
				break;											
	}
	
}
