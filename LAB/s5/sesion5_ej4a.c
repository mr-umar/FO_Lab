/*
** Fichero: sesion5_ej4a.c
** Autor: Umar Mohammad Riaz
** Fecha: 13/11/2024
**
** Descripción: Ejercicio 4a de la sesión 5 de laboratorio.
*/

#include <stdio.h>
#define DIM 10

typedef struct {
  	int nelem;       /* número de elementos almacenados en el campo vector */
  	int vector[DIM]; /* vector de enteros ordenado de menor a mayor */
} t_vector_int;

int main()
{
    t_vector_int vect = {5, {3, 23, 56, 109, 238}};
    int valor, encontrado = -1;

    printf("Vector inicial: ");
    for (int i = 0; i < vect.nelem; i++) {
        printf("%d", vect.vector[i]);
        if (i < vect.nelem - 1) printf(", ");
    }
    printf("\n");

    printf("Introduzca un valor entero: ");
    scanf("%d", &valor);

    // Buscar el valor en el vector
    for (int i = 0; i < vect.nelem; i++) {
        if (vect.vector[i] == valor) {
            encontrado = i;
            break;
        }
    }

    if (encontrado != -1) {
        printf("Se ha encontrado el valor %d en la posición %d del vector\n", valor, encontrado);
        printf("Procedemos a eliminarlo\n");

        // Eliminar el valor desplazando los elementos
        for (int i = encontrado; i < vect.nelem - 1; i++) {
            vect.vector[i] = vect.vector[i + 1];
        }
        
        // Reducir el número de elementos en el vector
        vect.nelem--;

        // Mostrar el vector actualizado
        printf("Vector: ");
        for (int i = 0; i < vect.nelem; i++) {
            printf("%d", vect.vector[i]);
            if (i < vect.nelem - 1) printf(", ");
        }
        printf("\n");
    } else {
        printf("No se ha encontrado el valor %d en el vector\n", valor);
    }

    return 0;
}
