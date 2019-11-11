// Ejercicio #7 - Guia I Unidad MM-314 
/*/	8.	El programa irá preguntando por la cantidad de billetes y monedas 
de cada valor que tiene el usuario y luego determinará la suma de dinero 
que hay en monedas y luego la suma de dinero que hay en billetes. Luego 
el programa dirá la suma total de dinero que hay. Finalmente usando una 
estructura switch el programa dará al usuario la posibilidad de transformar 
la cantidad en dólares a la cantidad equivalente en quetzales, lempiras, 
soles, pesos mexicanos o euros, según lo decida el usuario. 
Investigue el cambio en internet.
 
Carlos'Gonzalez*/
#include <iostream>
using namespace std;
int main ()
{
	int b1,b2,b5,b10,b20,b50,b100,b500, //biletes de todas las denominaciones
		m1,m2,m5,m10,m20,m50,		// monedas de todas las denominaciones
		tb, // total de billetes
		tm, // total de monedas
		opt; //opcion para menu cambio divisa
	double	td, //total de dinero 
			usd, //dolares
			q, 	//quetzales
			eur, //euros
			sol, //soles 
			mx;  //pesos mexicanos
	cout<<"Cuantos billetes de 1 lempira tienes?"<<endl;
	cin>>b1;
	cout<<"Cuantos billetes de 2 lempiras tienes?"<<endl;
	cin>>b2;
	cout<<"Cuantos billetes de 5 lempiras tienes?"<<endl;
	cin>>b5;
	cout<<"Cuantos billetes de 10 lempiras tienes?"<<endl;
	cin>>b10;
	cout<<"Cuantos billetes de 20 lempiras tienes?"<<endl;
	cin>>b20;
	cout<<"Cuantos billetes de 50 lempiras tienes?"<<endl;
	cin>>b50;
	cout<<"Cuantos billetes de 100 lempiras tienes?"<<endl;
	cin>>b100;
	cout<<"Cuantos billetes de 500 lempiras tienes?"<<endl;
	cin>>b500;
	cout<<"Cuantas monedas de 1 centavo tienes?"<<endl;
	cin>>m1;
	cout<<"Cuantas monedas de 2 centavos tienes?"<<endl;
	cin>>m2;
	cout<<"Cuantas monedas de 5 centavos tienes?"<<endl;
	cin>>m5;
	cout<<"Cuantas monedas de 10 centavos tienes?"<<endl;
	cin>>m10;
	cout<<"Cuantas monedas de 20 centavos tienes?"<<endl;
	cin>>m20;
	cout<<"Cuantas monedas de 50 centavos tienes?"<<endl;
	cin>>m50;	 	
	//total de dinero en billetes
	tb=b1+b2*2+b5*5+b10*10+b20*20+b50*50+b100*100+b500*500;
	//total de dinero en monedas
	tm=m1+m2*2+m5*5+m10*10+m20*20+m50*50;
	//total de dinero en ambas
	td= tb+(tm*0.01);
	
	//hacer cambio de moneda
	
	cout<<"\n\nUsted tiene "<<td<< " lempiras" <<endl;
	cout<<"Desea saber a cuanto equivalen en otra moneda?"<<endl;
	cout<<"Seleccione una opcion\n 1. Dolares (USD)\n 2. Quetzales\n 3. Euros\n 4. Soles\n 5. Pesos mexicanos\n 6. Salir\n  "<<endl;
	cin>>opt;
	
	//switch cambio de divisa
	switch (opt)
	{
		case 1:
				usd=td*0.041;
				cout <<td<<" lempiras equivalen a "<<usd<<" Dolares (USD)"<<endl;
				break;
		case 2: 
				q=td*0.31;
				cout <<td<<" lempiras equivalen a "<<q<<" Quetzales"<<endl;
				break;	
		case 3: 
				eur=td*0.037;
				cout <<td<<" lempiras equivalen a "<<eur<<" Euros"<<endl;
				break;
		case 4: 
				sol=td*0.13;
				cout <<td<<" lempiras equivalen a "<<sol<<" Soles"<<endl;
				break;	
		case 5:
				mx=td*0.78;
				cout <<td<<" lempiras equivalen a "<<mx<<" pesos mexicanos"<<endl;
				break;
		case 6:
				break;
		default:
				cout<<"Seleccione una opcion valida"<<endl;
				break;											
	}
	
}
