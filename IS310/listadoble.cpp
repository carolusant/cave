//Implementacion de lista doblemente enlazada 

#include<iostream>
using namespace std;

//Clase Nodo
class Nodo {
public:
    Nodo *siguiente; // puntero del nodo o al nodo siguiente?? 
    Nodo *anterior; // puntero al nodo anterior
    int datos; // datos del nodo;

    Nodo (){ // constructor de Nodos 
        siguiente = NULL; 
        anterior = NULL;
        datos=0;
    }
};


//Clase controladora
class Lista{
public:
	Nodo *primero , *ultimo; // Crear punteros para seguir el primer y el ultimo nodo  

	Lista (){ // Inicializar punteros a NULL para evitar que apunten a direcciones aleatorias (basura)
		primero = NULL;
		ultimo= NULL; 
	}

	//funcion para agregar nuevo nodo
	void agregarNodo(int xdato){
		Nodo *nuevoNodo = new Nodo;	// crear puntero para el nuevo nodo
		nuevoNodo->datos= xdato;	// copiar el valor de xdato al area de datos del nodo recien creado 
		
		if(primero==NULL){			
			primero=nuevoNodo;		// si la lista esta vacia, ingresar nuevo nodo al principio
		}
		else {
			ultimo->siguiente= nuevoNodo; // el ultimo deja de apuntar a NULL
			nuevoNodo->anterior= ultimo; // 
		}

		ultimo= nuevoNodo;  // el ultimo siempre sera el nuevoNodo recien agregado , no importa cual sea ???
		
		cout<<"Nodo agregado con exito"<<endl;
		system("PAUSE");
	}


//agruegar funcion para mostrar nodos existentes
	void mostrasDatos(){
		Nodo *temp =new Nodo; // crear un nodo temporal para navegar por la lista 
		temp= primero; // ese nodo temporal sera inicialmente la cabeza de la lista
		if (temp==NULL){ 
			cout<<"La lista esta vacia"<<endl; // si el primer Nodo apunta a NULL, es porque no hay nada en la lista
		}
		else{
			int contador= 1;
			cout<<"Contenido actual de la lista"<<endl;
			 
			while(temp){ // mientras el nodo temp sea distinto de cero/NULL
				cout<<"Datos del Nodo #"<<contador<<" : " <<temp->datos<<endl; // muestra datos
				// para ver las direcciones y los datos 
				//cout<<"|| Datos del Nodo #"<<contador<<" : " <<temp->datos<< " |-> Direccion del Nodo: " <<temp << " |-> Direccion del enlace: "<<temp->siguiente<<" ||"<<endl;
				temp= temp->siguiente; // cambia temp al siguiente nodo y sigue el ciclo hasta lleguar a la cola
				contador++;
			}
		}
		
		system("pause");

	}
	
	
	
	//funcion obtener nodo
	
	//const  Nodo *NOEXISTE= NULL; 
	Nodo * obtenerNodo( int datodeNodo) {
		Nodo *temp = new Nodo;
		temp= primero;
		if ( primero==NULL) {
		  cout<<"Lista esta vacia"<<endl;
		//return NOEXISTE; 
		}
		else {
					
		while(temp) {
			if (temp->datos== datodeNodo) {
				return temp;
					}
				temp = temp->siguiente;
					
				}
					return temp;
				}
				
				
		}
		
       


         //funcion buscar
		
		void encontrarNodo(int valor) {
			Nodo *tempNodo = new Nodo;
			if ( obtenerNodo(valor)==NULL){
				cout<<"Nodo no existe o lista vacia"<<endl;
			}
			else{
				tempNodo= obtenerNodo(valor); 
				cout<<"Nodo encontrado"<<endl;
				cout<<"Direccion : "<<tempNodo<<endl;
				cout<<"Dato : " <<tempNodo->datos<<endl;
			
			}		
			
			system("pause");
			
		}
		
		
		//Corregir bug, al haber mas 3 o menos 
		void borrarNodo(int valor){
			Nodo *nodoAnterior = new Nodo;
			Nodo *nodoBuscado = new Nodo;
			Nodo *nodoSiguiente = new Nodo;

			if ( obtenerNodo(valor)==NULL){ // antes de empezar, verificar si el nodo existe 
				cout<<"Nodo no existe"<<endl;
				return;
			}
			
			nodoAnterior= primero; 
			nodoBuscado= primero->siguiente;
			nodoSiguiente= primero->siguiente->siguiente;
			
				
			while(nodoBuscado->datos != valor){
				nodoAnterior=nodoAnterior->siguiente;
				nodoBuscado= nodoBuscado->siguiente;
				nodoSiguiente= nodoSiguiente->siguiente;
			}


			nodoAnterior->siguiente= nodoSiguiente;
			nodoSiguiente->anterior= nodoAnterior; 
			
			
			
			delete nodoBuscado; 
				
			cout<<"Nodo eliminado existosamente"<<endl;
			system("pause");
		}


		
		
		

	void borrarCabeza(){
			Nodo *tempNodo = new Nodo;
			tempNodo=primero;

			if ( primero==NULL){ // confirmar que tenga algo antes de meter la pata 
				cout<<"Lista esta vacia"<<endl;
				system("Pause");
				return;
			}
			
				primero= primero->siguiente;

				delete tempNodo;

				if ( primero!=NULL){ // verificar si aun queda algo en lista
					primero->anterior=NULL;
				}
				cout<<"El primer nodo ha sido eliminado con exito"<<endl;
			
			system("pause");
		}


		void borrarCola(){
			Nodo *ultimoNodo = new Nodo;
			ultimoNodo=ultimo;

			if ( primero==NULL){ // confirmar que tenga algo antes de meter la pata 
				cout<<"Lista esta vacia"<<endl;
				system("Pause");
				return; //salir 
				}
			
			ultimo = ultimo->anterior;
			ultimo->siguiente= NULL;
			delete ultimoNodo; // ya es seguro borrar el nodo 
			cout<<"El ultimo nodo ha sido eliminado con exito"<<endl;
	
			system("pause");	
		}


	~Lista (){
		Nodo *primerNodo, *tempNodo;
		primerNodo= primero;
		while(primerNodo) {  // mientras primerNodo == 1 o cualquier otro numero distinto de cero
			tempNodo= primerNodo; // guardar primerNodo en temp
			primerNodo= primerNodo->siguiente; // primerNodo se convierte en el nodo siguiente a borrar (cambia hasta que llegue a 0 o sea a la cola)
			delete tempNodo; // se borra el nodo
		
		}

	}
};

int main (){
	Lista *linkedlist = new Lista;

	/*
	linkedlist->agregarNodo(5);
	linkedlist->agregarNodo(7);
	linkedlist->agregarNodo(9);
	linkedlist->agregarNodo(96);
	linkedlist->agregarNodo(98);
	linkedlist->agregarNodo(90998);
	linkedlist->mostrasDatos();
	cout<<"-----------------------------------------"<<endl;
	linkedlist->encontrarNodo(9);
	linkedlist->borrarCabeza();
	linkedlist->mostrasDatos();
	cout<<"-----------------------------------------"<<endl;
	 linkedlist->borrarCola();
	 linkedlist->mostrasDatos();
	 */
	 
	 
	 
	 int op, addNode=0, findNode=0, deleteNode=0;

	do {

		system("cls"); 
		cout<<"-----------------------------------------"<<endl;
		cout<<"0 - Agregar nodo"<<endl;
		cout<<"1 - Mostrar lista"<<endl;
		cout<<"2 - Mostrar lista al reves "<<endl;
		cout<<"3 - Buscar nodo"<<endl;
		cout<<"4 - Eliminar primer nodo"<<endl;
		cout<<"5 - Eliminar ultimo nodo"<<endl;
		cout<<"6 - Eliminar cualquier otro nodo"<<endl;
		cout<<"7 - Salir"<<endl;
		cout<<"-----------------------------------------"<<endl;

		cout<<"Seleccione la accion que desea realizar:"<<endl;
		cin>>op;

		switch(op){
		case 0:
			cout<<"Ingrese el valor que desea agregar"<<endl;
			cin>>addNode;
			linkedlist->agregarNodo(addNode);
			break;
		
		case 1:
			system("cls"); 
			//cout<<"Lista actual"<<endl;
			linkedlist->mostrasDatos(); 
			break;
		
		case 2:
			system("cls"); 
			cout<<"Hacer metodo para mostrar al reves"<<endl;
		
			break;

		case 3:
			cout<<"Ingrese el dato del nodo que desea encontrar"<<endl;
			cin>>findNode;
			linkedlist->encontrarNodo(findNode);
			break;

		case 4:
			linkedlist->borrarCabeza();
			break;

		case 5:
			linkedlist->borrarCola(); 
			break;

		case 6:
			cout<<"Ingrese el dato del nodo que desea eliminar"<<endl;
			cin>>deleteNode;
			linkedlist->borrarNodo(deleteNode);
			break;
		
		case 7:	
			break;

		default:
			cout<<"Opcion invalida, intente de nuevo"<<endl;
			system("pause");
			break;
		}

	}while(op!=7);
	 
	 
	 
	delete linkedlist;


    //cout<<"Hey ... it works"<<endl;
    system("pause");
    return 0;
}
