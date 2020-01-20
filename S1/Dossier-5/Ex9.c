#include<stdio.h>

int main()
{
   int u0, u1;
   int un;
   int op;
   int i;

   u0 = 1;
   u1 = 1;
   i = 2;
 
   printf ("Serie de Fibonacci \n u0 = 1 \n u1 = 1 \n");
   
   do{
	un = u0 + u1;

	printf(" u%d = %d\n", i, un);
	
	u0 = u1;
	u1 = un;
	i = i + 1;

	printf ("Voulez-vous continuer ( 0 = oui, 1 = non) : ");
	scanf ("%d", &op);
     }
   while (op == 0);
}

