/*1. Use la sentencia do-while para pedirle al usuario 5 números.
El algoritmo debe sumarlos y mostrar el resultado de la suma.*/

#include <iostream>
using namespace std;

float i, numero, resultado;

main(){
	i = 1;
	resultado = 0;
	
	do
	{
		cout << "Ingrese un numero: ";
		cin >> numero;
		resultado = resultado + numero;
		i = i + 1;
	}
	while(i <= 5);
	
	cout << "\nEl resultado de la suma de los numeros es: " << resultado;
}
