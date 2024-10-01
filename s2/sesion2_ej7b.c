/*
** Fichero: sesion2_ej7b.c
** Autor: Umar Mohammad Riaz
** Fecha: 25/07/2024
**
** Descripcion: Ejercicio 7b de la sesión 2 de laboratorio.
**
*/

#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    printf("> Introduzca una hora en formato hh:mm:ss: ");
    scanf("%d:%d:%d", &horas, &minutos, &segundos);

    // Sumamos un segundo
    segundos++;


    // si un número es 60 se iguala a 0 y se suma 1 en min o hora
    if (segundos == 60) {
        segundos = 0;
        minutos++; 
    }

    if (minutos == 60) {
        minutos = 0;
        horas++; 
    }

    if (horas == 24) {
        horas = 0; 
    }

    // Mostramos la hora
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
