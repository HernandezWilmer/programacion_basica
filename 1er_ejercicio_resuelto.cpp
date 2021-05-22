/*2. Use la sentencia while para pedirle al usuario el valor de 3 productos vendidos. 
El algoritmo debe sumar el valor de los 3 productos. Sobre el anterior valor, el 
algoritmo debe calcular y mostrar: el precio sin IVA, IVA cantidad y el precio con IVA. 
Para ello se debe asumir que el IVA es del 19%. Se recomienda 
revisar este sitio web: https://www.cuentaconmigo.co/calcular-iva-calculadora
*/

#include <iostream>
using namespace std;

int main(){
	float i, producto, sumaDe3Productos, precioConIVA, cantidadDeIVA, IVA;
	i = 1;
	sumaDe3Productos = 0;
	IVA = 0.19;
	
	//		4 <= 3	
	while (i <= 3)
	{
		cout << "Ingrese el valor de el producto vendido $";
		cin >> producto; //2000
		
		//sumaDe3Productos = 8000 			+ 	2000
		sumaDe3Productos = sumaDe3Productos + producto;//Acá sumo los valores de los productos
		//sumaDe3Productos = 10000
		
		//i = 3 + 1;
		i = i + 1;
		//i = 4
	}
	//														    10000
	cout << "\nEl precio sin IVA de los 3 productos es $" << sumaDe3Productos;
	
	//cantidadDeIVA = 10000			 * 0.19
	cantidadDeIVA = sumaDe3Productos * IVA;
	//cantidadDeIVA = 1900
																				//1900
	cout << "\nLa cantidad de IVA que debo pagar para los 3 productos es $" << cantidadDeIVA;
	
	//precioConIVA = 10000			+ 1900
	precioConIVA = sumaDe3Productos + cantidadDeIVA;
	//precioConIVA = 11900
																	//	11900
	cout << "\nEl valor de los 3 productos incluyendo el IVA es $" << precioConIVA;
	
	return 0;
}
