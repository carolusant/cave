/**********************************************************************************************************************
*	Lista simplemente enlazada 
*   
*
*
*->Carolusant
***********************************************************************************************************************/



#include<iostream>
using namespace std;

//Clase Nodo
class Nodo {
public:
    Nodo *siguiente; // puntero del nodo o al nodo siguiente?? 
    int datos; // datos del nodo;
	int masdatos; // pueden ir mas?? -- se tendrian que anadir mas parametros en la funcion agregarNodo o hacer funciones extras para ello 
	float otrodato; /// ??? 
    Nodo (){ // constructor de Nodos 
        siguiente = NULL; 
        datos=0;
		masdatos=0;
		otrodato=0.0;
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
		//nuevoNodo = new Nodo;	// crear el nuevo nodo
		nuevoNodo->datos= xdato;	// copiar el valor de xdato al area de datos del nodo recien creado 
		if(primero==NULL){			
			primero=nuevoNodo;		// si la lista esta vacia, ingresar nuevo nodo al principio
		}
		else {
			ultimo->siguiente= nuevoNodo; // si no agregar nuevoNodo al puntero del ultimo 
		}

		ultimo= nuevoNodo;  // el ultimo siempre sera el nuevoNodo recien agregado , no importa cual sea ???

	}


//funcion para mostrar nodos existentes
	void mostrasDatos(){
		Nodo *temp =new Nodo; // crear un nodo temporal para navegar por la lista 
		temp= primero; // ese nodo temporal sera inicialmente la cabeza de la lista
		if (temp==NULL){ 
			cout<<"La lista esta vacia"<<endl; // si el primer Nodo apunta a NULL, es porque no hay nada en la lista
		}
		else{
			int contador= 1;
			while(temp){ // mientras el nodo temp sea distinto de cero/NULL
				//cout<<temp->datos<<endl; // muestra datos
				// para ver las direcciones y los datos 
				cout<<"|| Datos del Nodo #"<<contador<<" : " <<temp->datos<< " |-> Direccion del Nodo: " <<temp << " |-> Direccion del enlace: "<<temp->siguiente<<" ||"<<endl;
				temp= temp->siguiente; // cambia temp al siguiente nodo y sigue el ciclo hasta lleguar a la cola
				contador++;
			}
		}

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
	linkedlist->agregarNodo(5);
	linkedlist->agregarNodo(7);
	linkedlist->agregarNodo(9);
	linkedlist->mostrasDatos();
	delete linkedlist;


    //cout<<"Hey ... it works"<<endl;
    system("pause");
    return 0;
}
