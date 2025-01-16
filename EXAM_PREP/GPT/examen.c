#include <stdio.h>
#define MAX_NOM 20
#define MAX_JUG 11

typedef struct {
    char nombre[MAX_NOM];
    int edad;
    char nac; /* Valores posibles c, e  para indicar que son
                comunitarios, extracomunitarios */
} tjugador;

typedef struct {
    int nelems;
    tjugador jugs[MAX_JUG];
} tlista;

void leer_cadena(char cad[MAX_NOM]);
void mostrar_cadena(char cad[MAX_NOM]);
int compara_cadena(char cad1[MAX_NOM], char cad2[MAX_NOM]);
tjugador leer_jugador();
void mostrar_jugador(tjugador j);
void listar_jugadores_extracomunitarios(tlista lj);
int insertar_jugador(tlista *lj, tjugador j);

main() {
    tlista c = {3, { {"Samuel Itoo\n", 25, 'e'}, {"Armando Guerra\n", 26, 'c'}, {"Paco Perez\n", 17, 'c'} }};
    tjugador j;
    int res;
    listar_jugadores_extracomunitarios(c);
    a = leer_jugador();
    if (insertar_jugador(&c, a))
        printf("\nJugador insertado\n");
    else
        printf("\nJugador no insertado\n");
}

void leer_cadena(char cad[MAX_NOM]) {
    int i = 0;
    scanf("%c", &cad[i]);
    while (cad[i] != '\n') {
        i++;
        scanf("%c", &cad[i]);
    }
}

void mostrar_cadena(char cad[MAX_NOM]) {
    int i = 0;
    while (cad[i] != '\n') {
        printf("%c", cad[i]);
        i++;
    }
}

int compara_cadena(char cad1[MAX_NOM], char cad2[MAX_NOM]) {
    int res = 0, i = 0;
    while (cad1[i] == cad2[i] && i < MAX_NOM & cad1[i] != '\n')
        i++;
    if (cad1[i] == cad2[i])
        res = 1;
    return res;
}

tjugador leer_jugador() {
    tjugador j;
    printf("\nIntroduce nombre del jugador: ");
    leer_cadena(j.nombre);
    printf("Introduce la edad del jugador: ");
    scanf("%d%*c", &j.edad);
    printf("Introduce la nacionalidad del jugador (c, e): ");
    scanf("%c%*c", &j.nac);
    while (j.nac != 'c' && j.nac != 'e') {
        printf("Nacionalidad erronea. Introduce la nacionalidad del jugador (c, e):");
        scanf("%c%*c", &j.nac);
    }
    return j;
}

void mostrar_jugador(tjugador j) {
    printf("\nNombre del jugador: ");
    mostrar_cadena(j.nombre);
    printf("\nEdad del jugador: ");
    printf("%d", j.edad);
    printf("\nNacionalidad del jugador: ");
    printf("%c", j.nac);
}

void listar_jugadores_extracomunitarios(tlista lj) {
    int i, hay = 0;
    if (lj.nelems == 0) {
        printf("No hay jugadores extracomunitarios\n");
        return;
    }
    for (i = 0; i < lj.nelems; i++) {
        if (lj.jugs[i].nac == 'e' && lj.jugs[i].edad >= 18) {
            if (!hay) {
                hay = 1;
                printf("Los jugadores extracomunitarios mayores de edad son:");
            }
            mostrar_jugador(lj.jugs[i]);
        }
    }
}

int insertar_jugador(tlista *lj, tjugador j) {
    int res = 0, i = 0;
    if (lj->nelems == MAX_JUG)
        return res;
    while (compara_cadena(lj->jugs[i].nombre, j.nombre) == 0 && i < lj->nelems)
        i++;
    /* No he encontrado el jugador en la lista, lo añado */
    if (i == lj->nelems) {
        lj->jugs[lj->nelems] = j;
        lj->nelems++;
        res = 1;
    }
    return res;
}
