#include<stdio.h>

int main () {


   int i, j;

	for ( i = 0 ; i < 256; i++){

		j = (char) i;

		printf("%d = %c \n", i, j);	

	  }
}
