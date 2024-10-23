/*
** Fichero: sesion4_ej3a.c
** Autor: Umar Mohammad Riaz
** Fecha: 23/10/2024
**
** Descripción: Ejercicio 3a de la sesión 4 de laboratorio.
**
*/

#include <stdio.h>

typedef struct { 
    unsigned int hh;  /* Horas */ 
    unsigned int mm;  /* Minutos */ 
    unsigned int ss;  /* Segundos */ 
} texpr_horaria;


int main() {

    texpr_horaria hh, mm, ss;

    printf("Expresion horaria (hh mm ss): ");
    scanf(" (%u,%u,%u)", &hh, &mm, &ss);

    printf("Segundos: ", texpr_horaria.hh)




    return 0;
}

/*
** Fichero: sesion4_ej3a.c
** Autor: Umar Mohammad Riaz
** Fecha: 23/10/2024
**
** Descripción: Ejercicio 3a de la sesión 4 de laboratorio.
**
*/

#include <stdio.h>

typedef struct {
    unsigned int hh;  // Horas
    unsigned int mm;  // Minutos
    unsigned int ss;  // Segundos
} texpr_horaria;

int main() {
    texpr_horaria tiempo;
    unsigned int totalSegundos;

    printf("Expresion horaria (hh mm ss): ");
    scanf("%u %u %u", &tiempo.hh, &tiempo.mm, &tiempo.ss);

    totalSegundos = tiempo.hh * 3600 + tiempo.mm * 60 + tiempo.ss;

    printf("Segundos: %u\n", totalSegundos);

    return 0;
}
