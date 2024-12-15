/*
** Fichero: sesion3_ej9b.c
** Autor: Umar Mohammad Riaz
** Fecha: 16/10/2024
**
** Descripción: Ejercicio 9b de la sesión 3 de laboratorio.
**
*/

#include <stdio.h>
#include "colours.h"

int main() {
    int numero, i;
    int esPrimo;

    printf("Introduzca una secuencia de numeros naturales y finalice con -1: ");

    while (1) {
        scanf("%d", &numero);

        if (numero == -1) {
            break;
        }

        if (numero <= 1) {
            esPrimo = 0;
        } else {
            esPrimo = 1;
            for (i = 2; i <= numero / 2; i++) {
                if (numero % i == 0) {
                    esPrimo = 0;
                    break;
                }
            }
        }

        if (esPrimo) {
            cambiar_color(GREEN);
            printf("El numero %d es primo\n", numero);
        }
        else {
            cambiar_color(RED);
            printf("No hay numeros primos en la secuencia");
        }
    }

    cambiar_color(DEFAULT);
    return 0;
}
