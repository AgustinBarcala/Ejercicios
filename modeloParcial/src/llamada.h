/*
 * llamada.h
 *
 *  Created on: 7 may. 2022
 *      Author: Usuario
 */

#ifndef LLAMADA_H_
#define LLAMADA_H_

typedef struct {
	    int idLlamada;
	    char estado;
		char motivo;
		int idAsociado; // FK
	    int idAmbulancia;
		float tiempoInsumido;
		int isEmpty;
	} Llamada;


	int inicializarLlamada(Llamada pArray[], int len);

#endif /* LLAMADA_H_ */
