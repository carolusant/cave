﻿//Ejercicio 2 Examen primera unidad
/* Realice un programa que permita determinar la cantidad
del bono navideño que recibirá un empleado de una tienda,
considerando que si su antigüedad es mayor a cuatro años o su sueldo
es menor de dos mil pesos, le corresponderá 25 % de su sueldo, y
en caso contrario sólo le corresponderá 20 % de éste.
*/

#include <iostream>
using namespace std;
int main ()
{
	double	an, //antiguedad
			su, //sueldo
			bo; //bono
	cout<<"Determinar su bono navideno"<<endl;
	cout<<"Cual su tiempo trabajando en la empresa? (anios)"<<endl;
	cin >>an;
	cout<<"De cuanto es sueldo?"<<endl;
	cin >>su;
	
	// an mayor a 4 anios
	if (an>4)
	{
		bo=su*0.25;
	}
	else 
	{
		if (su<2000)
		{
			bo=su*0.25;
		}
		else
		{
			bo=su*0.20;	
		}
		
	}
	
	cout<<"Su bono navideno es de $"<<bo<<endl;
				
	
}

 
