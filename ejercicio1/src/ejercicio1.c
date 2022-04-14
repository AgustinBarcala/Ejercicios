/*
 ============================================================================
Pedir dos numeros
luego mostrar la suma, resta, multiplicacion y division entre estos.


 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout , NULL);

	int numeroUno;
	int numeroDos;
	int suma;
	int resta;
	int multiplicacion;
	float division;


	printf("Ingrese el primer numero:");
	scanf("%d" , &numeroUno);

	printf("Ingrese el segundo numero: ");
	scanf("%d" , &numeroDos);

	suma = (int)numeroUno + numeroDos;
	resta = (int)numeroUno - numeroDos;
	multiplicacion = (int)numeroUno * numeroDos;
	division = (float)numeroUno / numeroDos;



	printf("La suma entre los numeros es: %d\n" , suma);
	printf("La resta entre los numeros es: %d\n" , resta);
	printf("La multiplicacion entre los numeros es: %d\n" , multiplicacion);
	printf("La division entre los numeros es: %f\n" , division);


	return EXIT_SUCCESS;
}
