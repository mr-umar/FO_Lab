/*
** Fichero: sesion6_ej3a.c
** Autor: Umar Mohammad Riaz
** Fecha: 20/11/2024
**
** Descripción: Ejercicio 3a de la sesión 6 de laboratorio.
*/

#include <stdio.h>
#define N 10

typedef struct {
    int fils, cols;            // número de filas y columnas de la matriz (1 <= fils, cols <= N)
    unsigned int mat[N][N];    // elementos de la matriz de naturales
} tmatriz;

int main() {
    tmatriz m1, m2, msuma;
    int i, j;

    // Solicitar las dimensiones de la matriz m1
    do {
        printf("Introduzca las dimensiones de la matriz m1 (filas, columnas): ");
        scanf("%d,%d", &m1.fils, &m1.cols);
        if (m1.fils <= 0 || m1.fils > N || m1.cols <= 0 || m1.cols > N) {
            printf("Dimensiones fuera de rango. Intente de nuevo.\n");
        }
    } while (m1.fils <= 0 || m1.fils > N || m1.cols <= 0 || m1.cols > N);

    // Solicitar los datos de la matriz m1
    printf("Introduzca los datos de la matriz m1:\n");
    for (i = 0; i < m1.fils; i++) {
        for (j = 0; j < m1.cols; j++) {
            scanf("%u", &m1.mat[i][j]);
        }
    }

    // Solicitar las dimensiones de la matriz m2
    do {
        printf("Introduzca las dimensiones de la matriz m2 (filas, columnas): ");
        scanf("%d,%d", &m2.fils, &m2.cols);
        if (m2.fils <= 0 || m2.fils > N || m2.cols <= 0 || m2.cols > N) {
            printf("Dimensiones fuera de rango. Intente de nuevo.\n");
        }
    } while (m2.fils <= 0 || m2.fils > N || m2.cols <= 0 || m2.cols > N);

    // Solicitar los datos de la matriz m2
    printf("Introduzca los datos de la matriz m2:\n");
    for (i = 0; i < m2.fils; i++) {
        for (j = 0; j < m2.cols; j++) {
            scanf("%u", &m2.mat[i][j]);
        }
    }

    // Comprobar si las dimensiones de m1 y m2 son iguales
    if (m1.fils != m2.fils || m1.cols != m2.cols) {
        printf("Matrices con dimensiones diferentes: no se pueden sumar.\n");
        return 0; // Termina el programa si las dimensiones son diferentes
    }

    // Calcular la matriz suma
    msuma.fils = m1.fils;
    msuma.cols = m1.cols;
    printf("Datos de la matriz suma:\n");
    for (i = 0; i < msuma.fils; i++) {
        for (j = 0; j < msuma.cols; j++) {
            msuma.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
            printf("%4u", msuma.mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
