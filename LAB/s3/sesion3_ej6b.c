/*
** Fichero: sesion3_ej6b.c
** Autor: Umar Mohammad Riaz
** Fecha: 09/10/2024
**
** Descripción: Ejercicio 6b de la sesión 3 de laboratorio.
**
*/

#include <stdio.h>

int main() {
    double x, cosx = 1.0, termino;
    unsigned int n;
    int i, j; 
    double factorial, potencia;

    printf("Introduzca un valor real (x): ");
    scanf("%lf", &x);
    printf("Introduzca un valor natural (n): ");
    scanf("%u", &n);

    for (i = 1; i <= n; i++) {
        factorial = 1.0;
        potencia = 1.0;

        // Calcular x^(2*i) manualmente
        for (j = 1; j <= 2 * i; j++) {
            potencia *= x;
        }

        // Calcular (2*i)!
        for (j = 1; j <= 2 * i; j++) {
            factorial *= j;
        }

        // Calcular el termino de la serie
        termino = (potencia / factorial) * (i % 2 == 0 ? 1 : -1);

        cosx += termino;
    }

    printf("cos(%.2f) = %.2f\n", x, cosx);
    return 0;
}