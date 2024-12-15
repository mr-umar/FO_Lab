/*
** Fichero: sesion3_ej3c.c
** Autor: Umar Mohammad Riaz
** Fecha: 09/10/2024
**
** Descripción: Ejercicio 3c de la sesión 3 de laboratorio.
**
*/

#include <stdio.h>

int main() {
    int numero, suma = 0;

    printf("Introduzca una secuencia de numeros naturales y finalice con -1: ");

    do {
        scanf("%d", &numero);
        if (numero != -1) {
            suma += numero;
        }
    } while (numero != -1);

    printf("Suma: %d\n", suma);

    return 0;
}
