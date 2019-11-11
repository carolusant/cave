								// Ejercicio #11 - Guia I Unidad MM-314 
/*  Elabore un programa en el cual se recibe la masa y la aceleración y calcula la fuerza. */
										// Carlos'Gonzalez

#include <iostream>
#include<cstdlib>
using namespace std;
//variables
float	mass, //masa 
		ace, //aceleracion
		fu; //fuerza 
int main (){
	cout<<"\tCalcular la fuerza no equilibrada"<<endl;
	cout <<"Introduce la masa en kilogramos (kg)"<<endl;
	cin >>mass;
	cout << "Introduce la aceleracion en metros por segundo-al cuadrado"<<endl;
	cin>>ace;
	/*  La segunda ley de Newton relaciona la aceleración (a) que adquiere un cuerpo de masa (m) al aplicarle una fuerza (F), matemáticamente se expresa: f=ma	*/
	fu=mass*ace;
	cout<< "\n\nLa fuerza resultante es de " <<fu<< " newtons (n)\n\n"<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}	
