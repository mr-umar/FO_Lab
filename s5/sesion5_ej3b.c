/*
** Fichero: sesion5_ej3b.c
** Autor: Umar Mohammad Riaz
** Fecha: 13/11/2024
**
** Descripción: Ejercicio 3b de la sesión 5 de laboratorio.
*/

#include <stdio.h>
#define DIM 10

int main()
{
    int vorden[DIM] = {238, 109, 88, 67, 56, 56, 32, 23, 10, 3};
    int i, valor, encontrado = 0;

    printf("Contenido del vector vorden:\n");
    for (i = 0; i < DIM; i++) {
        printf("vorden[%d] = %d\n", i, vorden[i]);
    }

    printf("\nIntroduzca un valor entero: ");
    scanf("%d", &valor);

    for (i = 0; i < DIM; i++) {
        if (vorden[i] == valor) {
            printf("La primera aparición del valor %d se encuentra en la posición %d del vector\n", valor, i);
            encontrado = 1;
            break;
        } else if (vorden[i] < valor) {
            break;
        }
    }

    if (!encontrado) {
        printf("No se ha encontrado el valor %d en el vector\n", valor);
    }

    return 0;
}
