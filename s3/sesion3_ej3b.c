/*
** Fichero: sesion3_ej3b.c
** Autor: Umar Mohammad Riaz
** Fecha: 09/10/2024
**
** Descripción: Ejercicio 3b de la sesión 3 de laboratorio.
**
*/

#include <stdio.h>

int main() {
    int numero, suma = 0;

    printf("Introduzca una secuencia de numeros naturales y finalice con -1: ");
    scanf("%d", &numero);

    while (numero != -1) {
        suma += numero;
        scanf("%d", &numero);
    }

    printf("Suma: %d\n", suma);
    
    return 0;
}