/*
** Fichero: sesion3_ej12.c
** Autor: Umar Mohammad Riaz
** Fecha: 16/10/2024
**
** Descripción: Ejercicio 12 de la sesión 3 de laboratorio.
**
*/

#include <stdio.h>
#include "colours.h"
#include "azar.h"

int main() {
    int posicionRaton = 29, posicionGato = 0;
    int dadoRaton, dadoGato;
    int pista = 60;

    inicializar_azar();

    while (1) {
        // Turno del ratón
        dadoRaton = numero_al_azar(6) + 1;
        posicionRaton = (posicionRaton + dadoRaton) % pista;
        cambiar_color(GREEN);
        printf("Raton: He sacado un %d. Voy a la casilla %d\n", dadoRaton, posicionRaton);

        if (posicionRaton == posicionGato) {
            cambiar_color(RED);
            printf("Gato: He ganado!!!!\n");
            cambiar_color(DEFAULT);
            break;
        }

        // Turno del gato
        dadoGato = (numero_al_azar(6) + 1) * 2;
        posicionGato = (posicionGato + dadoGato) % pista;
        cambiar_color(RED);
        printf("Gato: He sacado un %d. Voy a la casilla %d\n", dadoGato, posicionGato);

        if (posicionGato == posicionRaton) {
            cambiar_color(RED);
            printf("Gato: He ganado!!!!\n");
            cambiar_color(DEFAULT);
            break;
        }

        cambiar_color(DEFAULT);  // Restablecer el color después de cada ciclo
    }

    return 0;
}
