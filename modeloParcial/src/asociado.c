
#include <stdio.h>
#include <stdlib.h>
#include "asociado.h"

int incrementarId(){
	static int id = 1000;
	id++;
	return id;
}

int buscarIndexPorIsEmpty(Asociado pArray[], int len){
	int retorno = -1;

	if(pArray != NULL && len > 0)
	{
		for(int i = 0; i < len; i ++)
		{
			if(pArray[i].isEmpty == 1)
			{
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}

int buscarIndexPorId(Asociado listaAsociados[], int len, int id)
{ int retorno = -1;
	if(listaAsociados != NULL && len > 0 && id > 0)
	{
		for(int i = 0; i < len; i++)
		{
			if(listaAsociados[i].idAsociado == id && listaAsociados[i].isEmpty == 0){
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}



int inicializarAsociado(Asociado pArray[], int len) {

	int retorno = -1;

	if(pArray != NULL && len > 0) {

		for(int i = 0; i < len; i++){
			pArray[i].isEmpty = 1;
		}
	}
	return retorno;
}



int cargarAsociado(Asociado pArray[], int len){
	int retorno = -1;
	int indexLibre;

	if(pArray != NULL && len > 0){
		indexLibre = buscarIndexPorIsEmpty(pArray, len);
		if(indexLibre != -1){
			printf("Ingrese el nombre: \n");
			scanf("%s" ,pArray[indexLibre].nombre);

			printf("Ingrese el apellido: \n");
			scanf("%s" ,pArray[indexLibre].apellido);

			printf("Ingrese dni: \n");
			scanf("%d" ,&pArray[indexLibre].dni);

			printf("Ingrese edad: \n");
			scanf("%d" ,&pArray[indexLibre].edad);

			pArray[indexLibre].idAsociado = incrementarId();
			pArray[indexLibre].isEmpty = 0;

			mostrarAsociado(pArray[indexLibre]);

			retorno = 0;
		}

	}
	return retorno;
}

void mostrarAsociado(Asociado unAsociado){

	if(unAsociado.isEmpty == 0){
		printf("\n%d %s %s %d %d", unAsociado.idAsociado, unAsociado.apellido, unAsociado.nombre, unAsociado.dni, unAsociado.edad);

	}
}

int listarAsociado(Asociado pArray[], int len){
	int retorno = -1;

	if(pArray != NULL && len > 0)
	{
		for(int i = 0; i < len; i++)
		{
			mostrarAsociado(pArray[i]);
		}
		retorno = 0;
	}
	return retorno;
}

int modificarAsociado(Asociado listarAsociado[], int len, int idAsociado)
{
	int retorno = -1;
	int index;
	if(listarAsociado != NULL && len > 0 && idAsociado > 0)
	{
		index = buscarIndexPorId(listarAsociado, len, idAsociado);
		if(index != -1)
		{
			mostrarAsociado(listarAsociado[index]);
			printf("\n Cambie el nombre: \n");
			scanf("%s", listarAsociado[index].nombre);
			retorno = 0;
		}

	}
	return retorno;
}

int bajaAsociado(Asociado listaAsociado[], int len, int idAsociado)
{
	int retorno = -1;
	int index;

	if(listaAsociado != NULL && len > 0 && idAsociado > 0)
	{
		index = buscarIndexPorId(listaAsociado, len, idAsociado);
		if(index != -1)
		{
			mostrarAsociado(listaAsociado[index]);
			listaAsociado[index].isEmpty = 1;
			retorno = 0;
		}

	}


	return retorno;
}
