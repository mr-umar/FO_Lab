/*
** Fichero: sesion4_ej2.c
** Autor: Umar Mohammad Riaz
** Fecha: 23/10/2024
**
** Descripción: Ejercicio 2 de la sesión 4 de laboratorio.
**
*/

#include <stdio.h>

typedef struct {
    /* data */
};


/*
** Fichero: sesion4_ej2.c
** Autor: Umar Mohammad Riaz
** Fecha: 23/10/2024
**
** Descripción: Ejercicio 2 de la sesión 4 de laboratorio.
**
*/

#include <stdio.h>

typedef struct {
    unsigned char R;
    unsigned char G;
    unsigned char B;
    unsigned char A;
} tpixel;

int main() {
    tpixel pixel1, pixel2, pixelMedio;

    printf("Introduzca primer pixel (R,G,B,A): ");
    scanf("%hhu,%hhu,%hhu,%hhu", &pixel1.R, &pixel1.G, &pixel1.B, &pixel1.A);

    printf("Introduzca segundo pixel (R,G,B,A): ");
    scanf("%hhu,%hhu,%hhu,%hhu", &pixel2.R, &pixel2.G, &pixel2.B, &pixel2.A);

    pixelMedio.R = (pixel1.R + pixel2.R + 1) / 2;
    pixelMedio.G = (pixel1.G + pixel2.G + 1) / 2;
    pixelMedio.B = (pixel1.B + pixel2.B + 1) / 2;
    pixelMedio.A = (pixel1.A + pixel2.A + 1) / 2;

    printf("El valor del pixel medio es: (%hhu,%hhu,%hhu,%hhu)\n", pixelMedio.R, pixelMedio.G, pixelMedio.B, pixelMedio.A);

    return 0;
}
