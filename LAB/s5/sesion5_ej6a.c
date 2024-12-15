/*
** Fichero: sesion5_ej6a.c
** Autor: Umar Mohammad Riaz
** Fecha: 13/11/2024
**
** Descripción: Ejercicio 6a de la sesión 5 de laboratorio.
*/

#include <stdio.h>
#define DIM 100

typedef struct {
  	int  num;        /* número de la matrícula */
  	char letras[3];  /* letras de la matrícula */
} t_matricula;

typedef struct{
   	int nmat;               /* número de matrículas en la lista */
   	t_matricula lmat[DIM];   /* lista de matrículas */
} t_lista_matriculas;

int es_igual(t_matricula m1, t_matricula m2) {
    return (m1.num == m2.num && m1.letras[0] == m2.letras[0] && m1.letras[1] == m2.letras[1] && m1.letras[2] == m2.letras[2]);
}

int existe_en_union(t_lista_matriculas lunion, t_matricula matricula) {
    for (int i = 0; i < lunion.nmat; i++) {
        if (es_igual(lunion.lmat[i], matricula)) {
            return 1;
        }
    }
    return 0;
}

int main()
{
    t_lista_matriculas lista1 = {4, {{1111, {'A', 'B', 'C'}}, {1111, {'A', 'C', 'C'}},
                              {1122, {'A', 'B', 'C'}}, {1134, {'B', 'B', 'C'}}}};
    t_lista_matriculas lista2 = {3, {{2222, {'B', 'D', 'F'}}, {1134, {'B', 'B', 'C'}},
                              {2223, {'B', 'D', 'F'}}}};
    t_lista_matriculas lunion;
    lunion.nmat = 0;

    // Añadir elementos de lista1 a lunion
    for (int i = 0; i < lista1.nmat; i++) {
        if (!existe_en_union(lunion, lista1.lmat[i])) {
            lunion.lmat[lunion.nmat] = lista1.lmat[i];
            lunion.nmat++;
        }
    }

    // Añadir elementos de lista2 a lunion
    for (int i = 0; i < lista2.nmat; i++) {
        if (!existe_en_union(lunion, lista2.lmat[i])) {
            lunion.lmat[lunion.nmat] = lista2.lmat[i];
            lunion.nmat++;
        }
    }

    // Mostrar lista1
    printf("Lista1: ");
    for (int i = 0; i < lista1.nmat; i++) {
        printf("%d-%c%c%c", lista1.lmat[i].num, lista1.lmat[i].letras[0], lista1.lmat[i].letras[1], lista1.lmat[i].letras[2]);
        if (i < lista1.nmat - 1) printf(", ");
    }
    printf("\n");

    // Mostrar lista2
    printf("Lista2: ");
    for (int i = 0; i < lista2.nmat; i++) {
        printf("%d-%c%c%c", lista2.lmat[i].num, lista2.lmat[i].letras[0], lista2.lmat[i].letras[1], lista2.lmat[i].letras[2]);
        if (i < lista2.nmat - 1) printf(", ");
    }
    printf("\n");

    // Mostrar lista union
    printf("Lista union: ");
    for (int i = 0; i < lunion.nmat; i++) {
        printf("%d-%c%c%c", lunion.lmat[i].num, lunion.lmat[i].letras[0], lunion.lmat[i].letras[1], lunion.lmat[i].letras[2]);
        if (i < lunion.nmat - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
