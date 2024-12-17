#include <stdio.h>

#define MAX_ALUMNOS 15
#define MAX_NOMBRE 50

typedef struct {
    char nombre[MAX_NOMBRE];
    int edad;
    char sexo;
} talumno;

void leer_alumno(talumno *a);
int comparar_cadenas(char cad1[], char cad2[]);
int insertar_alumno(talumno lista[], int *n, talumno nuevo);
void listar_alumnos(talumno lista[], int n, int emin, int emax);

int main() {
    talumno lista[MAX_ALUMNOS];
    int n = 0, emin, emax;
    talumno nuevo;

    // Leer el rango de edades
    printf("Introduzca la edad mínima: ");
    scanf("%d", &emin);
    printf("Introduzca la edad máxima: ");
    scanf("%d", &emax);

    // Insertar alumnos
    printf("Introduce un alumno:\n");
    leer_alumno(&nuevo);

    if (insertar_alumno(lista, &n, nuevo)) {
        printf("Alumno insertado correctamente.\n");
    } else {
        printf("Error: Alumno duplicado.\n");
    }

    // Listar alumnos en el rango
    printf("Alumnos entre %d y %d años:\n", emin, emax);
    listar_alumnos(lista, n, emin, emax);

    return 0;
}

void leer_alumno(talumno *a) {
    printf("Introduce el nombre: ");
    scanf("%49s", a->nombre);
    printf("Introduce la edad: ");
    scanf("%d", &a->edad);
    printf("Introduce el sexo (M/F): ");
    scanf(" %c", &a->sexo);
}

int comparar_cadenas(char cad1[], char cad2[]) {
    int i = 0;
    while (cad1[i] != '\0' && cad2[i] != '\0') {
        if (cad1[i] != cad2[i]) {
            return 0;
        }
        i++;
    }
    return cad1[i] == '\0' && cad2[i] == '\0';
}

int insertar_alumno(talumno lista[], int *n, talumno nuevo) {
    for (int i = 0; i < *n; i++) {
        if (comparar_cadenas(lista[i].nombre, nuevo.nombre)) {
            return 0; // Alumno duplicado
        }
    }
    lista[*n] = nuevo;
    (*n)++;
    return 1;
}

void listar_alumnos(talumno lista[], int n, int emin, int emax) {
    int encontrado = 0;
    for (int i = 0; i < n; i++) {
        if (lista[i].edad >= emin && lista[i].edad <= emax) {
            printf("- Nombre: %s, Edad: %d\n", lista[i].nombre, lista[i].edad);
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("No hay alumnos en ese rango de edad.\n");
    }
}
