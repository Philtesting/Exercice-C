#include<stdio.h>
#include<math.h>

int main()
{
   int i;
   float x, xpow;
   float racx;

   printf("Donnez un nb : ");
   scanf("%f", &x);

   i = 0;
   xpow = 1;

      while (i < x)
      { 
	xpow = xpow * x;
	i = i + 1;
      }
  
   racx = sqrt (x);
   printf("%f ^ %f = %f \n sqrt = %f\n", x, x, xpow, racx);
   return (0);
}
