/*
** Fichero: sesion7_ej4a.c
** Autor: Umar Mohammad Riaz
** Fecha: 27/12/2024
**
** Descripción: Ejercicio 4a de la sesión 7 de laboratorio.
*/

#include <stdio.h>

typedef struct {
    int num;   /* Numerador */
    int den;   /* Denominador */
} t_fraccion;

t_fraccion leer_fraccion();

int main() {
    t_fraccion fraccion;

    fraccion = leer_fraccion();

    printf("Fracción leída: %d/%d\n", fraccion.num, fraccion.den);

    return 0;
}

t_fraccion leer_fraccion() {
    t_fraccion f;

    printf("Introduce el numerador: ");
    scanf("%d", &f.num);

    do {
        printf("Introduce el denominador (distinto de 0): ");
        scanf("%d", &f.den);
        if (f.den == 0) {
            printf("El denominador no puede ser 0. Inténtalo de nuevo.\n");
        }
    } while (f.den == 0);

    return f;
}
