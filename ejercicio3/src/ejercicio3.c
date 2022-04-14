/*
 ============================================================================
 Pedir 5 numeros y dar el maximo y el minimo
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void){
	setbuf(stdout , NULL);

		int i;
		int numeroUno;
		int numeroDos;
		int numeroTres;
		int numeroCuatro;
		int numeroCinco;
		int flag = 0;
		int maximo;
		int minimo;
		int auxNumero;

		for(i= 0; i<5;i++){

			scanf("%d" , &auxNumero);

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
			if(flag == TRUE){
				maximo = auxNumero;
				minimo = auxNumero;
				flag = 1;
			}else{
			if(flag == FALSE && auxNumero > maximo){
				maximo = auxNumero;
			}
			if(flag == FALSE && auxNumero < minimo){
				minimo = auxNumero;
				}
			}
		}

		printf("El numero maximo es: %d y el numero minimo es: %d" ,maximo , minimo);




	return EXIT_SUCCESS;
}
