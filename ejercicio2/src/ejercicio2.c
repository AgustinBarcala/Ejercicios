/*
 ============================================================================
 Pedirle al usuario 5 numeros y luego mostrar/imprimir el promedio.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout , NULL);

		int i;
		int numeroUno;
		int numeroDos;
		int numeroTres;
		int numeroCuatro;
		int numeroCinco;
		float promedio;

		for(i= 0; i<5;i++){

			if(i == 0){
			printf("Ingrese el primer numero: ");
			scanf("%d" , &numeroUno);
			}

			if(i == 1){
				printf("Ingrese el numero 2: ");
				scanf("%d" , &numeroDos);
			}

			if(i == 2){
			printf("Ingrese el numero 3: ");
			scanf("%d" , &numeroTres);
			}

			if(i == 3){
			printf("Ingrese el numero 4: ");
			scanf("%d" , &numeroCuatro);
			}

			if(i == 4){
			printf("Ingrese el numero 5: ");
			scanf("%d" , &numeroCinco);
			}

		}

		promedio = (float)(numeroUno + numeroDos + numeroTres + numeroCuatro + numeroCinco) / 5;

		printf("El promedio de los numeros ingresados es: %f" , promedio);






		return EXIT_SUCCESS;
	}
