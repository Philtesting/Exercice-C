#include <stdio.h>

int main()
{
   int n;
   int i;
   int fact = 1;
    
   printf ("Entrer n : ");
   scanf ("%d", &n);

   i = n;

	do {
	    fact = fact * n;
	    n = n - 1;
	} while (1 <= n); 
	printf ("Factoriel de %d est %d \n", i, fact);
}

		
