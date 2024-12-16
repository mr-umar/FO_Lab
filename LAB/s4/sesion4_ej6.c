/*
** Fichero: sesion4_ej6.c
** Autor: Umar Mohammad Riaz
** Fecha: 23/10/2024
**
** Descripción: Ejercicio 6 de la sesión 4 de laboratorio.
**
*/


#include <stdio.h>


typedef struct {
    int id;
    float nota_promedio;
    int fecha_nacimiento;
    int num_asignaturas_aprobadas;
} testudiante;

int main() {
    testudiante estudiante, estudiante_max;
    int total_estudiantes_nota_alta = 0;

    estudiante_max.num_asignaturas_aprobadas = -1;

    while (1) {
        printf("Id del estudiante: ");
        scanf("%d", &estudiante.id);

        if (estudiante.id == -1) {
            break;
        }

        printf("Nota promedio: ");
        scanf("%f", &estudiante.nota_promedio);

        printf("Fecha nacimiento (aaaammdd): ");
        scanf("%d", &estudiante.fecha_nacimiento);

        printf("Total de asignaturas aprobadas: ");
        scanf("%d", &estudiante.num_asignaturas_aprobadas);

        if (estudiante.num_asignaturas_aprobadas >= estudiante_max.num_asignaturas_aprobadas) {
            estudiante_max = estudiante;
        }

        if (estudiante.nota_promedio > 8.5 && estudiante.num_asignaturas_aprobadas > 10) {
            total_estudiantes_nota_alta++;
        }
    }

    if (estudiante_max.num_asignaturas_aprobadas == -1) {
        printf("No se han ingresado estudiantes\n");
    } else {
        printf("\nEstudiante con mas asignaturas aprobadas:\n");
        printf("Id: %d\n", estudiante_max.id);
        printf("Nota promedio: %.2f\n", estudiante_max.nota_promedio);
        printf("Fecha nacimiento: %d\n", estudiante_max.fecha_nacimiento);
        printf("Total de asignaturas aprobadas: %d\n", estudiante_max.num_asignaturas_aprobadas);

        printf("\nTotal de estudiantes con nota > 8.5 y mas de 10 asignaturas aprobadas: %d\n", total_estudiantes_nota_alta);
    }

    return 0;
}
