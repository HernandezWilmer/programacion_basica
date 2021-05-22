/*A un empleado que tiene un contrato para trabajar de d�a le pagan seg�n sus horas trabajadas.

El programa deber� pedirle al usuario la cantidad de horas trabajadas por el empleado durante la semana 
y si la cantidad es menor o igual a 48, entonces el programa calcular� y mostrar� el valor del salario 
del empleado, pero si la cantidad de horas trabajadas es mayor a 48, entonces el programa deber� mostrar 
por pantalla lo siguiente:

Elija la opci�n que corresponda seg�n las horas extra trabajadas por el empleado:

Y posteriormente se mostrar� el siguiente men� (use switch-casesonrisa:

1. Diurnas
2. Nocturnas
3. Diurnas dominical/festivo
4. Nocturnas dominical/festivo
El usuario elegir� la opci�n deseada y a partir de ella el programa calcular� y mostrar� el valor de las 
48 horas y tambi�n el valor de las horas extra trabajadas, finalmente mostrar� la suma de estos dos valores.*/

#include <iostream>
using namespace std;

float horasTrabajadasSemana, valorHoraDiurna, auxilioDiario, salario;
int opcion;

main()
{
	valorHoraDiurna = 3786;
	auxilioDiario = 3548;
	
	//El programa deber� pedirle al usuario la cantidad de horas trabajadas por el empleado durante la semana 
	cout << "Ingrese la cantidad de horas trabajadas durante la semana: ";
	cin >> horasTrabajadasSemana;
	
	//si la cantidad es menor o igual a 48, entonces el programa calcular� y mostrar� el valor del salario 
	//del empleado, pero si la cantidad de horas trabajadas es mayor a 48, entonces el programa deber� mostrar 
	//por pantalla un men�:
	
	if (horasTrabajadasSemana <= 48)
	{
		//Esto se ejecuta si la cantidad de horas semanales es menor o igual que 48
		//Ac� debo calcular y mostrar el valor del salario
		salario = (horasTrabajadasSemana * valorHoraDiurna) * 4;
		cout << "\nEl salario SIN auxilio de transporte es: " << salario;
	}
	else if (horasTrabajadasSemana > 48) //Esto significa que yo trabaj� m�s de 48 horas semanales, es decir que
	{									//trabaj� horas extra
		//Esto se ejecuta si la cantidad de horas semanales es mayor que 48
		//Ac� debo mostrar un men�
		/*
		Elija la opci�n que corresponda seg�n las horas extra trabajadas por el empleado:

		Y posteriormente se mostrar� el siguiente men� (use switch-casesonrisa:
		
		1. Diurnas
		2. Nocturnas
		3. Diurnas dominical/festivo
		4. Nocturnas dominical/festivo
		
		El usuario elegir� la opci�n deseada y a partir de ella el programa calcular� y mostrar� el valor de las 
		48 horas y tambi�n el valor de las horas extra trabajadas, finalmente mostrar� la suma de estos dos valores.*/
	
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


















