#include <stdio.h>

int main()
{
   float n ;
   float b = 0;
   float a = 0;
   float c = 0; 
    
   printf ("Entrer votre note: ");
   scanf ("%f", &n);

	while (a != 10){
		c = c + n;
		a = a + 1;
		printf ("Entrer une autre note: ");
		scanf ("%d", &n);
	}
	moy = c / n;
	printf ("la moyenne des nombre reels fournit est : %d \n", moy);
}

		
