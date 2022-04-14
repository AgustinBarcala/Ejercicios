/*
 ============================================================================
Pedir al usuario un numero
Luego pedir el tipo de operacion (+ * - /)
Pedir el segundo numero
Segun la operacion, llamar a la funcion correspondiente
validar en la division que no sea 0
Mostrar el resultado al usuario.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int main(void) {
	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int operacion;
	int suma;
	int resta;
	int multiplicacion;
	float division;



	printf("Ingrese el primer numero: ");
	scanf("%d", &numeroUno);

	printf("Seleccione el numero del tipo de operacion que desea ingresar\n1 Suma\n2 Resta\n3 multiplicacion\n4 division\n");
	scanf("%d" , &operacion);

	printf("Ingrese el segundo numero: ");
	scanf("%d" , &numeroDos);

	switch(operacion){
	case 1:
		suma = sumarDosEnteros(numeroUno,numeroDos);
		printf("El resultado es %d" , suma);
		break;

	case 2:
		resta = restarDosEnteros(numeroUno,numeroDos);
		printf("El resultado es %d" , resta);
		break;

	case 3:
		multiplicacion = multiplicarDosEnteros(numeroUno,numeroDos);
		printf("El resultado es %d" , multiplicacion);
		break;

	case 4:
		division = dividirDosEnteros(numeroUno,numeroDos);
		if(numeroUno == 0 || numeroDos == 0){
				printf("No se puede dividir por 0");
		}else{
				printf("El resultado es %f", division);
			}
		break;

	default:
		printf("Opcion invalida");
	}





	return EXIT_SUCCESS;
}



