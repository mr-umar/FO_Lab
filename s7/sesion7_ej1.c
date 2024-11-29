/*
** Fichero: sesion7_ej1.c 
** Autor: Umar Mohammad Riaz
** Fecha: 27/12/2024 
**
** Descripción: Ejercicio 1 de la sesión 7 de laboratorio. 
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
    int numero, suma;

    printf("Introduzca un valor natural: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, introduzca un número natural positivo.\n");
        return 1;
    }

    suma = suma_digitos(numero);
    printf("La suma de los dígitos de %d es %d\n", numero, suma);

    return 0;
}
