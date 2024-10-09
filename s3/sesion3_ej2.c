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
    int n;

    printf("Introduzca un numero natural: ");
    scanf("%d", &n);

    printf("Secuencia de numeros: ");

    for (int i = 0; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(", ");
        }
    }
    
    printf("\n");

    return 0;
}