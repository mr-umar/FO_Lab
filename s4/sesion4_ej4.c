/*
** Fichero: sesion4_ej4.c
** Autor: Umar Mohammad Riaz
** Fecha: 23/10/2024
**
** Descripción: Ejercicio 4 de la sesión 4 de laboratorio.
**
*/

#include <stdio.h>

typedef struct {
    int num;  // Numerador
    int den;  // Denominador
} tfraccion;

int main() {
    tfraccion fraccion1, fraccion2, resultado;

    printf("Fraccion 1 (formato x/y): ");
    scanf("%d/%d", &fraccion1.num, &fraccion1.den);

    printf("Fraccion 2 (formato x/y): ");
    scanf("%d/%d", &fraccion2.num, &fraccion2.den);

    printf("\nRESULTADOS:\n");

    // Suma
    resultado.num = fraccion1.num * fraccion2.den + fraccion1.den * fraccion2.num;
    resultado.den = fraccion1.den * fraccion2.den;
    printf("Suma: %d/%d + %d/%d = %d/%d\n", fraccion1.num, fraccion1.den, fraccion2.num, fraccion2.den, resultado.num, resultado.den);

    // Resta
    resultado.num = fraccion1.num * fraccion2.den - fraccion1.den * fraccion2.num;
    resultado.den = fraccion1.den * fraccion2.den;
    printf("Resta: %d/%d - %d/%d = %d/%d\n", fraccion1.num, fraccion1.den, fraccion2.num, fraccion2.den, resultado.num, resultado.den);

    // Multiplicació
    resultado.num = fraccion1.num * fraccion2.num;
    resultado.den = fraccion1.den * fraccion2.den;
    printf("Multiplicacion: %d/%d * %d/%d = %d/%d\n", fraccion1.num, fraccion1.den, fraccion2.num, fraccion2.den, resultado.num, resultado.den);

    // Divisió
    resultado.num = fraccion1.num * fraccion2.den;
    resultado.den = fraccion1.den * fraccion2.num;
    printf("Division: %d/%d / %d/%d = %d/%d\n", fraccion1.num, fraccion1.den, fraccion2.num, fraccion2.den, resultado.num, resultado.den);

    return 0;
}
