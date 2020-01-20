#include <stdio.h>

  int main(){
	int x, a;

	FILE *f;

	f = fopen ("notes.txt", "r");
	
	for ( a = 0 ; a <= 10 ; a ++){
	   printf("%d	:", a);

	   if (fscanf (f, "%d", &x) == a){
		printf("*");
	   }

	   printf("\n");
	}  
	fclose(f);
}
