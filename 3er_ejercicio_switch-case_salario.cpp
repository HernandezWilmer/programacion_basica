/*A un empleado que tiene un contrato para trabajar de día le pagan según sus horas trabajadas.

El programa deberá pedirle al usuario la cantidad de horas trabajadas por el empleado durante la semana 
y si la cantidad es menor o igual a 48, entonces el programa calculará y mostrará el valor del salario 
del empleado, pero si la cantidad de horas trabajadas es mayor a 48, entonces el programa deberá mostrar 
por pantalla lo siguiente:

Elija la opción que corresponda según las horas extra trabajadas por el empleado:

Y posteriormente se mostrará el siguiente menú (use switch-casesonrisa:

1. Diurnas
2. Nocturnas
3. Diurnas dominical/festivo
4. Nocturnas dominical/festivo
El usuario elegirá la opción deseada y a partir de ella el programa calculará y mostrará el valor de las 
48 horas y también el valor de las horas extra trabajadas, finalmente mostrará la suma de estos dos valores.*/

#include <iostream>
using namespace std;

float horasTrabajadasSemana, valorHoraDiurna, auxilioDiario, salario;
int opcion;

main()
{
	valorHoraDiurna = 3786;
	auxilioDiario = 3548;
	
	//El programa deberá pedirle al usuario la cantidad de horas trabajadas por el empleado durante la semana 
	cout << "Ingrese la cantidad de horas trabajadas durante la semana: ";
	cin >> horasTrabajadasSemana;
	
	//si la cantidad es menor o igual a 48, entonces el programa calculará y mostrará el valor del salario 
	//del empleado, pero si la cantidad de horas trabajadas es mayor a 48, entonces el programa deberá mostrar 
	//por pantalla un menú:
	
	if (horasTrabajadasSemana <= 48)
	{
		//Esto se ejecuta si la cantidad de horas semanales es menor o igual que 48
		//Acá debo calcular y mostrar el valor del salario
		salario = (horasTrabajadasSemana * valorHoraDiurna) * 4;
		cout << "\nEl salario SIN auxilio de transporte es: " << salario;
	}
	else if (horasTrabajadasSemana > 48) //Esto significa que yo trabajé más de 48 horas semanales, es decir que
	{									//trabajé horas extra
		//Esto se ejecuta si la cantidad de horas semanales es mayor que 48
		//Acá debo mostrar un menú
		/*
		Elija la opción que corresponda según las horas extra trabajadas por el empleado:

		Y posteriormente se mostrará el siguiente menú (use switch-casesonrisa:
		
		1. Diurnas
		2. Nocturnas
		3. Diurnas dominical/festivo
		4. Nocturnas dominical/festivo
		
		El usuario elegirá la opción deseada y a partir de ella el programa calculará y mostrará el valor de las 
		48 horas y también el valor de las horas extra trabajadas, finalmente mostrará la suma de estos dos valores.*/
	
		cout << "Elija la opcion que corresponda segun las horas extra trabajadas por el empleado: ";
		cin >> opcion;
		
		switch (opcion)
		{
			case 1:
				cout << "Usted ha elegido la opcion 1 para horas extras diurnas.";
				break;
			case 2:
				cout << "Usted ha elegido la opcion 2 para horas extras nocturnas.";
				break;
			case 3:
				cout << "Usted ha elegido la opcion 3 para horas extras diurnas dominical/festivo.";
				break;
			case 4:
				cout << "Usted ha elegido la opcion 4 para horas extras nocturnas dominical/festivo.";
				break;
			default:
				cout << "Debe ingresar una opcion entre 1 y 4.";
				break;
		}
	}
}


















