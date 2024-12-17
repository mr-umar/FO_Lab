#include <stdio.h>

int menu(int *userChoice) {

    printf("*** MENÚ DE GESTIÓN DE VIDEOJUEGOS ***\n");
    printf("1. Añadir un videojuego\n");
    printf("2. Buscar un videojuego\n");
    printf("3. Eliminar un videojuego\n");
    printf("4. Listar videojuegos por genero\n");

    return scanf("%d", *userChoice);

}

int main() {
    int userChoice;

    menu(userChoice);

    printf("RESPUESTA = %d", userChoice);
}