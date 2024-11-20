/*
** Fichero: sesion6_ej3c.c
** Autor: Umar Mohammad Riaz
** Fecha: 20/11/2024
**
** Descripción: Ejercicio 3c de la sesión 6 de laboratorio.
*/


#include <stdio.h>
#define N 10

typedef struct {
    int fils, cols;          // número de filas y columnas de la matriz (1 <= fils, cols <= N)
    unsigned int mat[N][N];  // elementos de la matriz de naturales
} tmatriz;

int main() {
    tmatriz mtras; // Matriz para almacenar la traspuesta
    tmatriz m1 = {3, 3, {{1, 2, 2}, {2, 1, 4}, {3, 4, 1}}};
    // tmatriz m1 = {4, 3, {{1, 2, 3}, {2, 1, 4}, {3, 4, 1}, {0, 0, 0}}};
    // tmatriz m1 = {3, 4, {{1, 2, 3, 0}, {2, 1, 4, 0}, {3, 4, 1, 0}}};
    int i, j;

    printf("Datos de la matriz m1:\n");
    for (i = 0; i < m1.fils; i++) {
        for (j = 0; j < m1.cols; j++)
            printf("%3u ", m1.mat[i][j]);
        printf("\n");
    }

    // Calcular la traspuesta
    mtras.fils = m1.cols;
    mtras.cols = m1.fils;
    for (i = 0; i < m1.fils; i++) {
        for (j = 0; j < m1.cols; j++) {
            mtras.mat[j][i] = m1.mat[i][j]; // Intercambiar filas por columnas
        }
    }

    // Mostrar la matriz traspuesta
    printf("\nDatos de la matriz traspuesta:\n");
    for (i = 0; i < mtras.fils; i++) {
        for (j = 0; j < mtras.cols; j++)
            printf("%3u ", mtras.mat[i][j]);
        printf("\n");
    }

    return 0;
}
