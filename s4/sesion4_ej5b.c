/*
** Fichero: sesion4_ej5b.c
** Autor: Umar Mohammad Riaz
** Fecha: 23/10/2024
**
** Descripción: Ejercicio 5b de la sesión 4 de laboratorio.
**
*/

#include <stdio.h>

#define BASTOS 0
#define ESPADAS 1
#define COPAS 2
#define OROS 3

typedef struct {
    int fig;  // Figura: 12 (Rey), 11 (Caballo), 10 (Sota), 9, ..., 1
    int pal;  // Palo: OROS, COPAS, ESPADAS, BASTOS
} tcarta;


void leer_carta(tcarta *carta) {
    char figura, palo;

  
    printf("Introduce la figura de la carta (r=Rey, c=Caballo, s=Sota, 9...1): ");
    scanf(" %c", &figura);


    switch (figura) {
        case 'r': case 'R': carta->fig = 12; break;
        case 'c': case 'C': carta->fig = 11; break;
        case 's': case 'S': carta->fig = 10; break;
        case '9': carta->fig = 9; break;
        case '8': carta->fig = 8; break;
        case '7': carta->fig = 7; break;
        case '6': carta->fig = 6; break;
        case '5': carta->fig = 5; break;
        case '4': carta->fig = 4; break;
        case '3': carta->fig = 3; break;
        case '2': carta->fig = 2; break;
        case '1': carta->fig = 1; break;
        default: printf("Figura no válida\n"); return;
    }


    printf("Introduce el palo de la carta (o=Oros, c=Copas, e=Espadas, b=Bastos): ");
    scanf(" %c", &palo);


    switch (palo) {
        case 'o': case 'O': carta->pal = OROS; break;
        case 'c': case 'C': carta->pal = COPAS; break;
        case 'e': case 'E': carta->pal = ESPADAS; break;
        case 'b': case 'B': carta->pal = BASTOS; break;
        default: printf("Palo no válido\n"); return;
    }
}

int main() {
    tcarta carta1, carta2;


    printf("Lectura de la primera carta:\n");
    leer_carta(&carta1);

    printf("Lectura de la segunda carta:\n");
    leer_carta(&carta2);


    if (carta1.fig > carta2.fig) {
        printf("La primera carta es mayor.\n");
    } else if (carta1.fig < carta2.fig) {
        printf("La segunda carta es mayor.\n");
    } else {
        if (carta1.pal > carta2.pal) {
            printf("Ambas cartas tienen la misma figura, pero la primera carta es mayor por el palo.\n");
        } else if (carta1.pal < carta2.pal) {
            printf("Ambas cartas tienen la misma figura, pero la segunda carta es mayor por el palo.\n");
        } else {
            printf("Ambas cartas son iguales.\n");
        }
    }

    return 0;
}
