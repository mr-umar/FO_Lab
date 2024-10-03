/*
** Fichero: sesion2_ej8.c
** Autor: Umar Mohammad Riaz
** Fecha: 03/10/2024
**
** Descripcion: Ejercicio 8 de la sesión 2 de laboratorio.
**
*/

#include <stdio.h>

#define PI 3.1415

int main(){

    char tipoFigura;
    float datoA, datoB, area;

    printf("Introduzca la descripcion de la figura: ");
    scanf("%c %f %f", &tipoFigura, &datoA, &datoB);

    if (tipoFigura == 't' || tipoFigura == 'T'){
        area = (datoA * datoB) / 2;

        printf("Area del Triangulo = %f\n", area);
    } else if (tipoFigura == 'c' || tipoFigura == 'C') {
        area = PI * datoA * datoA;

        printf("Area del Circulo = %f\n", area);
    } else {
        printf("El tipo de la figura es incorrecto!\n");
    };

    return 0;

}

