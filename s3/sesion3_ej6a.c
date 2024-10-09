/*
** Fichero: sesion3_ej6a.c
** Autor: Umar Mohammad Riaz
** Fecha: 09/10/2024
**
** Descripción: Ejercicio 6a de la sesión 3 de laboratorio.
**
*/

#include <stdio.h>

int main() {
    double x, resultado = 1.0;
    unsigned int n;
    int i;  

    printf("Introduzca el valor de x (real): ");
    scanf("%lf", &x);

    printf("Introduzca el valor de n (natural): ");
    scanf("%u", &n);

    for (i = 0; i < n; i++) {
        resultado *= x;
    }

    printf("El resultado de %.2f elevado a %u es: %.2f\n", x, n, resultado);
    
    return 0;
}