#include <stdio.h>

int main()
{
    int a, b;
    
    printf ("Entrer a: ");
    scanf ("%d", &a);
    
    printf ("Entrer b: ");
    scanf ("%d", &b);

	if (b % a == 0){
		printf ("a divise b : O\n");
		printf ("b divise a : N\n");
	}
	if (a % b == 0){
		printf ("a divise b : N\n");
		printf ("b divise a : O\n");
	}
	if (a % 2 == 0){
		printf ("a est impair: N\n");
	}
	if (a % 2 != 0){
		printf ("a est impair: O\n");
	}
	if (b % 2 == 0){
		printf ("b est impair: N\n");
	}
	if (b % 2 != 0){
		printf ("b est impair: O\n");	 	 
	}
        if (a < b){
		printf ("a < b : O\n");
		printf ("a > b : N\n");
	}
        if (a > b){
 		printf ("a < b : N\n");
		printf ("a > b : O\n");
        }
}



