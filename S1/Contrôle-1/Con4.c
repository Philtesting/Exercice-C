#include<stdio.h>
#include<math.h>

int main () { 

  int a, b, c, DISCRI;   
  float x1, x2;

  printf ("Entrer a: ");  
  scanf ("%d", &a);  

  printf ("Entrer b: ");  
  scanf ("%d", &b);

  printf ("Entrer c: ");  
  scanf ("%d", &c);    

  if ( a != b) {  
 
 	DISCRI = b * b - 4 * a * c ;

	if (DISCRI < 0) {  
  		printf (" pas de racine \n");  
        } 

	else {  
		x1 = ( - (b * b) - sqrt(DISCRI) ) / (2 * a);
		x2 = ( - (b * b) + sqrt(DISCRI) ) / (2 * a);
  		printf (" x1 = %f\n x2 = %f\n", x1, x2);  
        }
  }
}

