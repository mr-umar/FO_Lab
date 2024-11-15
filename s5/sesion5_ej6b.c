/*
** Fichero: sesion5_ej6b.c
** Autor: Umar Mohammad Riaz
** Fecha: 13/11/2024
**
** Descripción: Ejercicio 6b de la sesión 5 de laboratorio.
*/

#include <stdio.h>
#define DIM 100

typedef struct {
    int num;        /* número de la matrícula */
    char letras[3]; /* letras de la matrícula */
} t_matricula;

typedef struct {
    int nmat;               /* número de matrículas en la lista */
    t_matricula lmat[DIM];  /* lista ORDENADA de matrículas, primero por letra y luego por número */
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
    t_lista_matriculas lunion;
    lunion.nmat = 0;

    int i = 0, j = 0;
    
    // Combinación ordenada de listas
    while (i < lista1.nmat && j < lista2.nmat) {
        if (es_igual(lista1.lmat[i], lista2.lmat[j])) {
            lunion.lmat[lunion.nmat++] = lista1.lmat[i];
            i++;
            j++;
        } else if (lista1.lmat[i].letras[0] < lista2.lmat[j].letras[0] ||
                  (lista1.lmat[i].letras[0] == lista2.lmat[j].letras[0] && lista1.lmat[i].num < lista2.lmat[j].num)) {
            lunion.lmat[lunion.nmat++] = lista1.lmat[i++];
        } else {
            lunion.lmat[lunion.nmat++] = lista2.lmat[j++];
        }
    }

    // Copiar el resto de lista1 o lista2
    while (i < lista1.nmat) {
        lunion.lmat[lunion.nmat++] = lista1.lmat[i++];
    }
    while (j < lista2.nmat) {
        lunion.lmat[lunion.nmat++] = lista2.lmat[j++];
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

    // Mostrar lista union
    printf("Lista union: ");
    for (i = 0; i < lunion.nmat; i++) {
        printf("%d-%c%c%c", lunion.lmat[i].num, lunion.lmat[i].letras[0], lunion.lmat[i].letras[1], lunion.lmat[i].letras[2]);
        if (i < lunion.nmat - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
