/*
** Fichero: sesion5_ej1.c
** Autor: Umar Mohammad Riaz
** Fecha: 13/11/2024
**
** Descripción: Ejercicio 2 de la sesión 5 de laboratorio.
*/


#include <stdio.h>

int main() {
    char frase[100], fraseCodificada[100];
    int i = 0;

 
    printf("Introduzca una frase acabada en punto (<=100 caracteres): ");
    fgets(frase, sizeof(frase), stdin);


    while (frase[i] != '.' && frase[i] != '\0') {
        // Codificar letras mayúsculas
        if (frase[i] >= 'A' && frase[i] <= 'Z') {
            fraseCodificada[i] = ((frase[i] - 'A' + 4) % 26) + 'A';
        }
        // Codificar letras minúsculas
        else if (frase[i] >= 'a' && frase[i] <= 'z') {
            fraseCodificada[i] = ((frase[i] - 'a' + 4) % 26) + 'a';
        }
        // Codificar números
        else if (frase[i] >= '0' && frase[i] <= '9') {
            fraseCodificada[i] = ((frase[i] - '0' + 4) % 10) + '0';
        }
        
        else {
            fraseCodificada[i] = frase[i];
        }
        i++;
    }
    
    fraseCodificada[i] = '.';
    fraseCodificada[i + 1] = '\0';

    
    printf("Frase codificada: %s\n", fraseCodificada);

    return 0;
}
