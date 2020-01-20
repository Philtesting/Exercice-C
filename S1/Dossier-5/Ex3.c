#include <stdio.h>

int main()
{
   float x, y;
   float z;
   int i;
    
   printf ("Entrer x : ");
   scanf ("%f", &x);
   printf ("Entrer y : ");
   scanf ("%f", &y);

   z = 1;
   i = 1;

	while (i <= y) {
		z = z * x;
		i = i + 1;
	}

	printf ("x ^ y = %f \n", z);
}

		
