/*
** Fichero: sesion2_ej9.c
** Autor: Umar Mohammad Riaz
** Fecha: 03/10/2024
**
** Descripcion: Ejercicio 9 de la sesión 2 de laboratorio.
**
*/

#include <stdio.h>


int main() {
    char caracter;


    printf("Introduzca un caracter: ");
    scanf(" %c", &caracter);  

    if ((caracter >= 65 && caracter <= 90) || (caracter >= 97 && caracter <= 122)) {
        printf("Es una letra\n");


        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
            caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {
            printf("Es una vocal\n");
        } else {
            printf("Es una consonante\n");
        }


        if (caracter >= 65 && caracter <= 90) {  
            printf("Es una mayuscula\n");
            printf("No es una minuscula\n");

            printf("El caracter con la capitalizacion invertida es %c\n", caracter + 32);
        } else if (caracter >= 97 && caracter <= 122) {  
            printf("No es una mayuscula\n");
            printf("Es una minuscula\n");

            printf("El caracter con la capitalizacion invertida es %c\n", caracter - 32);
        }
    }

    else if (caracter >= 48 && caracter <= 57) {
        printf("No es una letra\n");
        printf("No es una vocal\n");
        printf("No es una consonante\n");
        printf("No es una mayuscula\n");
        printf("No es una minuscula\n");
        printf("Es un digito\n");
    }

        else {
        printf("No es una letra\n");
        printf("No es una vocal\n");
        printf("No es una consonante\n");
        printf("No es una mayuscula\n");
        printf("No es una minuscula\n");
        printf("No es un digito\n");
    }

    return 0;
}
