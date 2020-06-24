#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std; 

//declaro vectores
int A[6], P[6]={0}, IM[6]={0};

//proto de funcion
bool esPar(int numero);



int main (){
	srand(time(0));

//llenar vector A
	cout<<"Vector A con numeros aleatorios" <<endl;
	for (int i=0; i<6; i++){
		A[i]= rand()%99 + 1; 
		cout<<"  " <<A[i];  
	}
	cout<<"\n";


//llenar vector P
	cout<<"Vector P con numeros pares" <<endl;
	for (int i=0; i<6; i++){
		//buscar numeros pares
		if (esPar(A[i])){
			P[i]= A[i];
			cout<<"  " <<P[i]; 
		}
	}
	cout<<"\n";


//llenar vector IM
	cout<<"Vector IM con numeros impares" <<endl;
	for (int i=0; i<6; i++){
		//comprobar numero impares
		if (!esPar(A[i])){
			IM[i]= A[i];
			cout<<"  " <<IM[i]; 
		}
	}
	cout<<"\n";

	
}


bool esPar(int numero){
	if (numero%2==0){
		return true;
	}else 
		return false;
		
}