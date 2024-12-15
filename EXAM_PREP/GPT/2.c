#include <stdio.h>

#define PI 3.14


void perimetroCirculo(float radio) {
    float resultado;

    resultado = 2 * PI * radio;

    printf("EL PERIMETRO ES %f.\n", resultado);
    
}



void areaCirculo(float radio) {
    float resultado;

    resultado = PI * PI * radio;

    printf("EL AREA ES %02f.\n", resultado);

}


int main() {

    float radio;

    printf("Introduzca el radio del circulo:: ");
    scanf("%f", &radio);

    perimetroCirculo(radio);
    areaCirculo(radio);

    return 0;
}