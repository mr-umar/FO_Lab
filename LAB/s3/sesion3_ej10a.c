/*
** Fichero: sesion3_ej10a.c
** Autor: Umar Mohammad Riaz
** Fecha: 16/10/2024
**
** Descripción: Ejercicio 10a de la sesión 3 de laboratorio.
**
*/

#include <stdio.h>

int main() {
    unsigned int numero, i, j;

    printf("Introduzca un numero natural: ");
    scanf("%u", &numero);

    for (i = 1; i <= numero; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
