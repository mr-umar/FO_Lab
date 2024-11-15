/*
** Fichero: sesion5_ej6c.c
** Autor: Umar Mohammad Riaz
** Fecha: 13/11/2024
**
** Descripción: Ejercicio 6c de la sesión 5 de laboratorio.
*/

#include <stdio.h>
#define DIM 100

typedef struct {
    int num;        /* numero de la matricula */
    char letras[3]; /* letras de la matricula */
} t_matricula;

typedef struct {
    int nmat;               /* numero de matriculas en la lista */
    t_matricula lmat[DIM];  /* lista ORDENADA de matriculas, primero por letra y luego por numero */
} t_lista_matriculas;

// Función para comparar dos matrículas
int es_igual(t_matricula m1, t_matricula m2) {
    return (m1.num == m2.num && m1.letras[0] == m2.letras[0] && m1.letras[1] == m2.letras[1] && m1.letras[2] == m2.letras[2]);
}

int main()
{
    t_lista_matriculas lista1 = {5, {{1111, {'A', 'B', 'C'}}, {1122, {'A', 'B', 'C'}},
                                     {1111, {'A', 'C', 'C'}}, {234, {'A', 'D', 'A'}},
                                     {1134, {'B', 'B', 'C'}}}};
    t_lista_matriculas lista2 = {4, {{1112, {'A', 'B', 'C'}}, {1111, {'A', 'C', 'C'}},
                                     {1134, {'B', 'B', 'C'}}, {333, {'F', 'D', 'A'}}}};
    t_lista_matriculas linter;
    linter.nmat = 0;

    int i = 0, j = 0;
    
    // Buscar intersección entre lista1 y lista2
    while (i < lista1.nmat && j < lista2.nmat) {
        if (es_igual(lista1.lmat[i], lista2.lmat[j])) {
            linter.lmat[linter.nmat++] = lista1.lmat[i];
            i++;
            j++;
        } else if (lista1.lmat[i].letras[0] < lista2.lmat[j].letras[0] ||
                  (lista1.lmat[i].letras[0] == lista2.lmat[j].letras[0] && lista1.lmat[i].num < lista2.lmat[j].num)) {
            i++;
        } else {
            j++;
        }
    }

    // Mostrar lista1
    printf("Lista1: ");
    for (i = 0; i < lista1.nmat; i++) {
        printf("%d-%c%c%c", lista1.lmat[i].num, lista1.lmat[i].letras[0], lista1.lmat[i].letras[1], lista1.lmat[i].letras[2]);
        if (i < lista1.nmat - 1) printf(", ");
    }
    printf("\n");

    // Mostrar lista2
    printf("Lista2: ");
    for (j = 0; j < lista2.nmat; j++) {
        printf("%d-%c%c%c", lista2.lmat[j].num, lista2.lmat[j].letras[0], lista2.lmat[j].letras[1], lista2.lmat[j].letras[2]);
        if (j < lista2.nmat - 1) printf(", ");
    }
    printf("\n");

    // Mostrar lista intersección
    if (linter.nmat == 0) {
        printf("Lista interseccion: LISTA VACIA\n");
    } else {
        printf("Lista interseccion: ");
        for (i = 0; i < linter.nmat; i++) {
            printf("%d-%c%c%c", linter.lmat[i].num, linter.lmat[i].letras[0], linter.lmat[i].letras[1], linter.lmat[i].letras[2]);
            if (i < linter.nmat - 1) printf(", ");
        }
        printf("\n");
    }

    return 0;
}
