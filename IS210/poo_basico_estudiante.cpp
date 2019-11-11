#include<iostream>
#include<string>
#include <vector>
using namespace std;


class Estudiante{
	vector <int> notas;

public:
	long long nCuenta;
	string nombre;
	string carrera;
	
	void pedirDatos(){
		cout<<"----------------------Bienvenido---------------------"<<endl
			<<"Digite su numero de cuenta ::: ";
		cin>>nCuenta;
		cout<<"Ingrese su nombre :::::::::::: ";
		cin.ignore(999, '\n');
		getline(cin, nombre);
		cout<<"Carrera que cursa ::::::::::::: ";
		getline(cin, carrera);
	}

	void pedirNotas(){
		int MAX_NOTAS;
		cout<<"Cuantas notas desea ingresar?"<<endl;
		cin>>MAX_NOTAS;

		for(int i=0; i<MAX_NOTAS; i++){
			int temp;
			cout<<"Ingrese Nota #"<<i+1<<" : ";
			cin>>temp;
			notas.push_back(temp);
		}
	}

	void mostrarFicha(){
		cout<<"------------------Bienvenido "<<nombre<< "--------------------"<<endl
			<<"Su numero de cuenta es : "<<nCuenta<<endl
			<<"Su historial de notas es: " <<endl;
		for (int i=0; i < notas.size(); i++ ){
			
			cout<<"Nota #"<<i+1<<":: "<<notas[i]<<endl; 	
		}
	}
	
};

int main()
{
	Estudiante polo;
	polo.pedirDatos();
	polo.pedirNotas();
	polo.mostrarFicha();
	system("pause");

}
