#include <iostream> 
using namespace std; 

// declarar prototipo de funcion 
void esPrimo(int n); 
//variables
int num=0, // numero a ingresar
	 d=0; // divisores

//cuerpo de funcion main 
int main (){
	cout<<"Ingrese un numero"<<endl;
	cin >>num;
	//llamar a la funcion creada abajo 
	esPrimo(num); 

	system("pause");//ignore esto
	return 0; 
}


//cuerpo de funcion para saber si es primo 
void esPrimo(int n){
	
	for (int i=1; i <=n ; i++){
		if (n%i==0){ // si el modulo del numero ingresado entre i (i= 1,2,3...)  es igual a cero , o sea si i es divisor de n
			d++; //aumentar contador de divisores
		}
	}

	// Si el numero tiene 2 divisores (el 1 y el mismo) entonces es primo 
	if (d == 2){
		cout<<"Es un numero primo"<<endl;
	}else { //si no es compuesto 
		cout<<"No es un numero primo"<<endl;
	}

}



