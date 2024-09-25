/*
Umar Mohammad Riaz
S2 - Ej. 1 
*/

# include <stdio.h>

int k=7, resi; 
char c='a', resc; 
float f=5.5, g=-3.25, resf;

int main(){

    resi = -2 + k; /* la variable resi vale _______ */  
    printf("la variable resi vale %d", resi);

    resi = resi + 2; /* la variable resi vale _______ */ 
    printf("la variable resi vale %d", resi);

    resc = c; /* la variable resc vale _______ */ 
    printf("la variable resc vale %d", resc);

    resi = k%5; /* la variable resi vale _______ */ 
    printf("la variable resi vale %d", resi);

    resf = (f - g)/2; /* la variable resf vale _______ */ 
    printf("la variable resf vale %d", resf);

    resi = resi*(k - 3); /* la variable resi vale _______ */ 
    printf("la variable resi vale %d", resi);

    resf = k/(resi - 2); /* la variable resf vale _______ */ 
    printf("la variable resf vale %d", resf);

    resf = f/(resi - 2); /* la variable resf vale _______ */ 
    printf("la variable resf vale %d", resf);

    resi = 2*(k - 3)%3/2;  /* la variable resi vale _______ */
    printf("la variable resi vale %d", resi);
    
    return 0;
}