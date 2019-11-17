#include<iostream>
#include<string>
//#include<cstdlib>
using namespace std;


/*

----------------------------TAREA 04 -----------------------------------------

----------------------------Carlos Gz-----------------------------------------
----------------------------Nov 11 -----------------------------------------
*/
class CuentaBancaria{
private:
	double saldoInicial;
public:
	//Atributos
	int numeroCuenta;
	std::string propietario;
	
	double debitos;
	double creditos;
	double saldoTotal;

	//Constructor para inicializar atributos automatic. al crear cada objeto 
	CuentaBancaria(){
		initAtributos();

	}

	//Funciones
	void initAtributos (){
		saldoInicial =0;
		debitos=0;
		creditos=0;
		saldoTotal=0;
	}


	void modificarSaldo(double monto){
		if (monto <0){

			cout<<"No se aceptan valores negativos"<<endl;
		}
		else 
			saldoInicial=monto;
	}

	//Funcion para pedir datos al usuario
	void pedirDatos(){
	cout<<"Numero de cuenta:  ";
	cin>> numeroCuenta;
	cout<<"Nombre del propietario:  ";
	cin.ignore(100 ,'\n'); // ignorar los 100 bytes guardados anteriormente y todos los saltos de line
	getline(cin, propietario); // getline vs inline??
	cout<<"Saldo inicial:  ";
	cin>> saldoInicial;
	}


	
	//Funcion depositar
	void depositar(){
		double deposito=0; 
		const int MAX_DEPOSITO = 200000;
		cout<<"--------------------Depositar dinero----------------------"<<endl
			<<"Cuentahabiente:  "<<propietario<<endl
			<<endl
			<<"Monto a depositar: " ;
		cin >> deposito;
		if (deposito> MAX_DEPOSITO){
				cout<<"No se permite depositar mas de "<<MAX_DEPOSITO<< " en ventanilla"<<endl
				<<"Por favor, pase a atencion al cliente para realizar el papeleo necesario"<<endl 
				<< "******ERROR! -03- Monto de deposito excedido" <<endl;
				system("pause");

		}else{
			creditos+=deposito;
			cout<<"----------------------------------------------------"<<endl
				<<"Deposito realizado correctamente"<<endl
				<<"Se han acreditado "<<deposito<< " lps  a su cuenta"<<endl
				<<"----------------------------------------------------"<<endl;
			system("pause");
		}

	}

	//Funcion retirar 
	void retirar(){
		double retiro=0; 
		const int LIMITE_RETIRO= 30000;
		cout<<"--------------------Retirar dinero----------------------"<<endl
			<<"Cuentahabiente:::: "<<propietario<<endl
			<<"Saldo disponible:: "<<calcularSaldo()<<endl
			<<endl
			<<"Monto a retiro:: " ;
		cin >> retiro;

		if (retiro > LIMITE_RETIRO ){
			cout<<"******ERROR! -04- No se permite retirar mas de "<<LIMITE_RETIRO<< " lps"<<endl;
			system("pause");
		}
		else {
			if (retiro> calcularSaldo()){
			cout<<"******ERROR! -05- Fondos insuficientes"<<endl;
			system("pause");

			}else{
				debitos+=retiro;
			cout<<"----------------------------------------------------"<<endl
				<<"Retiro realizado correctamente"<<endl
				<<"Se han debitado "<<retiro<< " lps  de su cuenta"<<endl
				<<"----------------------------------------------------"<<endl;
				system("pause");
				}

			}
		
	}

	// funcion para mostrar datos
	void mostarCuenta(){
	cout<< "-------------------------Estado de cuenta -----------------------------"<<endl
		<< "Titular de la cuenta:  "<<  propietario <<endl
		<< "N Cuenta:  " << numeroCuenta<<endl
		<< "Saldo inicial:  " << saldoInicial <<endl
		<< "(+)Creditos:  " <<  creditos <<endl 
		<< "(-)Debitos:  " <<  debitos <<endl
		<< "Saldo total= "<<calcularSaldo()<<endl
		<< "----------------------------------------------------------------------------"<<endl;
		system("pause");
	}

	//fucion calcular saldo
	double calcularSaldo () {
		
		return saldoInicial+creditos-debitos;
	}

	
 /// 
	

}; //fin de clase




///clase banco 
const int MAX_CUENTAS = 5;
const int NO_EXISTE_CUENTA= -1;
class Banco{
	public: 
		int contadorCuenta;
		CuentaBancaria cuentas[MAX_CUENTAS];
		
		Banco(){
			contadorCuenta=0;
		}
		
		void abrirCuenta(){
			if(contadorCuenta<MAX_CUENTAS)
			{
				cuentas[contadorCuenta].pedirDatos();
				contadorCuenta++;
				cout<<"La cuenta ha sido registrada existosamente"<<endl;
				system("PAUSE");
			}
			else
			{
				cout<<"****ERROR! -01- Se ha llegado al limite de cuentas"<<endl;
				system("pause");
		
			}


		}

		///funcion buscar cuenta en array antes de depositar

		int buscarCuenta(int numeroCuenta){
			int indice=NO_EXISTE_CUENTA;

			for (int i=0; i<contadorCuenta; i++)
			{
				if (numeroCuenta==cuentas[i].numeroCuenta){
					indice=i;
					break;
				}
			}

			return indice;
		}

		///function registar deposito

		void registrarDeposito(){
			int numCuenta;
			cout<<"Digite su numero de cuenta"<<endl;
			cin>>numCuenta;
			int indice = buscarCuenta(numCuenta);

			if (indice == NO_EXISTE_CUENTA ){
				cout<<"****ERROR! -02-	No existe cuenta la indicada "<<endl;
				system("pause");
			}
			else{
				cuentas[indice].depositar();
				}
		}


		//funcion registrar retiro 
		
		void registrarRetiro(){
			int numCuenta;
			cout<<"Digite su numero de cuenta"<<endl;
			cin>>numCuenta;
			int index = buscarCuenta(numCuenta);

			if (index == NO_EXISTE_CUENTA ){
				cout<<"****ERROR! -02-	No existe cuenta la indicada "<<endl;
				system("PAUSE");
			}
			else{
				cuentas[index].retirar();
				}
		}


		/*void mostrarEstado(){
			int numCuenta;
			cout<<"Digite su numero de cuenta"<<endl;
			cin>>numCuenta;
			int index = buscarCuenta(numCuenta);

			if (index == NO_EXISTE_CUENTA ){
				cout<<"****ERROR! -02-	No existe cuenta la indicada "<<endl;
				system("PAUSE");
			}
			else{
				cuentas[index].mostarCuenta();
				}
		}*/
		


		void mostrarEstado(){
		
			cuentas[pedirCuenta()].mostarCuenta();
				
		}

		int pedirCuenta(){
			int numCuenta;
			cout<<"Digite su numero de cuenta"<<endl;
			cin>>numCuenta;
			int indice = buscarCuenta(numCuenta);
			
			if(verificarCuenta(indice)){
				return indice;
			}
		}

		bool verificarCuenta(int index){
		
			if (index == NO_EXISTE_CUENTA ){
				cout<<"****ERROR! -02-	No existe cuenta la indicada "<<endl;
				system("PAUSE");
			}
			else{
					return true;
				}

		}
		


		

		//**DUPLICIDAD**** 
	

		



		void hacerTransferencia(){
			int numCuenta;
			cout<<"-------------------------Transferir dinero----------------------------------"<<endl
				<<"Ingrese su numero de cuenta"<<endl;
			//verifico si cuenta existe
			cin>>numCuenta;
			int index = buscarCuenta(numCuenta);

			if (index == NO_EXISTE_CUENTA ){
				cout<<"****ERROR! -02-	No existe cuenta la ingresada "<<endl;
				system("PAUSE");
			}
			else{
				cout<<"Bienvenido  "<<cuentas[index].propietario<<endl
					<<"Saldo disponible: "<<cuentas[index].calcularSaldo()<<endl;
				//verifico si cuenta recipient  existe
				
				int recipientNum;
				cout<<"Digite el numero de cuenta a transferir: ";
				cin>>recipientNum;
				int Rindex = buscarCuenta(recipientNum);
				// un do...while para que no me regrese al inicio????
				if (Rindex == NO_EXISTE_CUENTA ){
					cout<<"****ERROR! -06-	No se pudo encontrar la cuenta a transferir "<<endl;
					system("PAUSE");
				}
				else{
					//si ambas existen pido monto 
					// implementar un do while para NO regresar al inicio en caso de exceder el limite
					int monto;
					cout<<"Ingrese el monto a transferir:  ";
					cin>>monto;
					if (monto> cuentas[index].calcularSaldo()){
						cout<<"******ERROR! -05- Fondos insuficientes"<<endl;
						system("pause");
					}else{
						char aceptar;
						cout<<"--------------------------------------------------------------------------"<<endl
							<<"Transferir L. " <<monto<<" a la cuenta No "<<cuentas[Rindex].numeroCuenta
							<<" a nombre de "<<cuentas[Rindex].propietario <<endl
							<<endl
							<<"Desea continuar con la operacion?"<<endl
							<<"Presione 'S' o 's' para continuar o cualquier tecla para cancelar:  ";
							cin>>aceptar;
							if (aceptar=='s'|| aceptar=='S'){
								cuentas[index].debitos+=monto;
								cuentas[Rindex].creditos+=monto;
								cout<<"**********************************************************"<<endl
									<<"TRANSFERENCIA EXITOSA"<<endl
									<<"Usted a transferido L. "<<monto<< " a "<<cuentas[Rindex].propietario<<endl
									<<"**********************************************************"<<endl;
								system("pause");
							}else{
								cout<<"Transferencia cancelada"<<endl;
								system("pause");
							}

				}

				
				//  



				}



				//outside funct
				}

		}

	};		


//main function
int main(){

Banco bac;
int opcion;

//enum function?????
enum OPCIONES {APERTURA=1, DEPOSITO, RETIRO, TRANSFERENCIA, ESTADO_CUENTA, SALIR};


do{
	system("cls"); 
	cout<< "---------------------------Sistema Bancario --------------------------- \n"
		<< "1 - Aperturar cuenta\n"
		<< "2 - Registrar deposito\n"
		<< "3 - Registrar Retiro\n"
		<< "4 - Registrar transferencia\n"
		<< "5 - Mostrar estado de cuenta\n "
		<< "6 - Salir del sistema\n"
		<< "------------------------------------------------------------------------\n"
		<< "Ingrese su opcion: ";
		cin>>opcion;
		
		
		
		switch(opcion){
		case APERTURA:
			bac.abrirCuenta();
			break;
		case DEPOSITO:
			bac.registrarDeposito();
			break;
		case RETIRO:
			bac.registrarRetiro();
			break;
		case TRANSFERENCIA:
			bac.hacerTransferencia();
			break;
		case ESTADO_CUENTA:
			bac.mostrarEstado();
			break;
		case SALIR:
				cout<<"--------------------------\n"<<endl
					<<"Gracias por su preferencia"<<endl
					<<"\n--------Banco ABC---------\n"<<endl;
				//system("pause");
				//return 0;
			break;
		default:

			break;
		}

		}while(opcion!=6);


	system("PAUSE");
	return 0;
}
