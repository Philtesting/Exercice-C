#include <stdio.h>
#include <math.h>

int main(){
  int x1, x2, y1, y2, a, b, i;
  float d;

  printf("Donner moi x1:");
  scanf("%d", &x1);
  printf("Donner moi x2:");
  scanf("%d", &x2);

  printf("Donner moi y1:");
  scanf("%d", &y1);
  printf("Donner moi y2:");
  scanf("%d", &y2);

  printf("x = (%d , %d), y = (%d , %d)\n ", x1, x2, y1, y2);

  d = sqrt((y1 - x1) * (y1 - x1) + (y2 - x2) * (y2 - x2));

  printf("La distance entre les 2 points est : %f\n ", d);

  for (a = 9 ; a > -1 ; a--){
	printf ("%d|", a);

	if (a == x2 && a == y2){
	   if (x1 < y1){
		for (b = 0 ; b < x1 * 2 ; b++){
		    printf (" ");
	   	}
	        printf ("*");
		for (b = 0 ; b < y1 * 2 - x1 * 2 - 1; b++){
		    printf(" ");
	   	}
		printf ("*");
	   }
	   if (x1 > y1){
		for (b = 0 ; b < y1 * 2  ; b++){
		   printf (" ");
	   	}
		printf("*");
		for (b = 0 ; b < x1 * 2 - y1 * 2 - 1; b++){
		    printf (" ");
	   	}
	        printf ("*");
	   	}
	   }

	if ( a == x2 && a != y2){
	   for (b = 0 ; b < x1 * 2 ; b++){
		printf (" ");
	   }
	   printf ("*");
	}

	if (a == y2 && a != x2){
	   for (b = 0 ; b < y1 * 2  ; b++){
		   printf (" ");
	   }
	   printf ("*\n");
	}

	else{
	printf ("\n");
	}
  }
  printf(" +-------------------\n");
  printf("    1 2 3 4 5 6 7 8 9\n"); 
}
