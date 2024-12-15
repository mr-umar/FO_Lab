/*
** Fichero: sesion7_ej5.c
** Autor: Umar Mohammad Riaz
** Fecha: 27/12/2024
**
** Descripción: Ejercicio 5 de la sesión 7 de laboratorio.
** Implementación de la función para eliminar un elemento de un vector
** y programa principal para gestionar la interacción con el usuario.
*/

#include <stdio.h>

#define MAX 100

typedef struct {
    int nelem;            /* Cantidad de elementos del vector */
    int vector[MAX];      /* Elementos del vector */
} t_vector;

int eliminar_elemento(int elem, t_vector *v);

int main() {
    t_vector v = {16, {3, 15, 19, 19, 23, 32, 38, 53, 123, 321, 543, 1000, 1123, 6578, 6660, 7999}};
    int elem, eliminados;

    printf("Numero a eliminar: ");
    scanf("%d", &elem);

    eliminados = eliminar_elemento(elem, &v);

    if (eliminados > 0) {
        printf("Se han eliminado %d elementos\n", eliminados);
        printf("Elementos del vector: ");
        for (int i = 0; i < v.nelem; i++) {
            printf("%d%s", v.vector[i], (i == v.nelem - 1) ? "\n" : ", ");
        }
    } else {
        printf("Elemento no eliminado\n");
    }

    return 0;
}

int eliminar_elemento(int elem, t_vector *v) {
    int count = 0;

    for (int i = 0; i < v->nelem; ) {
        if (v->vector[i] == elem) {
            count++;
            for (int j = i; j < v->nelem - 1; j++) {
                v->vector[j] = v->vector[j + 1];
            }
            v->nelem--;
        } else {
            i++;
        }
    }

    return count;
}
