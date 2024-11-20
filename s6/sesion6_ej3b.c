/*
** Fichero: sesion6_ej3b.c
** Autor: Umar Mohammad Riaz
** Fecha: 20/11/2024
**
** Descripción: Ejercicio 3b de la sesión 6 de laboratorio.
*/

#include <stdio.h>
#define N 10

typedef struct {
    int fils, cols;          // número de filas y columnas de la matriz (1 <= fils, cols <= N)
    unsigned int mat[N][N];  // elementos de la matriz de naturales
} tmatriz;

int main() {
    tmatriz m1 = {3, 3, {{1, 2, 3}, {2, 1, 4}, {3, 4, 1}}};
    // tmatriz m1={3,3,{{1,2,2},{2,1,4},{3,4,1}}};
    // tmatriz m1={3,4,{{1,2,3,0},{2,1,4,0},{3,4,1,0}}};

    int i, j;
    int es_simetrica = 1;  // Suponemos que es simétrica hasta demostrar lo contrario

    // Mostrar los datos de la matriz
    printf("Datos de la matriz m1:\n");
    for (i = 0; i < m1.fils; i++) {
        for (j = 0; j < m1.cols; j++)
            printf("%3u ", m1.mat[i][j]);
        printf("\n");
    }

    // Verificar si la matriz es cuadrada
    if (m1.fils != m1.cols) {
        printf("La matriz no es cuadrada, por lo que no puede ser simétrica.\n");
        return 0;
    }

    // Verificar si la matriz es simétrica
    for (i = 0; i < m1.fils; i++) {
        for (j = 0; j < i; j++) {  // Solo comprobar los elementos debajo de la diagonal principal
            if (m1.mat[i][j] != m1.mat[j][i]) {
                es_simetrica = 0;  // No es simétrica
                break;
            }
        }
        if (!es_simetrica)
            break;
    }

    // Resultado
    if (es_simetrica) {
        printf("La matriz es simétrica.\n");
    } else {
        printf("La matriz no es simétrica.\n");
    }

    return 0;
}
