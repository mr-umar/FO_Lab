/*
** Fichero: sesion2_ej3.c
** Autor: Umar Mohammad Riaz
** Fecha: 25/07/2024
**
** Descripcion: Ejercicio 3 de la sesión 2 de laboratorio.
**
*/

#include <stdio.h>

int main() {
    char ini1, ini2, ini3;
    int anyo_nacimiento, edad;

    // a)
    printf("Hola\n");

    // b)
    printf("Introduce tus tres iniciales: ");
    scanf(" %c%c%c", &ini1, &ini2, &ini3); // " %c" para ignorar cualquier salto de lÃ­nea anterior

    // c) Pedimos el aÃ±o de nacimiento
    printf("Introduce tu aÃ±o de nacimiento: ");
    scanf("%d", &anyo_nacimiento);


    edad = 2015 - anyo_nacimiento;

    // saludo y edas
    printf("Hola %c%c%c\n", ini1, ini2, ini3);
    printf("El 31/DIC/2015 tendras %d aÃ±os\n", edad);

    return 0;
}

