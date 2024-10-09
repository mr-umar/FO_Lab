/*
** Fichero: sesion3_ej5a.c
** Autor: Umar Mohammad Riaz
** Fecha: 09/10/2024
**
** Descripción: Ejercicio 5a de la sesión 3 de laboratorio.
**
*/


#include <stdio.h>

int main() {
    unsigned long m, factorial = 1;
    int i;  // Variable de control del bucle

    printf("Introduzca el valor de m: ");
    scanf("%lu", &m);

    for (i = 1; i <= m; i++) {
        factorial *= i;
    }

    printf("%lu! = %lu\n", m, factorial);
    return 0;
}