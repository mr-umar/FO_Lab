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
    float base, altura, radio, area;

    printf("> Introduzca la descripcion de la figura: ");
    scanf("%c", &tipoFigura);

    if (tipoFigura == 't' || tipoFigura == 'T'){
        scanf("%f %f", &base, &altura);

        area = (base * altura) / 2;

        printf("Area del Triangulo = %.2f\n", area);

    } else if (tipoFigura == 'c' || tipoFigura == 'C') {
        scanf("%f", &radio);

        area = PI * radio * radio;

        printf("Area del Circulo = %.2f\n", area);
    } else {
        printf("El tipo de la figura es incorrecto!\n");
    };

    return 0;

}

