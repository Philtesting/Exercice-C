#include <stdio.h>

int main()
{
   int n = 0;
   int count = 0;
    
	do {
		printf ("Donner un entier > 0 : ");
		scanf ("%d", &n);

		printf ("Vous avez fournit %d \n", n);
		
		count = count + 1;
	} while (n > 0);

	printf ("Vous avez entre %d entiers positifs \n", count);
}

		
