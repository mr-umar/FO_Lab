/*
** Fichero: sesion2_ej1.c
** Autor: Umar Mohammad Riaz
** Fecha: 25/09/2024
**
** Descripción: Ejercico 1 de la sesión 2 de labotario.
**
*/ 

# include <stdio.h>

int main(){

    int k=7, resi; 
    char c='a', resc; 
    float f=5.5, g=-3.25, resf;


    resi = -2 + k; /* la variable resi vale 5 */  
    printf("la variable resi vale %d\n", resi);

    resi = resi + 2; /* la variable resi vale 7 */ 
    printf("la variable resi vale %d\n", resi);

    resc = c; /* la variable resc vale a */ 
    printf("la variable resc vale %c\n", resc);

    resi = k%5; /* la variable resi vale 2 */ 
    printf("la variable resi vale %d\n", resi);

    resf = (f - g)/2; /* la variable resf vale 4.3 */ 
    printf("la variable resf vale %f\n", resf);

    resi = resi*(k - 3); /* la variable resi vale 8 */ 
    printf("la variable resi vale %d\n", resi);

    resf = k/(resi - 2); /* la variable resf vale 1.0 */ 
    printf("la variable resf vale %f\n", resf);

    resf = f/(resi - 2); /* la variable resf vale 0.91 */ 
    printf("la variable resf vale %f\n", resf);

    resi = 2*(k - 3)%3/2;  /* la variable resi vale 1 */
    printf("la variable resi vale %d\n", resi);
    
    return 0;
}