/*
** Fichero: sesion6_ej2b.c
** Autor: Umar Mohammad Riaz
** Fecha: 20/11/2024
**
** Descripción: Ejercicio 2b de la sesión 6 de laboratorio.
*/

#include <stdio.h>
#define MAX_CAPITALES 6
#define MAX_CAMINO 10
#define TRUE 1
#define FALSE 0

typedef struct {
    int nciudades;          // número de ciudades que se visitan
    int camino[MAX_CAMINO]; // identificadores de las ciudades que se visitan
} tcamino;

int main() {
    // Matriz distancias con la lista de valores iniciales fila a fila
    int distancias[MAX_CAPITALES][MAX_CAPITALES] = {
        {0, 1720, 456, 1845, 1473, 1093},  // Londres
        {1720, 0, 1272, 1965, 2399, 2322}, // Madrid
        {456, 1272, 0, 1468, 1280, 1054},  // París
        {1845, 1965, 1468, 0, 1130, 1519}, // Roma
        {1473, 2399, 1280, 1130, 0, 682},  // Viena
        {1093, 2322, 1054, 1519, 682, 0}   // Berlín
    };

    tcamino cm;
    int i, distancia_total = 0;

    // Pedimos el número de ciudades a visitar
    do {
        printf("Introduce el número de ciudades a visitar (1 a %d): ", MAX_CAMINO);
        scanf("%d", &cm.nciudades);
    } while (cm.nciudades <= 0 || cm.nciudades > MAX_CAMINO);

    // Pedimos los identificadores de las ciudades del camino
    printf("Introduce el id de las ciudades a visitar (id1, id2, ...): ");
    for (i = 0; i < cm.nciudades; i++) {
        scanf("%d", &cm.camino[i]);
        // Verificar que los identificadores son válidos
        if (cm.camino[i] < 0 || cm.camino[i] >= MAX_CAPITALES) {
            printf("Error: el identificador %d no es válido. Debe estar entre 0 y %d.\n", cm.camino[i], MAX_CAPITALES - 1);
            return 1; // Salimos del programa si hay un identificador inválido
        }
    }

    // Calculamos la distancia total del camino
    for (i = 0; i < cm.nciudades - 1; i++) {
        distancia_total += distancias[cm.camino[i]][cm.camino[i + 1]];
    }

    // Mostramos el resultado
    printf("La distancia del camino es: %d\n", distancia_total);

    return 0;
}
