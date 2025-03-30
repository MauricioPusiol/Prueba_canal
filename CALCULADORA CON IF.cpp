#include <iostream>
#include<math.h>
using namespace std;


int main(){
	
	int numMenu;
	float numero1, numero2,numSalir;
	float resultado;
	
	cout<< "***** MENU *****"<<endl;
	
	cout<<"Opcion 1: Multiplicar"<<endl;
	
	cout<<"Opcion 2: Sumar"<<endl;
	
	cout<<"Opcion 3: Restar"<<endl;
	
	cout<<"Opcion 4: Dividir"<<endl;
	
	cout<<"Opcion 5: Salir"<<endl;
			
	while(numMenu != 5){
		cout<< "Seleccione la operacion: ";
		cin>>numMenu;
	
	if(numMenu!= 5){
	
		cout<< "ingrese el primer numero a calcular: ";
		cin>> numero1;
	
		cout<< "ingrese el segundo numero a calcular: ";
		cin>> numero2;
	
	
 	if(numMenu == 1){
	 	resultado =	numero1 * numero2;
		cout<< "La multiplicacion es: " << resultado<<endl;
	}
	if (numMenu == 2){	
		resultado =	numero1 + numero2;
		cout<< "La suma es: " << resultado<<endl;
	}
	if (numMenu == 3){	
		resultado =	numero1 - numero2;
		cout<< "La resta es: " << resultado<<endl;
	}
	if (numMenu == 4){	
		resultado =	numero1 / numero2;
		cout<< "La division es: " << resultado<<endl;
	
			}
		}	
	}
	
		cout<<endl<<"*****Saliendo de Calculadora******";

	return 0;
}