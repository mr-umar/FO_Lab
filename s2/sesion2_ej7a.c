/*
** Fichero: sesion2_ej7a.c
** Autor: Umar Mohammad Riaz
** Fecha: 25/07/2024
**
** Descripcion: Ejercicio 7a de la sesión 2 de laboratorio.
**
*/

#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    printf("> Introduzca una hora en formato hh:mm:ss: ");
    scanf("%d:%d:%d", &horas, &minutos, &segundos);

    // Sumamos un segundo
    segundos++; // Ejemplo: 59s + 1s = 60s

    minutos = minutos + (segundos / 60);  // 59m + 1m = 60m
    segundos = segundos % 60; // 60 % 60 = 0 (el resto)

    horas = horas + (minutos / 60); // 23h + 1h = 24h
    minutos = minutos % 60; // 60 % 60 = 0

    horas = horas % 24; // 24 % 24 = 0

    // Mostramos la hora final
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
