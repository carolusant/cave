// Ejercicio 
// Determinar el precio del pasaje por persona si el precio del viaje depende del numero de pasajeros que iran en el bus. 
// Carlos'Gonzalez
#include <iostream>
using namespace std;
//declarar variables, me gusta hacerlo fuera de la funcion main creo que no afecta en nada??
int na=0, //numero de alumnos debe ser entero, no puedo partir una persona 
	cv; // costo del viaje (datos proporcionados)
double b,pa; // precio por alumno 
int main ()
{
	cout << "Determinar el costo del pasaje por alumno"<<endl;
	cout << "-----Cuantos alumnos iran al viaje?-----"<<endl;
	cout<<">";cin >>na;
	
if (na>100){
	cv=20;
} 
	else if (na>=50 && na<=100){
			cv=35;
	}
		else if (na>=20 && na<50){
				cv=40;
		} 
			else if (na<20){
				cv=70;
			}
	// por que al eliminar la siguiente asignacion se quiebra el programa??... tipo de variable incorrecta??
		b=cv;			
	cout<< "El costo del viaje sera de:  $" <<cv<<endl;	
	pa= b/na;
	cout<< "Cada alumno tendra que pagar:  $" <<pa<<endl;	
	
	}	
