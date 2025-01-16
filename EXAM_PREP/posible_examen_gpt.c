#include <stdio.h>

#define NUM_FICHAS_DOMINO 28

// Definición de la estructura para una ficha de dominó
typedef struct {
    int a, b; // Los dos extremos de la ficha
} t_ficha;

// Definición de la estructura para una pila de fichas
typedef struct {
    int n_fichas;
    t_ficha f[NUM_FICHAS_DOMINO];
} t_pila;

// Prototipos de funciones
void imprimir_ficha(t_ficha f);
void imprimir_pila(t_pila p);
t_pila sacar_dobles(t_pila *p);
void ordenar_pila(t_pila *p);

// Función principal
int main() {
    t_pila pila = {28, {
        {3, 6}, {4, 6}, {1, 2}, {3, 4}, {0, 6}, {6, 6}, {3, 5}, {1, 1}, 
        {0, 0}, {1, 3}, {1, 4}, {1, 6}, {2, 3}, {4, 5}, {2, 6}, {5, 5}, 
        {0, 3}, {2, 2}, {0, 4}, {2, 5}, {3, 3}, {1, 5}, {4, 4}, {0, 5}, 
        {2, 4}, {0, 2}, {5, 6}, {0, 1}
    }};
    
    t_pila dobles;

    printf("Pila de fichas original:\n");
    imprimir_pila(pila);

    dobles = sacar_dobles(&pila);
    printf("\nPila de dobles extraidos:\n");
    imprimir_pila(dobles);

    printf("\nPila sin dobles:\n");
    imprimir_pila(pila);

    ordenar_pila(&dobles);
    printf("\nPila de dobles ordenada:\n");
    imprimir_pila(dobles);

    return 0;
}

// Función que imprime una ficha
void imprimir_ficha(t_ficha f) {
    printf("%d:%d", f.a, f.b);
}

// Función que imprime la pila completa con '|' en los extremos y entre fichas
void imprimir_pila(t_pila p) {
    int i;

    if (p.n_fichas == 0) {
        printf("|\n");
        return;
    }

    printf("|"); // Primer '|'
    for (i = 0; i < p.n_fichas; i++) {
        printf("%d:%d|", p.f[i].a, p.f[i].b); // Imprime cada ficha con '|'
    }
    printf("\n");
}


// Función que extrae las fichas dobles de una pila
t_pila sacar_dobles(t_pila *p) {
    t_pila dobles;
    dobles.n_fichas = 0;

    for (int i = 0; i < p->n_fichas; i++) {
        if (p->f[i].a == p->f[i].b) {
            dobles.f[dobles.n_fichas++] = p->f[i];

            // Eliminar ficha doble de la pila original
            for (int j = i; j < p->n_fichas - 1; j++) {
                p->f[j] = p->f[j + 1];
            }
            p->n_fichas--;
            i--;
        }
    }

    return dobles;
}

// Función que ordena una pila de fichas dobles de menor a mayor
void ordenar_pila(t_pila *p) {
    t_ficha temp;

    for (int i = 0; i < p->n_fichas - 1; i++) {
        for (int j = i + 1; j < p->n_fichas; j++) {
            if (p->f[i].a > p->f[j].a) {
                temp = p->f[i];
                p->f[i] = p->f[j];
                p->f[j] = temp;
            }
        }
    }
}