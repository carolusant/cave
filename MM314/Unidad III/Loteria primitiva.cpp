/*
------------------------------ Ejercicio 2---------------------------------------
Ahora vamos a jugar a la “Lotería primitiva”. Para ello, se pedirá al usuario que 
introduzca 6 números enteros comprendidos entre el 1 y el 49 ambos incluidos. No 
estará permitido repetir número. Una vez elegidos los seis números el programa nos 
mostrará nuestros 6 números así como la combinación ganadora (ordenada de menor a mayor).
 Esta combinación constará de 6 números entre 1 y 49 elegidos al azar por el programa. 
 Finalmente nos dirá cuántos aciertos hemos tenido y nos preguntará si queremos volver a jugar.

-------------------------------Carlos'Gz-------------------------------------------
*/
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
int pega(); //prototipo de funcion para encontrar los numeros acertados 
int main ()
{

do{
		
	int loto[6]={0},n=0;
	cout<<"Bienvenidos a la loto"<<endl;
	cout<<"Elija 6 numeros entre el 1 y el 49"<<endl;

	for (int i=0; i<6; i++)
	{
		n=0;
		cout<<"Ingrese el numero "<<i+1<< " ";
		cin>>n;
	
		//determinar elementos repetidos del array	
		bool repetido= false;
		for (int j=0; j<6; j++)
		{
		
			if(n==loto[j])
			{
				cout<<"No puede ingresar numeros repetidos"<<endl;
				cout<<"Intentelo de nuevo"<<endl;
				repetido =true;
				i--;		
			}
		}
		
		if(repetido==false)
		{
			loto[i]=n;
		}			
	}
	
	
	// mostrar numeros elegidos
	cout<<"\nLos numeros que usted eligio son: "; 
	
	for (int i=0; i<6; i++)
	{
		cout<<loto[i]<<"	";	
	}
	
	////generar combinacion ganadora
	int combi[6]={0},m=0;
	srand(time(0));
	
	for (int i=0; i<6;i++)
	{
		combi[i]=1+rand()%49;	
	}
	//// ordenar combinacion
	for (int j=0;j<6;j++)
	{
		for (int k=0;k<5;k++)
		{
			if (combi[k]>combi[k+1])
			{
				m=combi[k];
				combi[k]=combi[k+1];
				combi[k+1]=m;
			}
		}
	}
	//// mostrar combinacion
	cout<<"\n\nLa combinacion ganadora es \t"; 
	for (int a=0; a<6;a++)
	{		
		cout <<combi[a]<<"	";		
	}

	//averiguar cuantos numeros acerto
	int pegados=0;

	for (int i=0; i<6;i++)
	{		
		for (int a=0;a<6;a++)
		{
			if (loto[i]==combi[a])
			{
				pegados++;
			}
		}
			
	}
	
	///pregunta para continuar ciclo
	char seguir;
	cout<<"\n\nUsted acerto "<<pegados<< " numeros. "<<endl; 
	cout<<"Quieres probar otra vez ? (S/N) "<<endl; 
	cin>>seguir;
	if (seguir=='n' || seguir=='N')
	{
		cout<<"Adios...";
		break;
		
	}
		
				
}while(true);
	
}

