/*
** Fichero: sesion3_ej4.c
** Autor: Umar Mohammad Riaz
** Fecha: 09/10/2024
**
** Descripción: Ejercicio 4 de la sesión 3 de laboratorio.
**
*/


#include <stdio.h>

int main() {
    int número, i;

    printf("Introduzca un numero natural: ");
    scanf("%d", &número);

    printf("Los divisores de %d son: ", número);
    for (i = 1; i <= número; i++) {
        if (número % i == 0) {
            printf("%d", i);
            if (i < número) {
                printf(", ");
            }
        }
    }
    printf("\n");

    return 0;
}