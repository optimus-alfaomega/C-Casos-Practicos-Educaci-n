#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/*
1. Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de dise�o estrucurado de Algoritmos
*/
int main(int argc, char *argv[]) {
	system("color 30");
	float nota, promedio = 0;
	
	for (int i = 1; i <=7; i++){
		printf("Ingres la %i nota del alumno: ", i);
		scanf("%f", &nota);
		promedio += nota;
	}
	
	printf("\nEl promedio del alumno en la materia de Dise�o estructurado de Algoritmos es: %.2f", (promedio/7));
	
	return 0;
}

