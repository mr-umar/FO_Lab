#include <stdio.h>


void menu(int *userChoice) {
    do {
        printf("*** MENÚ DE GESTIÓN DE VIDEOJUEGOS ***\n");
        printf("1. Añadir un videojuego\n");
        printf("2. Buscar un videojuego\n");
        printf("3. Eliminar un videojuego\n");
        printf("4. Listar videojuegos por género\n");
        printf("5. Mostrar videojuego más caro\n");
        printf("6. Salir\n");
        printf("> OPCIÓN: ");
        scanf("%d", userChoice);

        // Mensaje de error si la opción no es válida
        if (*userChoice < 1 || *userChoice > 6) {
            printf("Error: Opción no válida. Intente de nuevo.\n");
        }
    } while (*userChoice < 1 || *userChoice > 6);
}


int main() {
    int userChoice;

    menu(&userChoice);

    printf("RESPUESTA = %d", userChoice);
}