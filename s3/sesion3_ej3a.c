/*
** Fichero: sesion3_ej3a.c
** Autor: Umar Mohammad Riaz
** Fecha: 09/10/2024
**
** Descripción: Ejercicio 3a de la sesión 3 de laboratorio.
**
*/

#include <stdio.h>

int main() {
    int numero, suma = 0, i;

    printf("Introduzca una secuencia de 10 numeros naturales: ");

    for (i = 0; i < 10; i++) {
        scanf("%d", &numero);
        suma += numero;
    }

    printf("Suma: %d\n", suma);
    return 0;
}