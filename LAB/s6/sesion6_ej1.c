/*
** Fichero: sesion6_ej1.c
** Autor: Umar Mohammad Riaz
** Fecha: 20/11/2024
**
** Descripción: Ejercicio 1 de la sesión 6 de laboratorio.
*/

#include <stdio.h>
#define VACIA -1
#define N 10

typedef struct {
   int num, den;   // numerador y denominador
} tfracciones;

int main()
{
    // Declaración e inicialización de m1
    int m1[5][4];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            m1[i][j] = 1;
        }
    }

    // Declaración e inicialización de sudoku
    int sudoku[9][9] = {
        {5, 3, VACIA, VACIA, 7, VACIA, VACIA, VACIA, VACIA},
        {6, VACIA, VACIA, 1, 9, 5, VACIA, VACIA, VACIA},
        {VACIA, 9, 8, VACIA, VACIA, VACIA, VACIA, 6, VACIA},
        {8, VACIA, VACIA, VACIA, 6, VACIA, VACIA, VACIA, 3},
        {4, VACIA, VACIA, 8, VACIA, 3, VACIA, VACIA, 1},
        {7, VACIA, VACIA, VACIA, 2, VACIA, VACIA, VACIA, 6},
        {VACIA, 6, VACIA, VACIA, VACIA, VACIA, 2, 8, VACIA},
        {VACIA, VACIA, VACIA, 4, 1, 9, VACIA, VACIA, 5},
        {VACIA, VACIA, VACIA, VACIA, 8, VACIA, VACIA, 7, 9}
    };

    // Declaración e inicialización de mat_frac
    tfracciones mat_frac[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat_frac[i][j].num = i + 1;
            mat_frac[i][j].den = j + 1;
        }
    }

    // Mostrar los valores de m1
    printf("Valor de m1:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    // Mostrar los valores de sudoku
    printf("\nValor de sudoku:\n");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (sudoku[i][j] == VACIA) {
                printf("  ");
            } else {
                printf("%d ", sudoku[i][j]);
            }
        }
        printf("\n");
    }

    // Mostrar los valores de mat_frac
    printf("\nValor de mat_frac:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d/%d ", mat_frac[i][j].num, mat_frac[i][j].den);
        }
        printf("\n");
    }

    return 0;
}
