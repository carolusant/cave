// aumentar limite de credito dependiendo del tipo de tarjeta que el cliente posea 
// Carlos'Gz
#include <iostream>
using namespace std;
int tt; //tipo de tarjeta
double la, //limite de credito actual
       ac, // aumento de credito
       nc; // nuevo limite de credito
int main () 
{
	cout << "\tBienvenido al banco Pueblo Desconocido"<<endl;
	
	cout<< "\n\tTu limite de credito sera aumentado" <<endl;
	
	cout << "\nPor favor ingrese el limite de credito actual de su tarjeta"<<endl;
	cin>> la;
	/// Invente nombres para los tipos de tarjetas para que se vea mejor
	/*  ..."y para cualquier otro tipo, de 50%." , por un momento pense que queria decir que al ingresar cualquier otro numero
			se iria al caso default y calcularia el 50% para el limite ingresado pero es simimilar al que explico en clase, asi 
			que cree Tipo 4 para referir a "cualquier otro tipo de tarjeta" y que al ingresar un numero fuera de la lista que diga error...  
		*/
	cout<< "\nSeleccione su tipo de tarjeta\n 1.Basic (Tipo 1) \n 2.Platinum (Tipo 2) \n 3.Gold (Tipo 3) \n 4.Black,Blue,Diamond,Gansta (Cualquier otro tipo)" <<endl;
	cin >> tt;		
	switch (tt) 
	{
		case 1: 
				ac= la *0.25 ;
				nc= ac+ la;
				cout << "Su limite ha sido aumentado en un 25%"<<endl;
				cout << "El nuevo limite de credito es de: $"<<nc<<endl;
				break; 
		
		case 2: 
				ac= la *0.35 ;
				nc= ac+ la;
				cout << "Su limite ha sido aumentado en un 35%"<<endl;
				cout << "El nuevo limite de credito es de: $"<<nc<<endl;
				break;
		
		case 3: 
				ac= la *0.40 ;
				nc= ac+ la;
				cout << "Su limite ha sido aumentado en un 40%"<<endl;
				cout << "El nuevo limite de credito es de: $"<<nc<<endl;
				break;
		case 4: 
				ac= la *0.50 ;
				nc= ac+ la;
				cout << "Su limite ha sido aumentado en un 50%"<<endl;
				cout << "El nuevo limite de credito es de: $"<<nc<<endl;
				break;

		default:
		 		cout << "\tTipo de tarjeta invalido"<<endl;
		  		cout << "Su limite de credito no ha sido aumentado: $"<<la<<endl;	
		  		cout << "\tPor favor, intentelo de nuevo."<<endl;	
		}				
	}
