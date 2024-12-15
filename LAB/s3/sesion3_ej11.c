/*
** Fichero: sesion3_ej11.c
** Autor: Umar Mohammad Riaz
** Fecha: 16/10/2024
**
** Descripción: Ejercicio 11 de la sesión 3 de laboratorio.
**
*/

#include <stdio.h>

int main() {
    float nota, suma = 0.0, notaMax = 0.0, notaMin = 10.0;
    int numNotas = 0, aprobados = 0, suspendidos = 0;

    printf("Introduzca una secuencia de notas finalizada con un valor negativo:\n");

    while (1) {
        scanf("%f", &nota);

        if (nota < 0) {
            break;
        }

        suma += nota;
        numNotas++;

        if (nota > notaMax) {
            notaMax = nota;
        }
        if (nota < notaMin) {
            notaMin = nota;
        }

        if (nota >= 5.0) {
            aprobados++;
        } else {
            suspendidos++;
        }
    }

    if (numNotas > 0) {
        printf("Nota media: %.2f\n", suma / numNotas);
        printf("Nota mas alta: %.2f\n", notaMax);
        printf("Nota mas baja: %.2f\n", notaMin);
        printf("Numero de aprobados: %d\n", aprobados);
        printf("Numero de suspendidos: %d\n", suspendidos);
    } else {
        printf("No se introdujeron notas validas.\n");
    }

    return 0;
}
