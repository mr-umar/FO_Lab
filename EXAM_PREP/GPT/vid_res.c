#include <stdio.h>

#define MAX_JUEGOS 100
#define MAX_NOMBRE 50

// Estructura para representar un videojuego
typedef struct {
    char nombre[MAX_NOMBRE];
    int fecha;      // Fecha en formato ddmmaaaa
    char genero;    // A: Acción, D: Deportes, C: Conducción
    float precio;   // Precio del videojuego
} tjuego;

// Estructura para manejar la lista de videojuegos
typedef struct {
    tjuego juegos[MAX_JUEGOS];
    int cantidad;
} tlista_juegos;

// Funciones auxiliares
int comparar_cadenas(char s1[], char s2[]);
void copiar_cadena(char destino[], char origen[]);

// Funciones principales
void menu(int *opcion);
void añadir_juego(tlista_juegos *lista);
int buscar_juego(tlista_juegos lista, char nombre[]);
void eliminar_juego(tlista_juegos *lista, char nombre[]);
void listar_juegos_por_genero(tlista_juegos lista, char genero);
void mostrar_juego_mas_caro(tlista_juegos lista);

int main() {
    tlista_juegos lista = {0}; // Inicializamos la lista vacía
    int opcion;
    char nombre[MAX_NOMBRE];
    char genero;

    do {
        menu(&opcion);

        switch (opcion) {
            case 1:
                añadir_juego(&lista);
                break;
            case 2:
                printf("Introduce el nombre del videojuego a buscar: ");
                scanf("%s", nombre);
                if (buscar_juego(lista, nombre) != -1)
                    printf("El videojuego existe en la biblioteca.\n");
                else
                    printf("El videojuego no existe.\n");
                break;
            case 3:
                printf("Introduce el nombre del videojuego a eliminar: ");
                scanf("%s", nombre);
                eliminar_juego(&lista, nombre);
                break;
            case 4:
                printf("Introduce el género a listar (A = Acción, D = Deportes, C = Conducción): ");
                scanf(" %c", &genero);
                listar_juegos_por_genero(lista, genero);
                break;
            case 5:
                mostrar_juego_mas_caro(lista);
                break;
            case 6:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Error: Opción no válida.\n");
        }
    } while (opcion != 6);

    return 0;
}

// Función para mostrar el menú
void menu(int *opcion) {
    do {
        printf("\n*** MENÚ DE GESTIÓN DE VIDEOJUEGOS ***\n");
        printf("1. Añadir un videojuego\n");
        printf("2. Buscar un videojuego\n");
        printf("3. Eliminar un videojuego\n");
        printf("4. Listar videojuegos por género\n");
        printf("5. Mostrar videojuego más caro\n");
        printf("6. Salir\n");
        printf("> OPCIÓN: ");
        scanf("%d", opcion);

        if (*opcion < 1 || *opcion > 6)
            printf("Error: Opción no válida. Intente de nuevo.\n");
    } while (*opcion < 1 || *opcion > 6);
}

// Función para añadir un videojuego
void añadir_juego(tlista_juegos *lista) {
    if (lista->cantidad >= MAX_JUEGOS) {
        printf("Error: No se pueden añadir más videojuegos.\n");
        return;
    }

    tjuego nuevo;
    printf("Introduce el nombre del videojuego: ");
    scanf("%s", nuevo.nombre);
    printf("Introduce la fecha de venta (ddmmaaaa): ");
    scanf("%d", &nuevo.fecha);
    printf("Introduce el género (A = Acción, D = Deportes, C = Conducción): ");
    scanf(" %c", &nuevo.genero);
    printf("Introduce el precio: ");
    scanf("%f", &nuevo.precio);

    if (buscar_juego(*lista, nuevo.nombre) != -1) {
        printf("Error: El videojuego ya existe.\n");
        return;
    }

    lista->juegos[lista->cantidad] = nuevo;
    lista->cantidad++;
    printf("Videojuego añadido correctamente.\n");
}

// Función para buscar un videojuego por nombre
int buscar_juego(tlista_juegos lista, char nombre[]) {
    for (int i = 0; i < lista.cantidad; i++) {
        if (comparar_cadenas(lista.juegos[i].nombre, nombre))
            return i;
    }
    return -1; // No encontrado
}

// Función para eliminar un videojuego
void eliminar_juego(tlista_juegos *lista, char nombre[]) {
    int pos = buscar_juego(*lista, nombre);
    if (pos == -1) {
        printf("Error: El videojuego no existe.\n");
        return;
    }

    for (int i = pos; i < lista->cantidad - 1; i++) {
        lista->juegos[i] = lista->juegos[i + 1];
    }
    lista->cantidad--;
    printf("Videojuego eliminado correctamente.\n");
}

// Función para listar videojuegos por género
void listar_juegos_por_genero(tlista_juegos lista, char genero) {
    int encontrados = 0;
    for (int i = 0; i < lista.cantidad; i++) {
        if (lista.juegos[i].genero == genero) {
            printf("- Nombre: %s, Fecha: %d, Precio: %.2f\n",
                   lista.juegos[i].nombre, lista.juegos[i].fecha, lista.juegos[i].precio);
            encontrados = 1;
        }
    }
    if (!encontrados)
        printf("No hay videojuegos de ese género.\n");
}

// Función para mostrar el videojuego más caro
void mostrar_juego_mas_caro(tlista_juegos lista) {
    if (lista.cantidad == 0) {
        printf("Error: No hay videojuegos en la lista.\n");
        return;
    }

    tjuego masCaro = lista.juegos[0];
    for (int i = 1; i < lista.cantidad; i++) {
        if (lista.juegos[i].precio > masCaro.precio)
            masCaro = lista.juegos[i];
    }

    printf("El videojuego más caro es:\n");
    printf("- Nombre: %s, Fecha: %d, Precio: %.2f\n",
           masCaro.nombre, masCaro.fecha, masCaro.precio);
}

// Función para comparar cadenas (strcmp manual)
int comparar_cadenas(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return 0; // No son iguales
        i++;
    }
    return s1[i] == '\0' && s2[i] == '\0';
}

// Función para copiar cadenas (strcpy manual)
void copiar_cadena(char destino[], char origen[]) {
    int i = 0;
    while (origen[i] != '\0') {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0';
}
