/*
** Fichero: sesion7_ej4ab.c
** Autor: Umar Mohammad Riaz
** Fecha: 27/12/2024
**
** Descripción: Ejercicio 4a y 4b de la sesión 7 de laboratorio.
** Implementación de las funciones leer_fraccion y mostrar_fraccion.
*/

#include <stdio.h>

typedef struct {
    int num;   /* Numerador */
    int den;   /* Denominador */
} t_fraccion;

t_fraccion leer_fraccion();
void mostrar_fraccion(t_fraccion f);

int main() {
    t_fraccion fraccion;

    fraccion = leer_fraccion();
    mostrar_fraccion(fraccion);

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

void mostrar_fraccion(t_fraccion f) {
    if (f.num < 0 && f.den < 0) {
        f.num = -f.num;
        f.den = -f.den;
    } else if (f.den < 0) {
        f.num = -f.num;
        f.den = -f.den;
    }
    printf("Fracción introducida: %d/%d\n", f.num, f.den);
}
