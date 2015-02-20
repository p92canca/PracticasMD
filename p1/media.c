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
void media_referencia (double x, double y, double *resultado);

int main(){
/* Declaración de variables locales */
	double x,y,r;
/* Introducimos valores */
	printf("Introduce el valor de la 'x': ");
	scanf("%lf",&x);
	printf("Introduce el valor de la 'y': ");
	scanf("%lf",&y);
/* Comprobamos funciones */
	printf("Resultado funcion media por valor: %lf\n",media(x,y));
	media_referencia(x,y,&r);
	printf("Resultado funcion media por referencia: %lf\n",r);
	return 0;
}

double media (double x, double y){
	return (x+y)/2;
}

void media_referencia (double x, double y, double *resultado){
	*resultado=(x+y)/2;
}
