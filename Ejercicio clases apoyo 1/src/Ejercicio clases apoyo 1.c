/*
 ============================================================================
 Name        : Ejercicio 2
 Author      : Leandro
 Description : Al ejercicio anterior :
			   Ademas de la edad ingresar el estado civil de la persona ( 's' para soltera , 'c' para casada, 'd' divorciada)
   	   	   	   ademas de informar lo anterior ....informar:
   	   	   	   la persona mas joven de las casadas
   	   	   	   a persona mas Vieja de las solteras
   	   	   	   de los estados civiles , cual fue el mas ingresado
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

		setbuf(stdout,NULL);

		int acumulador = 0;
		int numero;
		int contador = 0;
		float promedio;
		int banderaNumeros = 0;
		int numeroMax;
		int numeroMin;
		char respuesta = 'y';
		int respuestaScanF;
		int respuestaScanfChar;
		char estadoCivil;
		int personaMasVieja;
		int personaMasJoven;
		char estadoCivilMasIngresado;
		int contadorCasado = 0;
		int contadorSoltero = 0;
		int contadorDivorciado = 0;


		while(respuesta == 'y'){ // o while(1)

			printf("Ingrese un numero ");
			fflush(stdin);
			respuestaScanF = scanf("%d",&numero);

			while(respuestaScanF != 1){

				printf("porfavor ingrese un caracter numerico");
				fflush(stdin);
				respuestaScanF = scanf("%d",&numero);

			}
			acumulador = acumulador + numero;
			contador++;

			printf("Ingrese su estado civil (s[soltero]-c[casado]-d[divorciada/o]) ");
			fflush(stdin);
			scanf("%c",&estadoCivil);

			while(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'd'){

				printf("porfavor ingrese un caracter valido");
				fflush(stdin);
				scanf("%c",&estadoCivil);

			}

			switch(estadoCivil){

				case 'c':
					contadorCasado++;
					break;

				case 's':
					contadorSoltero++;
					break;

				default:
					contadorDivorciado++;
					break;
			}


			if(banderaNumeros == 0){

			 numeroMax = numero;
			 numeroMin = numero;
			 personaMasJoven = numero;
			 personaMasVieja = numero;
			 banderaNumeros = 1;

			 }else{

				 if(numeroMax < numero){

					 numeroMax = numero;

					 if(estadoCivil == 's'){

						 personaMasVieja = numero;

					 }

				 }else if(numeroMin > numero){

					 numeroMin = numero;
					 personaMasJoven = numero;

					 if(estadoCivil == 'c'){

					 	personaMasJoven = numero;

					 }

				 }
			 }

			printf("Desea seguir ingresando numero? (y/n)");
			fflush(stdin);
			respuestaScanfChar = scanf("%c",&respuesta);


			if(respuesta == 'n'){

				respuesta = 'n'; // o break;
			}
		}

		if(contadorDivorciado > contadorSoltero && contadorDivorciado > contadorCasado){

			estadoCivilMasIngresado = 'd';

			}else{

				if(contadorSoltero > contadorDivorciado && contadorSoltero > contadorCasado){

					estadoCivilMasIngresado = 's';

					}else{

						if(contadorCasado > contadorSoltero && contadorCasado > contadorDivorciado){

							estadoCivilMasIngresado = 'c';

							}else{

								estadoCivilMasIngresado = 'x';

							}
						}
					}


		 promedio = (float) acumulador / contador;
		 printf("\n El promedio es: %.1f",promedio);
		 printf("\n El Numero maximo  es: %d",numeroMax);
		 printf("\n El Numero minimo  es: %d",numeroMin);
		 printf("\n El Numero de edades ingresadas es: %d",contador);
		 printf("\n El/la soltero/a mas viejo  es: %d",personaMasVieja);
		 printf("\n El/la casado/a mas joven es: %d",personaMasJoven);
		 printf("\n El estado civil que predomina es: %c",estadoCivilMasIngresado);

	}



