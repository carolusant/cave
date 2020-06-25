#include <iostream>
#include <string>
using namespace std;

class TDatos {
public:

};

class TChar : public TDatos {
	public:
		char dato;
};

// Clase derivada de la clase TDatos.
class TEntero : public TDatos {
public:
	int dato;
};

// Clase Nodo
class TNodo{
private:
	// Seccion de enlace
	TNodo *enlaceSiguiente;

public:
	// Seccion de datos
	//int datos;
	TDatos *datos;
	
	TNodo(){ // Constructor
		// Siempre inicializarlo a NULL
		datos = NULL;
		enlaceSiguiente = NULL;

	}
};

// Clase controlador
class TCola {
private:
	TNodo *primero; // Primer nodo de la lista.
	TNodo *ultimo;  // Ultimo nodo de la lista.
public:
	// Punteros a 2 nodos importantes
	
	TCola(){ // Constructor
		primero = NULL; // Siempre inicializarlos a NULL
		ultimo = NULL;
	}

	// Funcion que permite agregar nodos a la lista enlazada.
	void insertar(TDatos *datos){
		TNodo *pNodo;
		pNodo = new TNodo;
		pNodo->datos = datos;
		if (primero == NULL){
		    primero = pNodo;
			ultimo=pNodo;
		}
		else {
		pNodo->enlaceSiguiente= primero; 
			primero= pNodo; 
		}
	}

	TNodo* quitar(){
		TNodo *pNodo, *ultimoNodo;
		ultimoNodo = ultimo;
		if (primero == ultimo){ // Solo hay un solo nodo en la pila.
			primero = NULL;
			ultimo = NULL;
		} else {
			pNodo = primero;
			while (pNodo!=NULL){
				if (pNodo->enlaceSiguiente == ultimo){
					pNodo->enlaceSiguiente = NULL;
					ultimo = pNodo;
					break;
				}
				pNodo = pNodo->enlaceSiguiente;
			}
		}
		return ultimoNodo;
	}


	void mostrarNodos(){
		TNodo *pNodo;
		TEntero *dato;
		
		while (!estaVacia()){
			pNodo = quitar();
			dato = static_cast<TEntero*>(pNodo->datos);
			cout <<" " <<dato->dato;
		}
	}

	bool estaVacia(){
		return primero == NULL;
	}

	TNodo* cima(){
		return ultimo;
	}

	~TCola(){ // Destructor
		TNodo *pNodo, *pBorrar;
		pNodo = primero;
		while (pNodo!=NULL){
			pBorrar = pNodo;
			pNodo = pNodo->enlaceSiguiente;
			delete pBorrar;
		}
	}
};


TEntero* crearEntero(int dato){
	TEntero* entero= new TEntero;
	entero->dato=dato;
	return entero;
}

int main (){
	TCola cola;
	cola.insertar(crearEntero(3));
	cola.insertar(crearEntero(9));
	cola.insertar(crearEntero(4));
	cola.insertar(crearEntero(7));
	cola.insertar(crearEntero(10));
	cola.mostrarNodos();
	cout<<endl;
	system("pause");
	return 0;
}
	
	