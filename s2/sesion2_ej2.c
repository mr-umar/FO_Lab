/*
** Fichero: sesion2_ej2.c
** Autor: Umar Mohammad Riaz
** Fecha: 25/07/2024
**
** Descripción: Ejercicio 2 de la sesión 2 de laboratorio.
**
*/

#include <stdio.h>

int main() {

    int expresion;

    expresion = 5 / 2 + 20 % 6; // 4
    printf("La expresion 5/2 + 20%%6 devuelve: %d\n", expresion); // Resultado esperado: 4


    expresion = 4 * 6 / 2 - 15 / 2; // 5
    printf("La expresion 4*6/2 - 15/2 devuelve: %d\n", expresion); // Resultado esperado: 6


    expresion = 5 * 15 / 2 / (4 - 2); // 18
    printf("La expresion 5*15/2/(4 - 2) devuelve: %d\n", expresion); // Resultado esperado: 18


    expresion = 8 == 16 || 7 != 4 && 4 < 1; // 0 (False)
    printf("La expresion 8 == 16 || 7 != 4 && 4 < 1 devuelve: %d\n", expresion); // Resultado esperado: 1 (true)


    expresion = (4 * 3 < 6 || 3 > 5 - 2) && 3 + 2 < 12; // 0
    printf("La expresion (4*3 < 6 || 3 > 5 - 2) && 3 + 2 < 12 devuelve: %d\n", expresion); // Resultado esperado: 1 (true)


    expresion = 2 || 0; // 1 (True)
    printf("La expresion 2 || 0 devuelve: %d\n", expresion); // Resultado esperado: 1 (true)


    expresion = 1 && 0; // 0
    printf("La expresion 1 && 0 devuelve: %d\n", expresion); // Resultado esperado: 0 (false)

    return 0;
}