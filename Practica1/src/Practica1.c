/*
 ============================================================================
 Name        : Practica1.c
 Author      : Leandro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);

	int acumulador=0;
	int numero;
	int contador=0;
	float promedio;

	while(1){

		printf("Ingrese un numero");
		scanf("%d",&numero);

		 if(numero!=999){

			 acumulador = acumulador + numero;

		 }else{

			 break;
			 contador++;

		 }
	}

	 promedio = (float) acumulador / contador;
	 printf("\n El promedio es: %f",promedio);

}
