/*
** Fichero: sesion5_ej3a.c
** Autor: Umar Mohammad Riaz
** Fecha: 13/11/2024
**
** Descripción: Ejercicio 3a de la sesión 5 de laboratorio.
*/

#include <stdio.h>
#define DIM 10

int main()
{
    int vdesord[DIM] = {3, 56, 23, 109, 238, 32, 56, 67, 10, 88};
    int i, valor, encontrado = 0;

    printf("Contenido del vector vdesord:\n");
    for (i = 0; i < DIM; i++) {
        printf("vdesord[%d] = %d\n", i, vdesord[i]);
    }

    printf("\nIntroduzca un valor entero: ");
    scanf("%d", &valor);

    for (i = 0; i < DIM; i++) {
        if (vdesord[i] == valor) {
            printf("La primera aparición del valor %d se encuentra en la posición %d del vector\n", valor, i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("No se ha encontrado el valor %d en el vector\n", valor);
    }

    return 0;
}
