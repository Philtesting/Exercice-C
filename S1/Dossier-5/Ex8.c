#include<stdio.h>
#include<math.h>

int main()
{
   float x, racine;

   printf("%f et %f\n", x, racine);

   do{
	printf("Entrer un nb (0 pour terminer) : \n");
	scanf("%f", &x);

   printf("%f et %f\n", x, racine);

	racine = sqrt (x) ;
	printf ("La racine carre de %f est %f \n", x, racine);

     } while (x != 0);

   printf("%f et %f\n", x, racine);

}
