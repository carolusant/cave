#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;


void imprimirPrimos ( int[4][4] );
bool esPrimo(int n);

int main (){
	srand(time(0));
	int j ,k, matriz[4][4];

	//generar matriz aleatoria
	for (int i=0; i<4; i++){
		cout<<"\n";
		for (int j=0; j<4; j++){
			matriz[i][j]= rand()%97 + 2; //numero random entre el dos y el 99 
			cout<<"\t" <<matriz[i][j]; 
		}
	
	}

	imprimirPrimos(matriz); 

	system("pause");
}



//funcion para encontrar primos e imprimirlos 
void imprimirPrimos ( int matriz[4][4] ){

	cout<<endl;
	cout<<"Los numeros primos en la matriz son: ";
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			//verificar si matriz[i][j] es primo
			if (esPrimo(matriz[i][j])){
			cout<<"  " <<matriz[i][j]; 
			}
			
		}
	
	}


}



bool esPrimo(int n){
	int d=0;
	for (int i=1; i <=n ; i++){
		if (n%i==0){ 
			d++;
		}
	}

	if (d == 2){
		return true;
	}else { 
		return false;
	}

}
