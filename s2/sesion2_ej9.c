/*
** Fichero: sesion2_ej9.c
** Autor: Umar Mohammad Riaz
** Fecha: 03/10/2024
**
** Descripcion: Ejercicio 9 de la sesión 2 de laboratorio.
**
*/

#include <stdio.h>


int main(){

    char caracter;

    printf("Introduzca un caracter: ");
    scanf("%c", &caracter);

    if () {
        


    }




}


/*
** Fichero: sesion2_ej9.c
** Autor: Umar Mohammad Riaz
** Fecha: 03/10/2024
**
** Descripción: Este programa pide un carácter al usuario y determina si es una letra, 
** vocal, consonante, mayúscula, minúscula, o un dígito. Además, invierte la capitalización si es una letra.
*/

#include <stdio.h>

int main() {
    char caracter;

    // Pedimos el carácter al usuario
    printf("Introduzca un caracter: ");
    scanf(" %c", &caracter);  // El espacio en el scanf es para ignorar cualquier salto de línea residual

    // Verificamos si es una letra (mayúsculas: 65-90, minúsculas: 97-122 en ASCII)
    if ((caracter >= 65 && caracter <= 90) || (caracter >= 97 && caracter <= 122)) {
        printf("Es una letra\n");

        // Verificamos si es una vocal (mayúsculas y minúsculas)
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
            caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {
            printf("Es una vocal\n");
        } else {
            printf("Es una consonante\n");
        }

        // Verificamos si es mayúscula o minúscula
        if (caracter >= 65 && caracter <= 90) {  // Rango de letras mayúsculas en ASCII
            printf("Es una mayuscula\n");
            printf("No es una minuscula\n");
            // Invertimos a minúscula sumando 32 al valor ASCII (A=65 -> a=97)
            printf("El caracter con la capitalizacion invertida es %c\n", caracter + 32);
        } else if (caracter >= 97 && caracter <= 122) {  // Rango de letras minúsculas en ASCII
            printf("No es una mayuscula\n");
            printf("Es una minuscula\n");
            // Invertimos a mayúscula restando 32 al valor ASCII (a=97 -> A=65)
            printf("El caracter con la capitalizacion invertida es %c\n", caracter - 32);
        }
    }
    // Verificamos si es un dígito (rango 48-57 en ASCII)
    else if (caracter >= 48 && caracter <= 57) {
        printf("No es una letra\n");
        printf("No es una vocal\n");
        printf("No es una consonante\n");
        printf("No es una mayuscula\n");
        printf("No es una minuscula\n");
        printf("Es un digito\n");
    }
    // Si no es ni letra ni dígito
    else {
        printf("No es una letra\n");
        printf("No es una vocal\n");
        printf("No es una consonante\n");
        printf("No es una mayuscula\n");
        printf("No es una minuscula\n");
        printf("No es un digito\n");
    }

    return 0;
}
