/*
** Fichero: sesion2_ej4.c
** Autor: Umar Mohammad Riaz
** Fecha: 25/09/2024
**
** Descripcion: Ejercicio 4 de la sesión 2 de laboratorio.
**
*/

#include <stdio.h>

#define PI 3.14

int main() {

    float radio;

    printf("> Introduzca el radio del circulo: ");
    scanf("%f", radio);

    float area = PI*radio*radio, perimetro = 2*PI*radio;

    printf("\nArea del circulo: %f", area);
    printf("\nPerimetro del circulo: %f", perimetro);

    return 0;
}

