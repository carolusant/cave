/*
------------------------------ Ejercico 5.1 ---------------------------------------
Programa que calcule e imprima 1+2+3+4...+(n-1)+n, donde n>0


-------------------------------Carlos'Gz-------------------------------------------
*/
#include <iostream>
using namespace std;
int main ()
{
	int	n, //numero tope
		i=1, //iterador inicializa en 1, tambien pudo ser 0; ya que sumar 0 no cambia nada
		t=0; //total suma 
	cout<<"Sumatoria desde 1 a n"<<endl;
	cout<<"Hasta que numero desea sumar?"<<endl;
	cin>>n;
	while (i<n)
	{
		t+=i;
		cout<<i<<"+";
		i++;
	}
		cout<<n<<"="<<t+n;
	
}
