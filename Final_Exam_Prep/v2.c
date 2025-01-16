#include <stdio.h>

int main() {
    int vector[10];  // Declaración del vector con tamaño máximo de 10.
    int i, n, suma = 0;  // Inicialización de las variables.

    // Solicitar al usuario el tamaño del vector
    printf("Introduce el tamaño del vector (máximo 10): ");
    scanf("%d", &n);

    // Validar el tamaño del vector
    if (n <= 0 || n > 10) {
        printf("Error: el tamaño debe estar entre 1 y 10.\n");
        return 1;  // Salir del programa con error.
    }

    // Pedir al usuario que introduzca los valores del vector
    printf("Introduce los %d elementos del vector:\n", n);
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    // Calcular la suma de los elementos del vector
    for (i = 0; i < n; i++) {
        suma += vector[i];
    }

    // Mostrar la suma al usuario
    printf("\nLa suma de los elementos del vector es: %d\n", suma);

    return 0;
}
