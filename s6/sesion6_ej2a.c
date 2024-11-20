/*
** Fichero: sesion6_ej2a.c
** Autor: Umar Mohammad Riaz
** Fecha: 20/11/2024
**
** Descripción: Ejercicio 2a de la sesión 6 de laboratorio.
*/

#include <stdio.h>
#define MAX_CAPITALES 6  // Aumentamos a 6 para incluir Berlín

int main()
{
    // Matriz distancias con la lista de valores iniciales fila a fila
    int distancias[MAX_CAPITALES][MAX_CAPITALES] = {
        {0, 1720, 456, 1845, 1473, 1093},  // Londres
        {1720, 0, 1272, 1965, 2399, 2322}, // Madrid
        {456, 1272, 0, 1468, 1280, 1054},  // París
        {1845, 1965, 1468, 0, 1130, 1519}, // Roma
        {1473, 2399, 1280, 1130, 0, 682},  // Viena
        {1093, 2322, 1054, 1519, 682, 0}   // Berlín
    };

    int id1, id2;

    // Pedimos al usuario los identificadores de las capitales
    printf("Introduce el identificador de las dos capitales (id1, id2): ");
    scanf("%d, %d", &id1, &id2);

    // Comprobar que los identificadores están en rango
    if (id1 >= 0 && id1 < MAX_CAPITALES && id2 >= 0 && id2 < MAX_CAPITALES) {
        printf("La distancia entre las capitales %d y %d es %d\n", id1, id2, distancias[id1][id2]);
    } else {
        printf("Error: los identificadores deben estar entre 0 y %d.\n", MAX_CAPITALES - 1);
    }

    return 0;
}
