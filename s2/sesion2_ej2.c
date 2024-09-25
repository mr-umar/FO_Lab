/*
** Fichero: sesion2_ej2.c
** Autor: Umar Mohammad Riaz
** Fecha: 25/07/2024
**
** Descripción: Ejercico 2 de la sesión 2 de laboratorio.
**
*/

#include <stdio.h>

int main() {

    int expresion;

    // Primera expresión: 5/2 + 20%6
    expresion = 5 / 2 + 20 % 6;
    printf("La expresion 5/2 + 20%%6 devuelve: %d\n", expresion); // Resultado esperado: 4

    // Segunda expresión: 4*6/2 - 15/2
    expresion = 4 * 6 / 2 - 15 / 2;
    printf("La expresion 4*6/2 - 15/2 devuelve: %d\n", expresion); // Resultado esperado: 6

    // Tercera expresión: 5*15/2/(4 - 2)
    expresion = 5 * 15 / 2 / (4 - 2);
    printf("La expresion 5*15/2/(4 - 2) devuelve: %d\n", expresion); // Resultado esperado: 18

    // Cuarta expresión: 8 == 16 || 7 != 4 && 4 < 1
    expresion = 8 == 16 || 7 != 4 && 4 < 1;
    printf("La expresion 8 == 16 || 7 != 4 && 4 < 1 devuelve: %d\n", expresion); // Resultado esperado: 1 (true)

    // Quinta expresión: (4*3 < 6 || 3 > 5 - 2) && 3 + 2 < 12
    expresion = (4 * 3 < 6 || 3 > 5 - 2) && 3 + 2 < 12;
    printf("La expresion (4*3 < 6 || 3 > 5 - 2) && 3 + 2 < 12 devuelve: %d\n", expresion); // Resultado esperado: 1 (true)

    // Sexta expresión: 2 || 0
    expresion = 2 || 0;
    printf("La expresion 2 || 0 devuelve: %d\n", expresion); // Resultado esperado: 1 (true)

    // Séptima expresión: 1 && 0
    expresion = 1 && 0;
    printf("La expresion 1 && 0 devuelve: %d\n", expresion); // Resultado esperado: 0 (false)

    return 0;
}
