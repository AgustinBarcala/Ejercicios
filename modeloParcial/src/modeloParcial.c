/**************************
  CONSIGNA
  Una compañía que brinda el servicio de Atención Médica de Emergencias requiere
una aplicación que permita registrar cada uno de los pedidos de asistencia recibidos
de manera telefónica. Cada llamada pertenece a un asociado, tiene un motivo , un
estado y transcurre un tiempo en ser asignada una ambulancia.

1. ALTA DEL ASOCIADO: Se da de alta el abonado (ID, DNI, NOMBRE,
APELLIDO, EDAD) teniendo en cuenta que el ID es auto-incrementable.

2. MODIFICAR DATOS DEL ASOCIADO: Se ingresará el ID de asociado,
permitiendo modificar: NOMBRE y APELLIDO

3. BAJA DEL ASOCIADO: Se ingresará el ID de asociado y se marcara a este
como inhabilitado.

4. NUEVA LLAMADA: En esta opción se registran los datos (asociado y motivo)
indicando que el estado es “PENDIENTE”

5. ASIGNAR AMBULANCIA: En esta opción se registran los datos
(ID_AMBULANCIA y tiempo insumido) y se indica que el estado es
“CUMPLIDO”.

6. INFORMAR:
- El nombre y apellido del asociado con mas llamados
 -El o los motivo/s mas recurrente/s y su cantidad
 -El motivo que en promedio mas demora en ser resuelto





 ************************/
#include <stdio.h>
#include <stdlib.h>
#include "asociado.h"
#include "llamada.h"




//Funcion Main

int main(void) {
	setbuf(stdout , NULL);


		int opcionMenu;
		int idIngresado;
		Asociado asociados[2];
		Llamada llamadas[2];
		inicializarAsociado(asociados, 2);
		inicializarLlamada(llamadas, 2);

		do{
			printf("\n*****************************MENU PRINCIPAL*****************************\n\n");
			printf("1. Alta asociado \n");
			printf("2. Modificar datos \n");
			printf("3. Baja asociado \n");
			printf("4. Nueva llamada \n");
			printf("5. Asignar ambulancia \n");
			printf("6. Informar \n");
			printf("7. Salir \n");
			printf("Elija una opcion \n");
			scanf("%d", &opcionMenu);




			switch(opcionMenu)
			{
			case 1:
				if(cargarAsociado(asociados, 2)== 0)
				{
					printf("Se cargo bien\n");
				}else{
					printf("No se cargo bien\n");
				}
				//listarAsociado(asociados, 2);

				break;
			case 2:
				listarAsociado(asociados, 2);
				printf("\ningrese el numero id del asociado que desea modificar: \n");
				scanf("%d" , &idIngresado);
				modificarAsociado(asociados, 2, idIngresado);

				break;

			case 3:
				listarAsociado(asociados, 2);
				printf("\n Ingrese el numero del asociado que desea bajar \n");
				scanf("%d" , &idIngresado);
				bajaAsociado(asociados, 2, idIngresado);

				break;

			case 4:


				break;

			case 5:


				break;

			case 6:


				break;

			}

		}while(opcionMenu != 7);









return 0;
}

//Fin funcion main
