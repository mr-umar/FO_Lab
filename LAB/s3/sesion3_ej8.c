/*
** Fichero: sesion3_ej8.c
** Autor: Umar Mohammad Riaz
** Fecha: 16/10/2024
**
** Descripción: Ejercicio 8 de la sesión 3 de laboratorio.
**
*/


#include <stdio.h>

int main() {
    char caracter;
    int numeroPalabras = 0;
    int dentroPalabra = 0;

    printf("Introduce una frase acabada en '.': ");

    do {
        caracter = getchar();

        if (caracter == ' ' || caracter == '\t') {
            dentroPalabra = 0;
        } else if (caracter != '.') {
            if (dentroPalabra == 0) {
                numeroPalabras++;
            }
            dentroPalabra = 1;
        }

    } while (caracter != '.');

    printf("Numero de palabras: %d\n", numeroPalabras);

    return 0;
}
