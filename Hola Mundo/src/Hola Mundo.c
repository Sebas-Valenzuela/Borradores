/*
 ============================================================================
 Name        : Hola.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* JS
	    var numero1; // let numero 1
	    var numero2; // let numero 2
	    var resultado;
	    */

	    /* C  TIPOS   int float char */
	    int numero1;
	    int numero2;
	    int resultado;
	    int resultadoScan;

	    /* JS
	    numero1 = parseInt(prompt("Numero 1? "));
	    numero2 = parseInt(prompt("Numero 2? "));
	    */
	    printf("Numero 1? ");
	    resultadoScan = scanf("%d", &numero1); /* C  TIPOS   int %d   -  float %f  - char %c */
	    while(resultadoScan == 0)
	    {
	        printf("Error - Numero 1? ");
	        /*__fpurge(stdin);*/
	        fflush(stdin);
	        resultadoScan = scanf("%d", &numero1);
	    }


	    printf("Numero 2? ");
	    resultadoScan = scanf("%d", &numero2); /* C  TIPOS   int %d   -  float %f  - char %c */

	    //printf("Resultado scan %d - Numero 1 es %d", resultadoScan, numero1);

	    resultado = numero1 + numero2;

	    /* Js
	    console.log("La suma es " + resultado);
	    */
	    printf("La suma es %d", resultado);

}
