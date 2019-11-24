
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
void  pega(); 
void pedirDatos();
void gen_and_sort_randomcombi();
void initArrays();
const int size=6;
int* loto;
int *combi;

int main ()
{

do{
	pedirDatos();
	gen_and_sort_randomcombi();
	pega();

	char seguir;
	cout<<"\n\nUsted acerto "<<"pega()"<< " numeros. "<<endl; 
	cout<<"Quieres probar otra vez ? (S/N) "<<endl; 
	cin>>seguir;
	if (seguir=='n' || seguir=='N')
	{
		cout<<"Adios...";
		break;	
	}				
}while(true);
	
}

void pedirDatos(){
	int n=0;
	cout<<"Bienvenidos a la loto primitiva 0.0"<<endl;
	cout<<"Elija 6 numeros entre el 1 y el 49"<<endl;
	loto= new int[size];
		//initialize array to zero
	/*for (int i=0; i<size; i++){
		loto[i]=0;
	}

	 apparently isn't needed, but why?  
	*/
	for (int i=0; i<size; i++)
	{
		cout<<"Ingrese el numero "<<i+1<< " ";
		cin>>n;;
		//determinar elementos repetidos del array	
		bool repetido= false;
		for (int j=0; j<size; j++){
			if(*(loto+j)==n){
				cout<<"No puede ingresar numeros repetidos"<<endl;
				cout<<"Intentelo de nuevo"<<endl;
				repetido =true;
				i--;		
			}
		}

		if(repetido==false){
				*(loto+i)=n;
			}	
	}
	cout<<"\nLos numeros que usted eligio son: "; 
	for (int i=0; i<size; i++)
	{
		cout<<*(loto+i)<<"  ";	
	}
}


void gen_and_sort_randomcombi(){
	int m=0;
	srand(time(0));
	combi = new int[size];

	for (int i=0; i<size;i++)
	{
		*(combi+i)=1+rand()%49;	
	}
	//// ordenar combinacion
	for (int j=0;j<size;j++)
	{
		for (int k=0;k<5;k++)
		{
			if (*(combi+k)>*(combi+k+1))
			{
				m=*(combi+k);
				*(combi+k)=*(combi+k+1);
				*(combi+k+1)=m;
			}
		}
	}
	//// mostrar combinacion
	cout<<"\n\nLa combinacion ganadora es \t"; 
	for (int a=0; a<size;a++)
	{		
		cout <<*(combi+a)<<"  ";		
	}
}


void pega(){
	//averiguar cuantos numeros acerto
	int pegados=0;

	for (int i=0; i<size;i++)
	{		
		if(*(loto+i)==*(combi+i)){
			pegados++;
		}		
	}

	if (pegados>0){
		cout<<"\n\nFelicidades, usted ha acertado "<<pegados<< " numeros"<<endl; 
	}
	else{
		cout<<"\n\n :( No le pego a ningun numero... Suerte a la proxima "<<endl;
	}
}


