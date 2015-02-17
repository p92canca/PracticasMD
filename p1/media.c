/*!
  \file media.c
  \brief Práctica 1 Ejercicio 6. Programa que muestra la equivalencia entre funciones que devuelven un resultado y funciones que utilizan parámetros por referencia.
  \author Alberto Cañete Carpintero
*/

/*!
	\mainpage Equivalencia funciones
	\brief   Se muestra la equivalencia de funciones
	\author  Alberto Cañete Carpintero
	\date   17 de febrero 2014
*/

/*
  Se muestra la equivalencia de funciones
*/ 

/* Ficheros de cabecera */

#include <stdio.h>

double media (double x, double y);

int main(){
/* Declaración de variables locales */
	double x,y;
/* Introducimos valores */
	printf("Introduce el valor de la 'x': ");
	scanf("%f",&x);
	printf("Introduce el valor de la 'y': ");
	scanf("%f",&y);
/* Comprobamos funciones */
	printf("Resultado funcion media por valor: %f\n",media(x,y);
	return 0;
}

double media (double x, double y){
	return (x+y)/2;
}
