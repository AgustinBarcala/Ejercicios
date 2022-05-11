/*s
 * asociado.h
 *
 *  Created on: 7 may. 2022
 *      Author: Usuario
 */

#ifndef ASOCIADO_H_
#define ASOCIADO_H_

typedef struct {
	    int idAsociado; // PK
		char nombre[125];
		int dni;
		char apellido [125];
		int edad;
		int isEmpty;
	} Asociado;

	int inicializarAsociado(Asociado pArray[], int len);
	int cargarAsociado(Asociado pArray[], int len);
	int buscarIndexPorIsEmpty(Asociado pArray[], int len);
	int incrementarId();
	int listarAsociado(Asociado pArray[], int len);
	void mostrarAsociado(Asociado unAsociado);
	int modificarAsociado(Asociado listarAsociado[], int len, int idAsociado);
	int buscarIndexPorId(Asociado listaAsociados[], int len, int id);
	int bajaAsociado(Asociado listaAsociado[], int len, int idAsociado);


#endif /* ASOCIADO_H_ */
