/*
 ============================================================================
 Name        : Clase.c
 Author      : Leandro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//EJERCICIO FUNCIONES CLASE 3
/*
float CalculoAreaCirculo(float radio,float pi){

		float resultado;
		pi = 3.14159;
		resultado = radio * pi;

		return resultado;
}

int main(void) {

	float radio;
	float area;
	float pi = 3.14;

	setbuf(stdout,NULL);


	printf("Ingrese el radio");
	scanf("%f",&radio);

	area = CalculoAreaCirculo(radio, pi);

	printf("El area es : %f",area);


}

*/
float Suma(float numeroA, float numeroB){

	float resultado;

	resultado = numeroA + numeroB;

	return resultado;


}

float Resta(float numeroA, float numeroB){

	float resultado;

	resultado = numeroA - numeroB;

	return resultado;


}

float Division(float numeroA, float numeroB){

	float resultado;

	resultado = numeroA / numeroB;

	return resultado;


}

float Multiplicacion(float numeroA, float numeroB){

	float resultado;

	resultado = numeroA * numeroB;

	return resultado;


}
int main(void){

	setbuf(stdout,NULL);


	float numero1;
	float numero2;
	char funcion;
	float resultado;

	printf("Bienvenido a calculadora Basica, ingrese que funcion quiere ejecutar (+|-|*|/):");
	fflush(stdin);
	scanf("%c",&funcion);

	printf("Ingrese su primer numero");
	fflush(stdin);
	scanf("%f",&numero1);


	printf("Ingrese su segundo numero");
	fflush(stdin);
	scanf("%f",&numero2);

	switch(funcion){

	 case'+':

		 resultado = Suma(numero1, numero2);
		 break;

	 case'-':

			 resultado = Resta(numero1, numero2);
			 break;

	 case'/':

			 resultado = Division(numero1, numero2);
			 break;

	 default:

			 resultado = Multiplicacion(numero1, numero2);
			 break;
	}

	printf("El resultado es : %.2f",resultado);
}

