/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Solicitar al usuario que ingrese
 una serie de números la cual finaliza
 al introducir el 999 (el 999 no debe ser
 tenido en cuenta para dicho cálculo).
 Una vez finalizado el ingreso de números el programa
 deberá mostrar el promedio de dichos números por pantalla.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int numero;
	int contador=0;
	float promedio;
	while(1){
		fflush(stdin);
		 scanf("%d",&numero);
		 if(numero!=999)
		 {
		 acumulador = acumulador + numero;
		 break;
		 }
	promedio = (float) acumulador / contador;


}
