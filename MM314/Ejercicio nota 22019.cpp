//Ejercicio 1 Examen primera unidad
/*Realice un programa en C++ que, con base en una calificación 
proporcionada (0-10), indique con letra la calificación que 
le corresponde: 10 es ?A?, 9 es ?B?, 8 es ?C?, 7 y 6 son ?D?,y de 5 a 0 son ?F?. 

 Si el enunciado sugiere que utilizamos la estructura 
switch significa que no se utilizaran valores decimales

*/

#include <iostream>
using namespace std;
int main ()
{
	int nota;
	
	cout<<"Calificaciones"<<endl;
	cout<<"Ingrese su calificacion (0-10)"<<endl;	
	cin>>nota;
	//switch para determinar la nota en letra
	switch(nota)
	{
		case 0:
				cout<<"Usted tiene F"<<endl;
				break;
		case 1:
				cout<<"Usted tiene F"<<endl;
				break;
		case 2:
				cout<<"Usted tiene F"<<endl;
				break;
		case 3:
				cout<<"Usted tiene F"<<endl;
				break;	
		case 4:
				cout<<"Usted tiene F"<<endl;
				break;							
		case 5:
				cout<<"Usted tiene F"<<endl;
				break;
		case 6:
				cout<<"Usted tiene D"<<endl;
				break;
		case 7:
				cout<<"Usted tiene D"<<endl;
				break;	
		case 8:
				cout<<"Usted tiene C"<<endl;
				break;
		case 9:
				cout<<"Usted tiene B"<<endl;
				break;
		case 10:
				cout<<"Muy bien!"<<endl;
				cout<<"Usted tiene A"<<endl;
				break;							
		default:
				cout<<"Ingrese una nota valida"<<endl;		
				break;
		
	}
		
}

