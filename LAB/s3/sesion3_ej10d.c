/*
** Fichero: sesion3_ej10d.c
** Autor: Umar Mohammad Riaz
** Fecha: 16/10/2024
**
** Descripción: Ejercicio 10d de la sesión 3 de laboratorio.
**
*/

#include <stdio.h>
#include "colours.h"

int main() {
    unsigned int numero, i, j;

    printf("Introduzca un numero natural: ");
    scanf("%u", &numero);

    for (i = numero; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                cambiar_color(GREEN);
            } else {
                cambiar_color(YELLOW);
            }
            printf("*");
        }
        printf("\n");
    }

    cambiar_color(DEFAULT);  // Restablecer el color por defecto al final
    return 0;
}
