#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf ("Entrer a:");
    scanf ("%d", &a);
    
    printf ("Entrer b:");
    scanf ("%d", &b);

    printf ("Entrer c:");
    scanf ("%d", &c);

        if (a < b && a < c){

            if (c > b){
 	    printf ("le nombre plus petit est %d et le nombre plus grand est %d\n ", 		    a, c);
            }
	    if (b > c){
 	    printf ("le nombre plus petit est %d et le nombre plus grand est %d\n ", 		    a, b);
            }
        }
        else if (b < c && b < a){

            if (c > a){
 	    printf ("le nombre plus petit est %d et le nombre plus grand est %d\n ", 		    b, c);
            }
	    if (a > c){
 	    printf ("le nombre plus petit est %d et le nombre plus grand est %d\n ", 		    b, a);
            }
        }
	else if (c < b && c < a){

            if (a > b){
 	    printf ("le nombre plus petit est %d et le nombre plus grand est %d\n ", 		    c, a);
            }
	    if (b > a){
 	    printf ("le nombre plus petit est %d et le nombre plus grand est %d\n ", 		    c, b);
            }
	}
}



