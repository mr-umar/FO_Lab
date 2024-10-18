/*
** Fichero: sesion3_ej7.c
** Autor: Umar Mohammad Riaz
** Fecha: 16/10/2024
**
** Descripción: Ejercicio 7 de la sesión 3 de laboratorio.
**
*/

#include <stdio.h>
#include "colours.h"

int main() {
    int opcion;
    unsigned int n, i, j;
    double x, cosx, termino, potencia, factorial, e;

    do {
        cambiar_color(GREEN);
        printf("\n1. Mostrar divisores \n");
        printf("2. Calcular numero e \n");
        printf("3. Calcular coseno\n");
        printf("4. Salir\n");
        cambiar_color(DEFAULT);
        printf("Escoja una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Introduzca un numero natural: ");
                scanf("%u", &n);
                printf("Los divisores de %u son: ", n);
                for (i = 1; i <= n; i++) {
                    if (n % i == 0) {
                        printf("%u", i);
                        if (i < n) {
                            printf(", ");
                        }
                    }
                }
                printf("\n");
                break;
            case 2:
                printf("Introduzca el valor de n: ");
                scanf("%u", &n);
                e = 1.0;
                for (i = 1; i <= n; i++) {
                    factorial = 1.0;
                    for (j = 1; j <= i; j++) {
                        factorial *= j;
                    }
                    e += 1.0 / factorial;
                }
                printf("Numero e = %.6f\n", e);
                break;
            case 3:
                printf("Introduzca un valor real (x): ");
                scanf("%lf", &x);
                printf("Introduzca un valor natural (n): ");
                scanf("%u", &n);
                cosx = 1.0;
                for (i = 1; i <= n; i++) {
                    factorial = 1.0;
                    potencia = 1.0;
                    for (j = 1; j <= 2 * i; j++) {
                        factorial *= j;
                        potencia *= x;
                    }
                    termino = (potencia / factorial) * (i % 2 == 0 ? 1 : -1);
                    cosx += termino;
                }
                printf("cos(%.2f) = %.6f\n", x, cosx);
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                cambiar_color(RED);
                printf("Opcion incorrecta\n");
                cambiar_color(DEFAULT);
                break;
        }
    } while(opcion != 4);

    return 0;
}
