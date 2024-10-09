/*
** Fichero: sesion3_ej1.c
** Autor: Umar Mohammad Riaz
** Fecha: 09/10/2024
**
** Descripción: Ejercicio 1 de la sesión 3 de laboratorio.
**
*/


/*
Resultats esperats:

Fragment a: 
0 15
1 25
2 35
3 35

Fragment b: 
0 15
1 25
2 35
3 35

Fragment c: 
0 15
1 25
2 35
3 35
*/

#include <stdio.h>

int main() {
    int i, k;										
      

    k = 5; 
    for (i = 0; i < 3; i++) 
    { 
    k = k + 10; 
    printf("%d %d\n", i, k); 
    } 
    printf("%d %d\n", i, k);     
 

    i = 0; 
    k = 5; 
    while (i < 3) 
    { 
    k = k + 10; 
    printf("%d %d\n", i, k); 
    i = i + 1; 
    } 
    printf("%d %d\n", i, k); 

 
    i = 0; 
    k = 5; 
    do {  
    k = k + 10; 
    printf("%d %d\n", i, k); 
    i = i + 1; 
    } while (i < 3); 
    printf("%d %d\n", i, k); 


    return 0;
}
