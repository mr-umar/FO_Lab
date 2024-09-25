#include <stdio.h>
#include "colours.h"


int main()
{
   int a, b, aux;

   printf("Introduzca dos valores para las variables a y b: ");
   scanf("%d %d%*c", &a, &b);

   /* Complete el programa */

   cambiar_color(RED);

   printf("Variable a: %d\n", b);

   cambiar_color(DEFAULT);
   cambiar_color(GREEN);
   printf("Variable b: %d\n", a);

   cambiar_color(DEFAULT);
};
