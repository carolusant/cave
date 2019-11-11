//Volumen de 
#include <iostream>
using namespace std;
int main ()
{
	int numero, i, factorial;
	do
{
cout << "dame numero entero: ";
cin >> numero;
} while ( numero <= 0);
for( factorial = 1, i = 1; i <= numero; i++) //con bucle for
factorial *= i;
cout << factorial << endl;
factorial = 1; //con bucle while

}
