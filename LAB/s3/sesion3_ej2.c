/*
** Fichero: sesion3_ej2.c
** Autor: Umar Mohammad Riaz
** Fecha: 09/10/2024
**
** Descripción: Ejercicio 2 de la sesión 3 de laboratorio.
**
*/


#include <stdio.h>

int main() {
    int numero, i;

    printf("Introduzca un numero natural: ");
    scanf("%d", &numero);

    printf("Secuencia de numeros: ");

    for (i = 0; i <= numero; i++) {
        printf("%d", i);
        if (i < numero) {
            printf(", ");
        }
    }
    
    printf("\n");

    return 0;
}