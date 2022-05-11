/*
 ============================================================================
	Machete de las bibliotecas
	intento de que sean lo mas genericas posibles.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);

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

















//								FUNCIONES DESARROLLADAS PARA .C (RECORDAR PROTOTIPOS EN .H)








											//GET CARACTER


int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos)
{
	int retorno = -1;
	char bufferChar;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s", mensaje);
			fflush(stdin);
			scanf("%c", &bufferChar);
			if(bufferChar >= minimo && bufferChar <= maximo)
			{
				*pResultado = bufferChar;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s", mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);

	}
	return retorno;
}



											// GET NUMERO

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s", mensaje);
			scanf("%d", &bufferInt);
			if(bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s", mensajeError);
				reintentos--;
			}
		}while(reintentos >=0);
	}


	return retorno;
}


											// GET NUMERO FLOTANTE

int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
{
	int retorno = -1;
	float bufferInt;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s", mensaje);
			scanf("%f", &bufferInt);
			if(bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s", mensajeError);
				reintentos--;
			}
		}while(reintentos >=0);
	}


	return retorno;
}










