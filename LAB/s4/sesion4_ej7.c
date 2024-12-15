/*
** Fichero: sesion4_ej7.c
** Autor: Umar Mohammad Riaz
** Fecha: 23/10/2024
**
** Descripción: Ejercicio 7 de la sesión 4 de laboratorio.
**
*/

#include <stdio.h>

typedef struct {
    int id;
    float superficie;
    int habitantes;
    float edad_media;
    int mes_fundacion;
    int anio_fundacion;
    char tipo;
} tciudad;

int main() {
    tciudad ciudades[10];
    float superficie_total = 0;
    int total_habitantes = 0;
    int max_superficie_index = 0, min_superficie_index = 0;

    for (int i = 0; i < 10; i++) {
        printf("Identificador: ");
        scanf("%d", &ciudades[i].id);

        printf("Superficie: ");
        scanf("%f", &ciudades[i].superficie);

        printf("Numero de habitantes: ");
        scanf("%d", &ciudades[i].habitantes);

        printf("Edad media: ");
        scanf("%f", &ciudades[i].edad_media);

        do {
            printf("Mes de fundacion (1-12): ");
            scanf("%d", &ciudades[i].mes_fundacion);
        } while (ciudades[i].mes_fundacion < 1 || ciudades[i].mes_fundacion > 12);

        printf("Año de fundacion: ");
        scanf("%d", &ciudades[i].anio_fundacion);

        printf("Costera o Interior (C/I): ");
        scanf(" %c", &ciudades[i].tipo);

        superficie_total += ciudades[i].superficie;
        total_habitantes += ciudades[i].habitantes;

        if (ciudades[i].superficie > ciudades[max_superficie_index].superficie) {
            max_superficie_index = i;
        }
        if (ciudades[i].superficie < ciudades[min_superficie_index].superficie) {
            min_superficie_index = i;
        }
    }

    printf("Superficie media: %.2f\n", superficie_total / 10);
    printf("Total habitantes: %d\n", total_habitantes);

    printf("\nCiudad de mayor superficie:\n");
    printf("Id = %d, superficie = %.2f, poblacion = %d, edad media = %.2f, fundacion = %02d%04d, tipo = %c\n",
           ciudades[max_superficie_index].id, ciudades[max_superficie_index].superficie,
           ciudades[max_superficie_index].habitantes, ciudades[max_superficie_index].edad_media,
           ciudades[max_superficie_index].mes_fundacion, ciudades[max_superficie_index].anio_fundacion,
           ciudades[max_superficie_index].tipo);

    printf("\nCiudad de menor superficie:\n");
    printf("Id = %d, superficie = %.2f, poblacion = %d, edad media = %.2f, fundacion = %02d%04d, tipo = %c\n",
           ciudades[min_superficie_index].id, ciudades[min_superficie_index].superficie,
           ciudades[min_superficie_index].habitantes, ciudades[min_superficie_index].edad_media,
           ciudades[min_superficie_index].mes_fundacion, ciudades[min_superficie_index].anio_fundacion,
           ciudades[min_superficie_index].tipo);

    return 0;
}
