#include <iostream> 
#include <string> 
using namespace std;

//superclase TDatos
class TDatos {
public:

};

//clase derivada de datos
class TEntero{
public:
	int dato;
};

//clase Nodo
class TNodo {
public:
	//Seccion datos
	TEntero* datos;

	//Seccion de enlaces
	TNodo* enlaceIzquierdo;
	TNodo* enlaceDerecho;

	TNodo (){
		enlaceDerecho=NULL;
		enlaceIzquierdo= NULL;
		datos=NULL;
	}

};


//Clase controlador
class ArbolBinaro{
public:
	TNodo* nodoRaiz;
	int totalNodos;

	ArbolBinaro(){
		nodoRaiz=NULL;
		totalNodos=0;
	}


	void insertarNodoRecursivo(TNodo* nuevoNodo, TNodo* padre){
		if(nuevoNodo->datos->dato < padre->datos->dato ){
			if (padre->enlaceIzquierdo==NULL){ //Cuando no tiene hijos la raiz
				padre->enlaceIzquierdo=nuevoNodo;
			}
			else {//cuando ya tiene hijos
				insertarNodoRecursivo(nuevoNodo, padre->enlaceIzquierdo);
				}
			
		}	else if (nuevoNodo->datos->dato > padre->datos->dato ) {
				if (padre->enlaceDerecho==NULL){ //Cuando no tiene hijos la raiz
				padre->enlaceDerecho=nuevoNodo;
				}
				else {//cuando ya tiene hijos
					insertarNodoRecursivo(nuevoNodo, padre->enlaceDerecho);
					}	

			}
	
	}



	void recorridoPreorden(TNodo* padre){ //NLR
		//Visitar el nodo - N 
		cout<< padre->datos->dato<< ", ";  
		
		//Recocorrer lado izquierdo - L
		if (padre->enlaceIzquierdo!=NULL){
			recorridoPreorden(padre->enlaceIzquierdo);
		}

		//Recocorrer lado Derecho - R
		if (padre->enlaceDerecho!=NULL){
			recorridoPreorden(padre->enlaceDerecho);
		}
	}



	void recorridoPostorden(TNodo* padre){ //LRN 
		
		//Recocorrer lado izquierdo - L
		if (padre->enlaceIzquierdo!=NULL){
			recorridoPostorden(padre->enlaceIzquierdo);
		}

		//Recocorrer lado Derecho - R
		if (padre->enlaceDerecho!=NULL){
			recorridoPostorden(padre->enlaceDerecho);
		}
	
		//Visitar el nodo - N
		cout<< padre->datos->dato<< ", ";  
		
		
	}




	//recorrido inorden LNR
	void recorrerInorden(TNodo* padre){
		//Recocorrer lado izquierdo - L
		if (padre->enlaceIzquierdo!=NULL){
			recorrerInorden(padre->enlaceIzquierdo);
		}

		//Visitar el nodo - N 
		cout<< padre->datos->dato<< ", ";  
		
		//Recocorrer lado Derech - R
		if (padre->enlaceDerecho!=NULL){
			recorrerInorden(padre->enlaceDerecho);
		}
	}





	//recorrido general
	void recorrerArbol(){
		cout<<"Recorrido Inorden LNR"<<endl;
		recorrerInorden(nodoRaiz);
		cout<<endl;

		cout<<"Recorrido Preorden NLR"<<endl;
		recorridoPreorden(nodoRaiz);
		cout<<endl;

		cout<<"Recorrido Postorden LRN"<<endl;
		recorridoPostorden(nodoRaiz);
		cout<<endl;
	}



	void insertar (TEntero* dato){
		TNodo* nuevoNodo = NULL;
		nuevoNodo = new TNodo;
		nuevoNodo->datos= dato;

		if(nodoRaiz==NULL){
			nodoRaiz= nuevoNodo; 
		}
		else {
			insertarNodoRecursivo(nuevoNodo ,nodoRaiz); 	
		}	

	}

};


TEntero* crearEntero (int dato){
	TEntero* entero= new TEntero;
	entero->dato= dato;
	return entero;
}


int main (){
	ArbolBinaro arbol; 
	arbol.insertar(crearEntero(10));
	arbol.insertar(crearEntero(5));
	arbol.insertar(crearEntero(3));
	arbol.insertar(crearEntero(7));
	arbol.insertar(crearEntero(15));
	arbol.insertar(crearEntero(17));
	arbol.insertar(crearEntero(14));
	arbol.recorrerArbol();


	system("pause");
	return 0;
}
