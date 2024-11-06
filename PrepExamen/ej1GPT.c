/*

Descripción: Escribe un programa en C que lea una secuencia de números enteros desde el teclado.
La secuencia finaliza cuando el usuario introduce el número -1. El programa debe calcular y mostrar
la suma de los números pares y la suma de los números impares de la secuencia. Si la secuencia está 
vacía (solo se introduce -1), el programa debe mostrar un mensaje indicando que no se han introducido
números.


Introduce un número (finaliza con -1): 5
Introduce un número (finaliza con -1): 4
Introduce un número (finaliza con -1): 7
Introduce un número (finaliza con -1): -1
Suma de números pares: 4
Suma de números impares: 12
*/

#include <stdio.h>

int main(){

    int pares = 0, impares = 0, numero = 0;

    
    while (numero != -1) {
        printf("Introduce un numero (finaliza con -1): ");
        scanf("%d", &numero);

        if (numero != -1) { // Solo se suman los números distintos de -1
            if (numero % 2 == 0) {
                pares += numero;
            } else {
                impares += numero;
            }
        }
    }
    
    printf("Suma de numeros pares: %d\n", pares);
    printf("Suma de numeros impares: %d\n", impares);


    return 0;

}