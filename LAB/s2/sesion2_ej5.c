/*
** Fichero: sesion2_ej5.c
** Autor: Umar Mohammad Riaz
** Fecha: 25/09/2024
**
** Descripcion: Ejercicio 5 de la sesión 2 de laboratorio.
**
*/


#include <stdio.h>


int main()
{
   int a, b, aux;

   printf("> Introduzca dos valores para las variables a y b: ");
   scanf("%d %d%*c", &a, &b);

   aux = b; // aux guarda el valor de b
   b = a; // com aux te el valor de b, ara si, b guarda el valor de a
   a = aux; // i finalmente el valor guardat a aux passa a a

   printf("Variable a: %d\n", a);
   printf("Variable b: %d\n", b);
};
