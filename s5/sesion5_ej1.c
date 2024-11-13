/*
** Fichero: sesion5_ej1.c
** Autor: Umar Mohammad Riaz
** Fecha: 13/11/2024
**
** Descripción: Ejercicio 1 de la sesión 5 de laboratorio.
*/

#include <stdio.h>


typedef struct {
    int dia;
    int mes;
    int anyo;
} Fecha;

int main() {
    // (a) Inicializar frase
    char frase[200] = "Esto es una frase.";

    // (b) Inicializar v1 con 1.0
    float v1[20];
    for (int i = 0; i < 20; i++) {
        v1[i] = 1.0;
    }

    // (c) Inicializar fechas
    Fecha fechas[5] = {
        {1, 1, 1945},
        {7, 7, 1999},
        {12, 4, 2000},
        {16, 10, 1989},
        {8, 3, 2012}
    };

    // Mostrar frase hasta el punto
    printf("Valor de frase: ");
    for (int i = 0; frase[i] != '.'; i++) {
        putchar(frase[i]);
    }
    putchar('\n');

    // Mostrar valores de v1
    printf("Valor de v1:\n");
    for (int i = 0; i < 20; i++) {
        printf("%.1f", v1[i]);
        if (i < 19) printf(", ");
    }
    putchar('\n');

    // Mostrar fechas
    printf("Valor de fechas:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d/%d/%d", fechas[i].dia, fechas[i].mes, fechas[i].anyo);
        if (i < 4) printf(", ");
    }
    putchar('\n');

    return 0;
}
