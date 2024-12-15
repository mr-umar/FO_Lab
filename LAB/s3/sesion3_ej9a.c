/*
** Fichero: sesion3_ej9a.c
** Autor: Umar Mohammad Riaz
** Fecha: 16/10/2024
**
** Descripción: Ejercicio 9a de la sesión 3 de laboratorio.
**
*/


#include <stdio.h>
#include "colours.h"

int main() {
    unsigned int numero, i;
    int esPrimo = 0;

    printf("Introduzca un numero natural: ");
    scanf("%u", &numero);

    if (numero <= 1) {
        esPrimo = 0;
    } else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }

    if (esPrimo) {
        cambiar_color(GREEN);
        printf("El numero %u es primo\n", numero);
    } else {
        cambiar_color(RED);
        printf("El numero %u no es primo\n", numero);
    }

    cambiar_color(DEFAULT);
    return 0;
}
