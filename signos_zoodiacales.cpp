/*El estudiante debe desarrollar un programa que que calcule y muestre el signo zodiacal de una persona 
a partir de su fecha de su nacimiento.*/

#include <iostream>
using namespace std;

int diaNacimiento, mesNacimiento;
string signo, nombre, mesTexto;

main (){
	cout << "Digite su nombre: ";
	cin >> nombre;
	
	cout << "Digite el dia de su nacimiento (numero entero): ";
	cin >> diaNacimiento;
	
	cout << "Digite el mes de su nacimiento (numero entero): ";
	cin >> mesNacimiento;
	
	switch(mesNacimiento)
	{
		case 1:
			mesTexto = "enero";
			break;
		case 2:
			mesTexto = "febrero";
			break;
		case 3:
			mesTexto = "marzo";
			break;
	}
	
	// Capricornio ---> Diciembre 22 – Enero 19
	if (mesNacimiento == 12 || mesNacimiento == 1)//Diciembre y enero
	{
		if((diaNacimiento >= 22 && mesNacimiento == 12) || (diaNacimiento <= 19 && mesNacimiento == 1))
		{
			signo = "Capricornio";
		}
	}
	
	//Sagitario ------> Noviembre 22 - Diciembre 21
	if (mesNacimiento == 11 || mesNacimiento == 12)//Noviembre y diciembre
	{
		if((diaNacimiento >= 22 && mesNacimiento == 11) || (diaNacimiento <= 21 && mesNacimiento == 12))
		{
			signo = "Sagitario";
		}
	}
	
	//Escorpio ------> Octubre 23 – Noviembre 21
	if (mesNacimiento == 10 || mesNacimiento == 11)//Octubre y noviembre
	{
		if((diaNacimiento >= 23 && mesNacimiento == 10) || (diaNacimiento <= 21 && mesNacimiento == 11))
		{
			signo = "Escorpio";
		}
	}
	
	//Libra ---> Septiembre 23 – Octubre 22
	if (mesNacimiento == 9 || mesNacimiento == 10)//Septiembre y octubre 
	{
		if((diaNacimiento >= 23 && mesNacimiento == 9) || (diaNacimiento <= 22 && mesNacimiento == 10))
		{
			signo = "Libra";
		}
	}
	
	// Piscis ---> Febrero 19 – Marzo 20
	if (mesNacimiento == 2 || mesNacimiento == 3)//Febrero y marzo
	{
		if((diaNacimiento >= 2 && mesNacimiento == 2) || (diaNacimiento <= 20 && mesNacimiento == 10))
		{
			signo = "Piscis";
		}
	}

	//Carolina nació el 3 de enero, por lo tanto, su signo zodiacal es capricornio.
	cout << nombre << " nacio el " << diaNacimiento << " de " << mesTexto << ", por lo tanto, su signo zoodiacal es " << signo;	
}
