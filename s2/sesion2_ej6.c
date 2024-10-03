/*
** Fichero: sesion2_ej6.c
** Autor: Umar Mohammad Riaz
** Fecha: 25/09/2024
**
** Descripcion: Ejercicio 6 de la sesión 2 de laboratorio.
**
*/

#include <stdio.h>

int main(){

    int segundosUsuario, horas, minutos, segundos;

    //recibir segs
    printf("> Introduzca la cantidad en segundos: ");
    scanf("%d", &segundosUsuario);

    // conversión
    horas = segundosUsuario / 3600;
    minutos = (segundosUsuario % 3600) / 60;
    segundos = segundosUsuario % 60;

    // mostrar hora final
    printf("%dh %dm %ds\n", horas, minutos, segundos);

    return 0;
}