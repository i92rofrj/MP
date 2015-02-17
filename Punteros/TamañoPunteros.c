/*
 ============================================================================
 Name        : TamañoPunteros.c
 Author      : Jesús Rodríguez Freire
 Version     : 1
 Description : Comprobación de tamaño de distintos punteros
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("********** comprobación de tamaño de punteros *********\n");

	printf("\n Tamaño de int*: %lu bytes,  int**: %lu bytes, int***: %lu bytes   ", (sizeof(int*)),(sizeof(int**)),(sizeof(int***)));
	printf("\n Tamaño de float*: %lu bytes,  float**: %lu bytes, float***: %lu bytes   ", (sizeof(float*)),(sizeof(float**)),(sizeof(float***)));
	printf("\n Tamaño de char*: %lu bytes,  char**: %lu bytes, char***: %lu bytes   ", (sizeof(char*)),(sizeof(char**)),(sizeof(char***)));
	printf("\n Tamaño de double*: %lu bytes,  double**: %lu bytes, double***: %lu bytes   ", (sizeof(double*)),(sizeof(double**)),(sizeof(double***)));

	/* Todos los tamaños de punteros, puntero a puntero y puntero a puntero a puntero devuelven el mismo
	 * tamaño porque todos guardan una dirección de memmoria hexadecimal.
	 *
	 * En mi caso el tamño del puntero devuelve 4 bytes, porque mi sistema es de 32 bytes.
	 */

}
