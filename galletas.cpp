/*La cafetería de UNIMNUTO ofrece la promoción de llevarse 3 paquetes de galletas por el precio de las 2 más  baratas. 
Haga un programa que le pida al usuario los 3 precios de las galletas y determine el valor a pagar.  
(Debe utilizar una estructura de control if-else). */

#include <iostream>
using namespace std;

int paquete1, paquete2, paquete3, valorAPagar;

main (){
	cout << "Ingrese el valor del primer paquete de galletas: ";
	cin >> paquete1;
	
	cout << "Ingrese el valor del segundo paquete de galletas: ";
	cin >> paquete2;
	
	cout << "Ingrese el valor del tercer paquete de galletas: ";
	cin >> paquete3;
	
	if ((paquete1 < paquete2) && (paquete2 < paquete3))
	{
		valorAPagar = paquete1 + paquete2;
	}
	else if ((paquete2 < paquete3) && (paquete3 < paquete1))
	{
		valorAPagar = paquete2 + paquete3;
	}
	else if ((paquete1 < paquete3) && (paquete3 < paquete2))
	{
		valorAPagar = paquete1 + paquete3;
	}
	cout << "El valor a pagar es: " << valorAPagar;
}
