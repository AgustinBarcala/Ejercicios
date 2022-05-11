
#include <stdio.h>
#include <stdlib.h>
#include "inputs.h"

#define EDAD_SIZE 5

int main(void) {
	setbuf(stdout, NULL);

	int edad;
	int edades[EDAD_SIZE];
	int i;

	//RECORRO PARA CARGAR EN FORMA SECUENCIAL.
	for(i = 0; i < EDAD_SIZE; i++)
	{
		if(utn_getNumero(&edad, "ingrese edad: ", "\nEsta edad no va\n", 1,150,2)==0)
		{
			edades[i] = edad;
		}
		else
		{
			printf("No sabes lo que es una edad pa\n");
		}
	}

	//RECORRO PARA IMPRIMIR
	for(i=0;i < EDAD_SIZE; i++)
	{
		printf("%d ", edades[i]);
	}


	return 0;
}
