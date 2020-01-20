#include <stdio.h>

  int main(){
	int x;

	FILE *f;

	f = fopen ("notes.txt", "r");

	while (fscanf (f, "%d", &x) != EOF){
	   printf("%d\n", x);
	}	    
	fclose(f);
}
