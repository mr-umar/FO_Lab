/*
** Fichero: sesion7_ej3c.c
** Autor: Umar Mohammad Riaz
** Fecha: 27/12/2024
**
** Descripción: Ejercicio 3c de la sesión 7 de laboratorio.
*/

#include <stdio.h>

int menu();
double potencia(double base, unsigned int exponente);

int main() {
    int opcion;

    do {
        opcion = menu();

        switch (opcion) {
            case 1: {
                double base;
                unsigned int exponente;
                printf("Introduce el valor de x (real): ");
                scanf("%lf", &base);
                printf("Introduce el valor de n (natural): ");
                scanf("%u", &exponente);
                printf("%.2f elevado a %u es igual a: %.2f\n", base, exponente, potencia(base, exponente));
                break;
            }
            case 2:
                printf("Ha escogido la opcion calcular factorial\n");
                break;
            case 3:
                printf("Ha escogido la opcion calcular numero combinatorio\n");
                break;
            case 4:
                printf("Ha escogido la opcion salir\n");
                break;
            default:
                printf("Ha escogido una opcion incorrecta. Vuelva a intentarlo!\n");
        }
    } while (opcion != 4);

    return 0;
}

int menu() {
    int opcion;

    printf("********** MENU **********\n");
    printf("1. Calcular potencia\n");
    printf("2. Calcular factorial\n");
    printf("3. Calcular numero combinatorio\n");
    printf("4. Salir\n");
    printf("Escoja una opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

double potencia(double base, unsigned int exponente) {
    double resultado = 1.0;
    for (unsigned int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}
