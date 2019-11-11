#include <iostream>
#include <cstdlib> 
using namespace std;

//Declaro variable entera
int num;

//comienzafuncionmain
int main () {
	
	//Pide el numero, solo enteros ...
	cout<< 	"Dame un numero y te dire si es positivo o negativo" <<endl;
	cout<< "     Introduce solo enteros  " <<endl; 
	cin>>num;


  	//comparo con if...else
	if(num==0)
	{
	cout << "El cero es neutro, no es positivo tampoco negativo. "<<endl;
	cout << "	  Introduce otro numero por favor"<<endl;
	}
	else
			if(num>0)
			{
			cout << "El numero " <<num<< " es positivo."<<endl;							
			}
			else
				cout << "El numero " <<num<< " es negativo."<<endl;	


/*La sentencia system("PAUSE") obliga a que se visualice el resultado de la ejecución hasta que se pulse una tecla. 
La sentencia return EXIT_SUCCESS , retorna el control al sistema operativo, una vez terminada la ejecución.
*/
system("PAUSE")	;
return EXIT_SUCCESS;
}
