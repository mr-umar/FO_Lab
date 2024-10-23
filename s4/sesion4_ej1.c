/*
** Fichero: sesion4_ej1.c
** Autor: Umar Mohammad Riaz
** Fecha: 23/10/2024
**
** Descripción: Ejercicio 1 de la sesión 4 de laboratorio.
**
*/

#include <stdio.h>

typedef struct {
    float profundidad;
    float largo;
    float ancho;
    float ph;
    float volumen;
    float temperatura;
    int numCarriles;
    float anchoCarril;
    char usoDeportivo;
} tpiscina;

int main() {
    tpiscina p = {2.5, 50.0, 21.0, 6.5, 2625.0, 26.5, 8, 250.0, 'N'};

    if (p.ancho != p.numCarriles * p.anchoCarril) {
        printf("Ancho de la piscina no es correcto: inicial = %.1f calculado = %.1f\n", p.ancho, p.numCarriles * p.anchoCarril);
        p.ancho = p.numCarriles * p.anchoCarril;
        printf("Se ha modificado el ancho de la piscina\n");
    }

    if (p.volumen != p.largo * p.ancho * p.profundidad) {
        printf("Volumen de la piscina no es correcto: inicial = %.1f calculado = %.1f\n", p.volumen, p.largo * p.ancho * p.profundidad);
        p.volumen = p.largo * p.ancho * p.profundidad;
        printf("Se ha modificado el volumen de la piscina\n");
    }

    printf("********************* Caracteristicas de la piscina *********************\n");
    printf("Profundidad = %.1f  Largo = %.1f   Ancho = %.1f\n", p.profundidad, p.largo, p.ancho);
    printf("Ph = %.1f   Volumen = %.1f   Temperatura = %.1f\n", p.ph, p.volumen, p.temperatura);
    printf("Carriles = %d  Ancho del carril = %.1f Uso deportivo = %c\n", p.numCarriles, p.anchoCarril, p.usoDeportivo);
    printf("*************************************************************************\n");

    return 0;
}
