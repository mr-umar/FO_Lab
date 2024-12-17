#include <stdio.h>

#define PI 3.14


void perimetroCirculo(float radio) {
    float resultado;

    resultado = 2 * PI * radio;

    printf("EL PERIMETRO ES %.2f.\n", resultado);
    
}


void areaCirculo(float radio) {
    float resultado;

    resultado = PI * radio * radio;

    printf("EL AREA ES %.2f.\n", resultado);

}


int main() {

    float radio;

    printf("Introduzca el radio del circulo: ");
    scanf("%f", &radio);

    perimetroCirculo(radio);
    areaCirculo(radio);

    return 0;
}