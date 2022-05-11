/*
 ============================================================================
	Machete de las bibliotecas
	intento de que sean lo mas genericas posibles.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "inputs.h"



int main(void){
	setbuf(stdout , NULL);

	char letra;
	int edad;							/************* Verficacion de que funcione todo correctamente NO COPIAR**************/
	float peso;
	int respuesta;

	respuesta = utn_getCaracter(&letra, "Letra?\n", "Error la letra debe estar entre A y C\n", 'A', 'C', 3);
	if(respuesta == 0)
	{
		printf("La letra es %c", letra);
	}
	else
	{
		printf("\nALGO SALIO MAL\n");
	}

	respuesta = utn_getNumero(&edad, "edad?\n", "Error la edad debe estar entre 0 y 150\n", 0, 150, 2);
		if(respuesta == 0)
		{
			printf("La edad es %d", edad);
		}
		else
		{
			printf("\nALGO SALIO MAL\n");
		}


		respuesta = utn_getNumeroFlotante(&peso, "Peso?\n", "Error el peso debe estar entre 0 y 500\n", 0, 500, 2);
			if(respuesta == 0)
			{
				printf("El peso es %f", peso);
			}
			else
			{
				printf("\nALGO SALIO MAL\n");
			}

		return 0;
	}



























