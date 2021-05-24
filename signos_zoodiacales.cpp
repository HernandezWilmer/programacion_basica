/*El estudiante debe desarrollar un programa que que calcule y muestre el signo zodiacal de una persona 
a partir de su fecha de su nacimiento.

El orden l�gico sugerido es:

1. P�dale al usuario que digite el d�a (n�mero entero) de nacimiento.
2. P�dale al usuario que digite el mes (n�mero entero) de nacimiento.
3. Utilice if anidados para calcular el signo zodiacal del usuario. Puede usar m�s estructuras de control 
si es necesario.
4. Muestre un mensaje parecido a este: Carolina naci� el 3 de enero, por lo tanto, su signo zodiacal es 
capricornio.
Informaci�n adicional: https://www.astrology-zodiac-signs.com/es/*/

#include <iostream>
using namespace std;

int diaNacimiento, mesNacimiento;

main (){
	//1. P�dale al usuario que digite el d�a (n�mero entero) de nacimiento.
	cout << "Digite el dia de su nacimiento (numero entero): ";
	cin >> diaNacimiento;
	
	//2. P�dale al usuario que digite el mes (n�mero entero) de nacimiento.
	cout << "Digite el mes de su nacimiento (numero entero): ";
	cin >> mesNacimiento;
	
	//3. Utilice if anidados para calcular el signo zodiacal del usuario.
	//Puede usar m�s estructuras de control si es necesario.
	
	// Capricornio ---> Diciembre 22 � Enero 19
	if (mesNacimiento == 1 ||  mesNacimiento == 12)//Enero y diciembre
	{
		if( (diaNacimiento >= 22 && mesNacimiento == 12) || (diaNacimiento <= 19 && mesNacimiento == 1))
		{
			cout << "Su signo es Capricornio";
		}
	}
	
}