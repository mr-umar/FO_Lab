/*
Ejercicio 1 (Básico): Calcular la suma de los elementos de un vector
Enunciado: Crea un programa en C que:

Pida al usuario que introduzca el tamaño del vector (máximo 10 elementos).
Solicite los elementos del vector.
Calcule y muestre la suma de todos los elementos.
Objetivo: Familiarizarse con el uso de bucles y operaciones básicas sobre vectores.
*/

#include <stdio.h>

int main(){
    int vector[10];
    int i, valor, suma;  

    printf("Añade los valores del vector: ");

    for (i = 0; i < 10; i++){
        scanf("%d", &valor);
        vector[i] = valor;
    }


    for (i = 0; i < 10; i++){
        suma += vector[i];
    }

    printf("\nLa suma es %d", suma);
    
}