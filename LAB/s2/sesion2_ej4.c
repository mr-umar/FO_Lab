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
    scanf("%f", &radio);

    // calculamos el area y el perimetro
    float area = PI*radio*radio, perimetro = 2*PI*radio;

    printf("\nArea del circulo: %g", area); // %g ajusta automaticame el numero de decimales
    printf("\nPerimetro del circulo: %g", perimetro);

    return 0;
}

