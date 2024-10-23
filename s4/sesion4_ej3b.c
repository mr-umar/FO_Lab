/*
** Fichero: sesion4_ej3b.c
** Autor: Umar Mohammad Riaz
** Fecha: 23/10/2024
**
** Descripción: Ejercicio 3b de la sesión 4 de laboratorio.
**
*/

#include <stdio.h>
#include <math.h>  // Para usar la función abs (valor absoluto)

typedef struct {
    unsigned int hh;  // Horas
    unsigned int mm;  // Minutos
    unsigned int ss;  // Segundos
} texpr_horaria;

// Función para convertir una expresión horaria en segundos
unsigned int convertir_a_segundos(texpr_horaria tiempo) {
    return tiempo.hh * 3600 + tiempo.mm * 60 + tiempo.ss;
}

int main() {
    texpr_horaria tiempo1, tiempo2;
    unsigned int segundos1, segundos2;
    const unsigned int SEGUNDOS_MEDIANOCHE = 86400;  // 24 horas = 86400 segundos

    printf("Introduzca primera expresion horaria (hh mm ss): ");
    scanf("%u %u %u", &tiempo1.hh, &tiempo1.mm, &tiempo1.ss);

    printf("Introduzca segunda expresion horaria (hh mm ss): ");
    scanf("%u %u %u", &tiempo2.hh, &tiempo2.mm, &tiempo2.ss);

    // Convertir ambas expresiones a segundos
    segundos1 = convertir_a_segundos(tiempo1);
    segundos2 = convertir_a_segundos(tiempo2);

    // Calcular la distancia a la medianoche (considerando el ciclo de 24 horas)
    unsigned int distancia1 = abs((int)(segundos1 - SEGUNDOS_MEDIANOCHE / 2));
    unsigned int distancia2 = abs((int)(segundos2 - SEGUNDOS_MEDIANOCHE / 2));

    // Determinar cuál es más cercana a la medianoche
    if (distancia1 < distancia2) {
        printf("La expresion horaria mas cercana a la medianoche es: (%02u %02u %02u)\n", tiempo1.hh, tiempo1.mm, tiempo1.ss);
    } else {
        printf("La expresion horaria mas cercana a la medianoche es: (%02u %02u %02u)\n", tiempo2.hh, tiempo2.mm, tiempo2.ss);
    }

    return 0;
}
