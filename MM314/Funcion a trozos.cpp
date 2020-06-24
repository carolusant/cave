#include <iostream> 
#include <cmath> 
using namespace std; 

double parte1(double numero);
double parte2( double numero);
double parte3( double numero);

int main (){
	double num;
	cout<<"Ingrese un numero X real: " ;
	cin>>num; 

	
	if(num <=-5){
		cout<<"Evaluacion= "<<parte1(num)<<endl;
	}
		
	if(num>-5 && (num<2)){
		cout<<"Evaluacion= "<<parte2(num)<<endl;
	}

	if(num>=2){
		cout<<"Evaluacion= "<<parte3(num)<<endl;
	}

	system("pause");
}

double parte1(double numero){
	double resultado; 
	resultado = 3*numero*numero -2;
	return resultado;
}


double parte2(double numero){
	double resultado; 
	resultado = sqrt(numero + 5);
	return resultado;
}


double parte3(double numero){
	double resultado; 
	resultado = 1/(numero-4);
	return resultado;
}