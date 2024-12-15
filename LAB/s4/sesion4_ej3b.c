/*
** Fichero: sesion4_ej3b.c
** Autor: Umar Mohammad Riaz
** Fecha: 23/10/2024
**
** Descripción: Ejercicio 3b de la sesión 4 de laboratorio.
**
*/

#include <stdio.h>

typedef struct {
    unsigned int hh;  // Horas
    unsigned int mm;  // Minutos
    unsigned int ss;  // Segundos
} texpr_horaria;


int main() {
    texpr_horaria tiempo1, tiempo2;
    unsigned int segundos1, segundos2;
    unsigned int segundosMedianoche = 86400; 


    printf("Introduzca primera expresion horaria (hh mm ss): ");
    scanf(" (%u %u %u)", &tiempo1.hh, &tiempo1.mm, &tiempo1.ss);

    printf("Introduzca segunda expresion horaria (hh mm ss): ");
    scanf(" (%u %u %u)", &tiempo2.hh, &tiempo2.mm, &tiempo2.ss);


    segundos1 = tiempo1.hh * 3600 + tiempo1.mm * 60 + tiempo1.ss;
    segundos2 = tiempo2.hh * 3600 + tiempo2.mm * 60 + tiempo2.ss;


    int distancia1 = segundos1 - segundosMedianoche / 2;
    if (distancia1 < 0) {
        distancia1 = -distancia1;
    }

    int distancia2 = segundos2 - segundosMedianoche / 2;
    if (distancia2 < 0) {
        distancia2 = -distancia2;
    }


    printf("La expresion horaria mas cercana a la medianoche es: ");
    if (distancia1 < distancia2) {
        printf("(%02u %02u %02u)\n", tiempo1.hh, tiempo1.mm, tiempo1.ss);
    } else {
        printf("(%02u %02u %02u)\n", tiempo2.hh, tiempo2.mm, tiempo2.ss);
    }

    return 0;
}
