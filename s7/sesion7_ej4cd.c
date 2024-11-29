/*
** Fichero: sesion7_ej4cd.c
** Autor: Umar Mohammad Riaz
** Fecha: 27/12/2024
**
** Descripción: Ejercicio 4c y 4d de la sesión 7 de laboratorio.
** Implementación de operaciones entre fracciones y calculadora de expresiones fraccionarias.
*/

#include <stdio.h>

typedef struct {
    int num;   /* Numerador */
    int den;   /* Denominador */
} t_fraccion;

int mcd(int a, int b);
int mcm(int a, int b);

t_fraccion leer_fraccion();
void mostrar_fraccion(t_fraccion f);
void mostrar_oper_fracciones(char operador, t_fraccion f1, t_fraccion f2, t_fraccion res);
t_fraccion operacion_fracciones(char operador, t_fraccion f1, t_fraccion f2);

int main() {
    t_fraccion f1, f2, resultado;
    char operador;

    printf("Introduce la primera fracción:\n");
    f1 = leer_fraccion();
    printf("Introduce la segunda fracción:\n");
    f2 = leer_fraccion();
    printf("Introduce el operador (+, -, *, /): ");
    scanf(" %c", &operador);

    resultado = operacion_fracciones(operador, f1, f2);
    mostrar_oper_fracciones(operador, f1, f2, resultado);

    return 0;
}

int mcd(int a, int b) {
    int r;
    r = a % b;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int mcm(int a, int b) {
    return (a * b) / mcd(a, b);
}

t_fraccion leer_fraccion() {
    t_fraccion f;

    printf("Introduce el numerador: ");
    scanf("%d", &f.num);

    do {
        printf("Introduce el denominador (distinto de 0): ");
        scanf("%d", &f.den);
        if (f.den == 0) {
            printf("El denominador no puede ser 0. Inténtalo de nuevo.\n");
        }
    } while (f.den == 0);

    return f;
}

void mostrar_fraccion(t_fraccion f) {
    if (f.num < 0 && f.den < 0) {
        f.num = -f.num;
        f.den = -f.den;
    } else if (f.den < 0) {
        f.num = -f.num;
        f.den = -f.den;
    }
    printf("%d/%d", f.num, f.den);
}

void mostrar_oper_fracciones(char operador, t_fraccion f1, t_fraccion f2, t_fraccion res) {
    printf("\nResultado de la");
    switch (operador) {
        case '+':
            printf(" suma es: ");
            break;
        case '-':
            printf(" resta es: ");
            break;
        case '*':
            printf(" multiplicación es: ");
            break;
        case '/':
            printf(" división es: ");
            break;
    }
    mostrar_fraccion(f1);
    printf(" %c ", operador);
    mostrar_fraccion(f2);
    printf(" = ");
    mostrar_fraccion(res);
    printf("\n");
}

t_fraccion operacion_fracciones(char operador, t_fraccion f1, t_fraccion f2) {
    t_fraccion res;
    switch (operador) {
        case '+':
            res.num = f1.num * f2.den + f2.num * f1.den;
            res.den = f1.den * f2.den;
            break;
        case '-':
            res.num = f1.num * f2.den - f2.num * f1.den;
            res.den = f1.den * f2.den;
            break;
        case '*':
            res.num = f1.num * f2.num;
            res.den = f1.den * f2.den;
            break;
        case '/':
            res.num = f1.num * f2.den;
            res.den = f1.den * f2.num;
            break;
        default:
            printf("Operador no válido.\n");
            res.num = 0;
            res.den = 1;
            break;
    }
    int divisor = mcd(res.num, res.den);
    res.num /= divisor;
    res.den /= divisor;
    return res;
}
