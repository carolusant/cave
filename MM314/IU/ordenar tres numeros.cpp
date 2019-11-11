// Ejercicio #2 - Guia I Unidad MM-314 
/* Programa que pide tres numeros, los ordena de mayor a menor y me dice
 si hay numeros iguales; si los hay que los imprima en el misma linea */
// Carlos'Gonzalez


#include <iostream>
#include<cstdlib>
using namespace std;
int main () 
{

	///declara variables 
	double 	pnum, //primer numero 
			snum, //segundo numero
			tnum; //tercer numero
	
	//Pide los numeros
	cout<< "Dame el primer numero: "<<endl;
	cin>>pnum;
	cout<< "Dame el segundo numero: "<<endl;
	cin>>snum;
	cout<< "Dame el tercer numero: "<<endl;
	cin>>tnum;
	if (pnum==snum && pnum==tnum)
	{
		cout << "Los tres numeros son iguales"<<endl;	
		cout <<pnum<< " " <<snum<<  " " <<tnum<<endl;		
	}
	else
	{
		
		if (pnum>snum && pnum>tnum)
	 	{
	 		if (snum>tnum)
			{
			 	cout << "Los tres numeros son distintos"<<endl;
				cout <<pnum<< "\n" <<snum<< "\n" <<tnum<<endl;
			     
			}
			else
			{
				if (snum==tnum)
				{
					cout << "\nEl segundo y el tercero son iguales"<<endl;
	 				cout <<pnum<< "\n" <<snum<< " " <<tnum<<endl;
				}
				    			
			}
			
	 		
		}
		else
		{
				if (snum>tnum) 
				{
					if (pnum==tnum)
					{
						cout << "El primero y el tercero son iguales"<<endl;
						cout <<snum << "\n" <<pnum<< " " <<tnum<<endl;
					 
					}
					else 
					{	if (pnum>tnum)
						{
							cout << "Los tres numeros son distintos"<<endl;
							cout <<snum << "\n" <<pnum<< "\n" <<tnum<<endl;
						
						}
						else 
						{	cout << "Los tres numeros son distintos"<<endl;
							cout <<snum << "\n" <<tnum<< "\n" <<pnum<<endl;
						}
					}
					
				}
				else //tercero es mayor 
				{
						if (pnum==snum)
						{
							cout << "El primero y el tercero son iguales"<<endl;
							cout <<tnum << "\n" <<snum<< " " <<pnum<<endl;
						
					
							} 
							else
							{
								cout << "Los tres numeros son distintos"<<endl;
								cout <<tnum << "\n" <<snum<< "\n" <<pnum<<endl;
							}
				}				
		}						
		
	}


}
