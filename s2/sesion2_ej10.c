/*
** Fichero: sesion2_ej10.c
** Autor: Umar Mohammad Riaz
** Fecha: 03/10/2024
**
** Descripcion: Ejercicio 10 de la sesión 2 de laboratorio.
**
*/

#include <stdio.h>
#include "colours.h"


int main(){

    int numeroUsuario;

    printf("Introduzca un valor entero entre 0 y 9: ");
    scanf("%d", &numeroUsuario);

    printf("Ha introducido el ");

    if (numeroUsuario % 2 == 0) {
        cambiar_color(GREEN);
    } else
    {
        cambiar_color(MAGENTA);
    }
    

    switch(numeroUsuario) {
    case 0:
        printf("CERO\n");
        break;
    case 1:
        printf("UNO\n");
        break;
    case 2:
        printf("DOS\n");
        break;
    case 3:
        printf("TRES\n");
        break;
    case 4:
        printf("CUATRO\n");
        break;
    case 5:
        printf("CINCO\n");
        break;
    case 6:
        printf("SEIS\n");
        break;
    case 7:
        printf("SIETE\n");
        break;
    case 8:
        printf("OCHO\n");
        break;
    case 9:
        printf("NUEVE\n");
        break;
    default:
        cambiar_color(DEFAULT);
        printf("El numero introducido es dificil de escribir\n");
    }


};


