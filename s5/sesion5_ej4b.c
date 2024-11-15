/*
** Fichero: sesion5_ej4b.c
** Autor: Umar Mohammad Riaz
** Fecha: 13/11/2024
**
** Descripción: Ejercicio 4b de la sesión 5 de laboratorio.
*/

#include <stdio.h>
#define DIM 10

typedef struct {
  	int nelem;       /* número de elementos almacenados en el campo vector */
 	int vector[DIM]; /* vector de enteros ordenado de menor a mayor */
} t_vector_int;

int main()
{
    t_vector_int vect = {6, {3, 10, 23, 56, 109, 238}};
    int valor, encontrado = -1, i, j;

    printf("Vector inicial: ");
    for (i = 0; i < vect.nelem; i++) {
        printf("%d", vect.vector[i]);
        if (i < vect.nelem - 1) printf(", ");
    }
    printf("\n");

    printf("Introduzca un valor entero: ");
    scanf("%d", &valor);

    // Buscar el valor en el vector
    for (i = 0; i < vect.nelem; i++) {
        if (vect.vector[i] == valor) {
            encontrado = i;
            break;
        }
    }

    if (encontrado != -1) {
        printf("Se ha encontrado el valor %d en la posición %d del vector\n", valor, encontrado);
    } else {
        if (vect.nelem == DIM) {
            printf("El vector ya tiene %d elementos y está lleno.\n", DIM);
            printf("No se puede insertar el nuevo valor.\n");
        } else {
            // Determinar la posición donde insertar el nuevo valor
            for (i = 0; i < vect.nelem; i++) {
                if (vect.vector[i] > valor) {
                    break;
                }
            }

            // Desplazar los elementos hacia la derecha para hacer espacio
            for (j = vect.nelem; j > i; j--) {
                vect.vector[j] = vect.vector[j - 1];
            }

            // Insertar el nuevo valor en la posición encontrada
            vect.vector[i] = valor;
            vect.nelem++;

            printf("No se ha encontrado el valor %d en el vector\n", valor);
            printf("Procedemos a insertarlo en la posición %d\n", i);

            // Mostrar el vector actualizado
            printf("Vector: ");
            for (i = 0; i < vect.nelem; i++) {
                printf("%d", vect.vector[i]);
                if (i < vect.nelem - 1) printf(", ");
            }
            printf("\n");
        }
    }

    return 0;
}
