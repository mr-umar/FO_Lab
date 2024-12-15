/*
** Fichero: sesion7_ej2.c 
** Autor: Umar Mohammad Riaz
** Fecha: 27/12/2024 
**
** Descripción: Ejercicio 2 de la sesión 7 de laboratorio. 
*/

#include <stdio.h>

int suma_digitos(int num) {
    int suma = 0;
    while (num > 0) {
        suma += num % 10;
        num /= 10;
    }
    return suma;
}

int main() {
    int numero;

    printf("Introduzca una secuencia de números finalizada en -1: ");
    while (1) {
        scanf("%d", &numero);
        if (numero == -1) {
            break;
        }
        printf("La suma de los dígitos de %d es %d\n", numero, suma_digitos(numero));
    }

    return 0;
}
