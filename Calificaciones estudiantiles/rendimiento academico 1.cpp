#include <iostream>
#include <stdlib.h>
using namespace std;

/**
6. Una instituci�n educativa estableci� un programa para estimular a los alumnos con buen rendimieno acad�mico y que consiste en lo siguiente:

- Si el promedio es de 9.5 o m�s y el alumno es de preparatoria, entonces se este podr� cursar 55 unidades y se le har� un 25% de descuento.
- Si el promedio es mayor o igual a 9 pero menor que 9.5 y el alumno es de preparatoria, entonces este podr� cursar 50 unidades y se
le har� un 10% de descuento
- Si el promedio es mayor que 7 y menor que 9 y el alumno es de preparatoria, este podr� cursar 50 unidades y no tendr� descuento.
- Si el promedio es de 7 o menor, el n�mero de materias reprobadas es de 0 a 3 y el alumno es de preparatoria, entonces podr� cursar
45 unidades y no tendr� descuento.
- Si el promedio es de 7 o menor, el n�mero de materias reprobadas es de 4 o m�s y el alumno es de preparatoria, entonces podr� cursar
40 unidades y no tendr� ning�n descuento.


- Si el promedio es mayor o igual a 9.5 y el alumno es de profesional, entonces podr� cursar 55 unidades y se le har� un descuento
del 20%
- Si el promedio es menor a 9.5 y el alumno es de profesional, entonces podr� cursar 55 unidades y no tendr� descuento.

Obtener el total que tendr� que pagar un alumno si la colegiatura para alumnos de profesional es de $300 por cada 5 unidades y para
alumnos de preparatoria es de $180 por cada 5 unidades
*/

int main(int argc, char *argv[]) {
	int tipo, reprobadas;
	float promedio, total;
	const float preparatoria = (180/5), profesional = (300/5);
	
	cout << "A qu� tipo pertenece el alumno: \n1 = Preparatoria\n2 = Profesional\n: ";
	cin >> tipo;
	cout << "Ingrese el promedio del Alumno: ";
	cin >> promedio;
	
	if (tipo == 1){
		if (promedio >= 9.5){
			total = 55 * preparatoria * 0.75;
			cout << "Puedes cursar  55 unidades y tiene un descuento del 25%";
		} else if (promedio >= 9 && promedio < 9.5){
			total = 50 * preparatoria * 0.9;
			cout << "Puedes cursar  50 unidades y tiene un descuento del 10%";
		} else if (promedio > 7 && promedio < 9){
			total = 50 * preparatoria;
			cout << "Puedes cursar  50 unidades y NO tiene descuento";
		} else if (promedio <= 7){
			cout << "�Cuantas Materias Reprob�?: ";
			cin >> reprobadas;
			
			if (reprobadas <= 3){
				total = 45 * preparatoria;
				cout << "Puedes cursar  45 unidades y NO tiene descuento";
			} else {
				total = 40 * preparatoria;
				cout << "Puedes cursar  40 unidades y NO tiene descuento";
			}
		}
	} else if (tipo == 2){
		if (promedio >= 9.5){
			total = 55 * profesional * 0.80;
			cout << "Puedes cursar  55 unidades y tiene un descuento del 20%";
		} else {
			total = 55 * profesional;
			cout << "Puedes cursar  55 unidades y NO tiene descuento.";
		}
	} else {
		cout << "Has digitado mal el tipo al que pertenece.";
	}
	
	cout << "\nEl alumno tiene que pagar la colegiatura con un valor de $" << total;

	return 0;
}

