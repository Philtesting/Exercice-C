#include<stdio.h>

int main () {


   int i;

   printf ("|");

	for ( i = 0 ; i < 256; i++){
		
		printf("%c |", i);
		
		if (i%10 == 0){ 
		printf("\n");
		printf("|");	
		}
	}
   printf("\n");
}
