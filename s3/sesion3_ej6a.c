/*
** Fichero: sesion3_ej6a.c
** Autor: Umar Mohammad Riaz
** Fecha: 09/10/2024
**
** Descripción: Ejercicio 6a de la sesión 3 de laboratorio.
**
*/

# include <stdio.h>

int main(){

    float x, resultado;
    int n, i;

    printf("Introduzca el valor de x (real): ");
    scanf("%f", &x);

    printf("Introduzca el valor de n (natural): ");
    scanf("%d", &n);

    if (n != 0)
        for (i = 1; i <= n; i++){
            resultado *= i;
        }





    return 0;
}