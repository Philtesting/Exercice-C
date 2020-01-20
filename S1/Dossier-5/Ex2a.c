#include <stdio.h>

int main()
{
   int n = 0;
   int count = 0;
   int sum = 0;
    
   printf ("Entrer un entier (0 pour terminer) : ");
   scanf ("%d", &n);

	do {
		sum = sum + n;
		count = count + 1;

		printf ("Entrer un entier (0 pour terminer) : ");
		scanf ("%d", &n);
	} while (n != 0) ;

	printf ("la somme des %d entiers fournis est : %d \n", count, sum);
}

		
