#include <iostream>
#include <string>

using namespace std;

// Definir una jerarquia de clases
// Clase base.
class TDatos {
public:

};

class TEntero :public TDatos {
public:
	int dato;
};

// Clase Nodo
class TNodo{
public:
	// Seccion de datos
	//int datos;
	TDatos *datos;
	// Seccion de enlace
	TNodo *enlaceSiguiente;
	TNodo(){ // Constructor
		// Siempre inicializarlo a NULL
		datos = NULL;   
		enlaceSiguiente = NULL;  

	}
};

// Clase controlador
class TPila {
public:
	// Punteros a 2 nodos importantes
	TNodo *primero; // Primer nodo de la lista.
	TNodo *ultimo;  // Ultimo nodo de la lista.
	TPila(){ // Constructor
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
		}
		else {
			ultimo->enlaceSiguiente = pNodo;
		}
		ultimo = pNodo;
	}

	TNodo* quitar() { //para obtener dato del primero en la pila
		TNodo *pNodo, *ultimoNodo;
		
		ultimoNodo = ultimo;

		if(primero==ultimo){
			primero==NULL;
			ultimo==NULL;
		}else{
			pNodo = primero;
			while (pNodo!=NULL){
				if (pNodo->enlaceSiguiente == ultimo){
					pNodo->enlaceSiguiente==NULL;
					ultimo= pNodo;
					break;
				}
			 
				pNodo = pNodo->enlaceSiguiente;
			}

		}

			return ultimoNodo;
	}

	void mostrarNodos(){
		
		if (pilaVacia()){
			cout<<"Pila esta vacia, nada que mostar..."<<endl;
		}else{
			
			TNodo *pNodo;
			TEntero *enteroo;
			pNodo = primero;
			cout<<"******************[ Pila actual   ]**********************"<<endl;
			while (pNodo!=NULL){
				enteroo = static_cast<TEntero *> (pNodo->datos);
				cout<<enteroo->dato<<endl;
				pNodo = pNodo->enlaceSiguiente;
			}
			cout<<"*******************************************************"<<endl;
		}

	}
 

	bool pilaVacia (){ //para comprobar si pila esta vacia
		if(primero==NULL){
			return true;
		}else 
			return false;
	}

	void limpiarPila(){  //Funcion para limpiar pila 
		TNodo *pNodo, *tempNodo;
		pNodo= primero;
		while (pNodo!=NULL){
			tempNodo = pNodo;
			pNodo = pNodo->enlaceSiguiente;
			delete tempNodo;
		}
		primero=NULL;
		ultimo=NULL;
		cout<<"Pila vaciada con exito"<<endl;
		system("pause");
	}

	//funcion cimadePila (cima se refiere al ultimo elemento de la pila??? o sea el ultimo dato agregado??)
	TNodo* cimadePila(){
		if(pilaVacia()){
			cout<<"Error, pila vacia..."<<endl;
		}else {
			return primero;
		}
	}
 



	~TPila(){ // Destructor
		TNodo *pNodo, *pBorrar;
		pNodo = primero;
		while (pNodo!=NULL){
			pBorrar = pNodo;
			pNodo = pNodo->enlaceSiguiente;
			delete pBorrar;
		}
	}
};

int main(){
	// Crear el objeto del controlador 
	 TPila *pila;
	 TNodo *nodo;
	 TEntero *entero;
	 pila = new TPila;

	 entero = new TEntero;
	 entero->dato= 89;
	 pila->insertar(entero);

	 entero = new TEntero;
	 entero->dato= 79;
	 pila->insertar(entero);

	 entero = new TEntero;
	 entero->dato= 69;
	 pila->insertar(entero);
	  
	 entero = new TEntero;
	 entero->dato= 59;
	 pila->insertar(entero);
	 pila->mostrarNodos();

	 nodo = pila->quitar();
	 entero= static_cast <TEntero *> (nodo->datos);
	 cout<<"Primer dato de pila :"<<entero->dato<<endl; 
 
	 cout<<"\n---> Vaciando pila...  ";
	 pila->limpiarPila(); //prueba de funcion limpiarPila

	  pila->mostrarNodos(); // aqui se pone a prueba la funcion listaVacia(); 


//Volver a llenar pila 
	  
	cout<<"\n---> Creando nueva pila..  "<<endl;
	 entero = new TEntero;
	 entero->dato= 88;
	 pila->insertar(entero);

	 entero = new TEntero;
	 entero->dato= 78;
	 pila->insertar(entero);

	 entero = new TEntero;
	 entero->dato= 68;
	 pila->insertar(entero);
	  
	 entero = new TEntero;
	 entero->dato= 58;
	 pila->insertar(entero);
	 pila->mostrarNodos();
	 
	 //probar funcion cimadePila
	 nodo = pila->cimadePila();
	 entero= static_cast <TEntero *> (nodo->datos);
	 cout<<"Dato cima de la pila :"<<entero->dato<<endl; 


	system("PAUSE");
	delete pila, entero, nodo;
	return 0;
}
