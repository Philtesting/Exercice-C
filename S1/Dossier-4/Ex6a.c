#include <stdio.h>

int main()
{
    float a, b, c;
    
    printf ("Entrer le prix:");
    scanf ("%f", &a);
    

        if (a < 100 ){
            b = a * 0.7 ;
            c = a * 0.3 ;
            printf ("Prix inicial: %.2f euros, Remise: %.2f euros, Prix final: %.2f euros \n ", a, c, b);
        } 
        else if (100 <= a && a < 200 ){
            b = a * 0.6 ;
            c = a * 0.4 ;
            printf ("Prix inicial: %.2f euros, Remise: %.2f euros, Prix final: %.2f euros \n ", a, c, b);
        } 
        else if (a > 200){
            b = a * 0.5 ;
            c = a * 0.5 ;
            printf ("Prix inicial: %.2f euros, Remise: %.2f euros, Prix final: %.2f euros \n ", a, c, b);
        } 
}


