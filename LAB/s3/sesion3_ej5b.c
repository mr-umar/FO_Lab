/*
** Fichero: sesion3_ej5b.c
** Autor: Umar Mohammad Riaz
** Fecha: 09/10/2024
**
** Descripción: Ejercicio 5b de la sesión 3 de laboratorio.
**
*/

#include <stdio.h>

int main() {
    int n, i, j; 
    double e = 0.0;
    double factorial = 1.0;

    printf("Introduzca el valor de n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        factorial = 1.0;
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        e += 1.0 / factorial;
    }

    printf("Numero e = %.6f\n", e);
    return 0;
}
