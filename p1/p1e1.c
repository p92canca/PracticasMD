/*!
  \file p1e1.c
  \brief Programa que muestra el tamaño de variables
  \author Alberto Cañete Carpintero
*/

/*!
	\mainpage Tamaños variables int, double, punteros y dobles punteros
	\brief   Se muestra el tamaño de variables
	\author  Alberto Cañete Carpintero
	\date   17 de febrero 2014
*/

/*
  Se muestra el tamaño de variables
*/ 

/* Ficheros de cabecera */

#include <stdio.h>

int main(){
/* Declaración de variables locales */
	int a, *b, **c;
	double d, *e, **f;
/* Se muestran el tamaño de las variables por pantalla */
	printf("El tamaño de la variable 'a' es: %d\n", sizeof(a));
	printf("El tamaño de la variable 'b' es: %d\n", sizeof(b));
	printf("El tamaño de la variable 'c' es: %d\n", sizeof(c));
	printf("El tamaño de la variable 'd' es: %d\n", sizeof(d));
	printf("El tamaño de la variable 'e' es: %d\n", sizeof(e));
	printf("El tamaño de la variable 'f' es: %d\n", sizeof(f));
	return 0;
}
