
#include <stdio.h>
#include <stdlib.h>
#include "llamada.h"


int inicializarLlamada(Llamada pArray[], int len) {

	int retorno = -1;

	if(pArray != NULL && len > 0) {

		for(int i = 0; i < len; i++){
			pArray[i].isEmpty = 1;
		}
	}
	return retorno;
}

