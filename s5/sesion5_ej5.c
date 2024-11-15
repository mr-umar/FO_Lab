/*
** Fichero: sesion5_ej5.c
** Autor: Umar Mohammad Riaz
** Fecha: 13/11/2024
**
** Descripción: Ejercicio 5 de la sesión 5 de laboratorio.
*/

#include <stdio.h>
#define DIM 100

typedef struct {
    char palo;  /* b-bastos, c-copas, e-espadas, o-oros */
    int valor;  /* valor entre 1 y 12 */
} t_carta;

typedef struct {
    int ncartas;           /* número de cartas en la baraja */
    t_carta cartas[DIM];   /* cartas que forman la baraja */
} t_baraja;

// Función para ordenar la baraja
void ordenar_baraja(t_baraja *baraja) {
    int i, j;
    t_carta temp;
    for (i = 0; i < baraja->ncartas - 1; i++) {
        for (j = i + 1; j < baraja->ncartas; j++) {
            // Ordenar por palo, y dentro de cada palo, ordenar por valor
            if (baraja->cartas[i].palo > baraja->cartas[j].palo ||
                (baraja->cartas[i].palo == baraja->cartas[j].palo && baraja->cartas[i].valor > baraja->cartas[j].valor)) {
                temp = baraja->cartas[i];
                baraja->cartas[i] = baraja->cartas[j];
                baraja->cartas[j] = temp;
            }
        }
    }
}

int main()
{
    t_baraja b1;
    int i;
    
    // Leer el número de cartas
    printf("¿Cuántas cartas tiene su baraja? ");
    scanf("%d", &b1.ncartas);
    
    // Leer las cartas
    printf("Introduzca las cartas separadas por guiones (palo-valor):\n");
    for (i = 0; i < b1.ncartas; i++) {
        scanf(" %c-%d", &b1.cartas[i].palo, &b1.cartas[i].valor);
    }

    // Ordenar las cartas
    ordenar_baraja(&b1);

    // Mostrar las cartas ordenadas
    printf("Cartas ordenadas: ");
    for (i = 0; i < b1.ncartas; i++) {
        printf("%c%d", b1.cartas[i].palo, b1.cartas[i].valor);
        if (i < b1.ncartas - 1) {
            printf("-");
        }
    }
    printf("\n");

    return 0;
}
