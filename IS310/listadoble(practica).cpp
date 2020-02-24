#include<iostream>
using namespace std;

//crear estructura nodo
class Nodo{
public:
	Nodo *siguiente; 
	Nodo *anterior;
	int dato;
	Nodo(){
		siguiente =NULL;
		anterior =NULL;
		dato=0;
	}
};


//Estructura de lista 
class Lista {
public:
	Nodo *primero , *ultimo;

	Lista (){
		primero =NULL;
		ultimo = NULL;
	 }


	void AddNode(int val){
		Nodo *tempNode =new Nodo;
		tempNode->dato= val;

		if(primero==NULL){
			primero=tempNode;
		}
		else {
			ultimo->siguiente= tempNode;
			tempNode->anterior=ultimo;		
		}

		ultimo=tempNode;

		cout<<"Nodo agregado con exito"<<endl;
		system("pause");

	}


	void mostrarNodos(){
		Nodo *tempNodo = new Nodo; 
		tempNodo =primero; 

		if (primero==NULL) {
			cout<<"Lista vacia"<<endl;
		}
		else {
			while(tempNodo){
				cout<<tempNodo->dato<<endl;
				tempNodo=tempNodo->siguiente;
			}
		}

		system("pause");
	}


	Nodo * obtenerNodo(int data){
		Nodo *tempNodo = new Nodo; 
		tempNodo= primero;
		if (primero ==NULL ){
			cout<<"Lista esta vacia"<<endl;
		}
		else {
			while(tempNodo){
				if (tempNodo->dato== data){
					return tempNodo;
				}
				tempNodo=tempNodo->siguiente;
			}
		}

		return tempNodo;
	}


	void BuscarNodo(int dat){
		Nodo *finder = new Nodo;
		if (obtenerNodo(dat)==NULL){
			cout<<"Nodo no existe"<<endl;
		}
		else {
			finder= obtenerNodo(dat);
			cout<<"Nodo encontrado"<<endl;
			cout<<"Valor :: " <<finder->dato<<endl;
		}
		system("pause");
	}

	void borrarCabeza(){
		Nodo *temp= new Nodo;
		if (primero==NULL){
			cout<<"Nada que borrar, lista vacia"<<endl;
			
		}
		else{
			temp=primero; 
			primero= primero->siguiente;
			delete temp; 

			if(primero!=NULL){
				primero->anterior=NULL;
			}

		}

		cout<<"El primer nodo ha sido eliminado con exito"<<endl;
	}


	void deleteNodo(int value){
		Nodo *Nodoanterior = new Nodo;
		Nodo *Nodobuscado = new Nodo;
		Nodo *Nodosiguiente = new Nodo;

		if (obtenerNodo(value) ==NULL){
			cout<<"Nada que borrar, nodo vacio"<<endl;
			return;
		}

		if (obtenerNodo(value)==primero){
			borrarCabeza();
			return;
		}

		if (obtenerNodo(value)==ultimo){
			BorrarCola();
			return;
		}

		Nodoanterior= primero;
		Nodobuscado= primero->siguiente;
		Nodosiguiente= primero->siguiente->siguiente;

		while(Nodobuscado->dato!= value && Nodobuscado->siguiente!=NULL){
			Nodoanterior= Nodoanterior->siguiente;
			Nodobuscado= Nodobuscado->siguiente;
			Nodosiguiente= Nodosiguiente->siguiente;
		}

		Nodoanterior->siguiente=Nodosiguiente;
		Nodosiguiente->anterior= Nodoanterior;

		delete Nodobuscado;
		cout<<"Nodo eliminado existosamente"<<endl;
			system("pause");

	}

	void BorrarCola(){
		Nodo *ultimoNodo = new Nodo;
		ultimoNodo=ultimo;
		if (primero==NULL){
			cout<<"Lista vacia"<<endl;
			return;
		}

		ultimo=ultimo->anterior;
		ultimo->siguiente=NULL;
		delete ultimoNodo;
		cout<<"El ultimo nodo ha sido eliminado con exito"<<endl;
	
			system("pause");	

	}

	~Lista (){
	Nodo *tempNodo, *primerNodo; 
	primerNodo= primero;
		while(primerNodo){
			tempNodo=primerNodo;
			primerNodo=primerNodo->siguiente;
			delete tempNodo;
		}	
	}

};


int main (){
	Lista *doble = new Lista;

	doble->AddNode(56);
	doble->AddNode(86);
	doble->AddNode(90);
	doble->AddNode(57);
	doble->mostrarNodos();
	doble->BuscarNodo(90);
	cout<<"despues de borrar cabeza"<<endl;
	doble->borrarCabeza();
	doble->mostrarNodos();
	cout<<"despues de borrar cola"<<endl;
	doble->BorrarCola();
	doble->mostrarNodos();

	doble->AddNode(60);
	doble->AddNode(978);
	doble->AddNode(99);
	doble->mostrarNodos();

	cout<<"\nProbando a borrar un nodo de enmedio..."<<endl;
	doble->deleteNodo(978);
	doble->mostrarNodos();

	delete doble;
}
