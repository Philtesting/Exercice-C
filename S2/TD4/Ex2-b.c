#include <stdio.h>

  int main(){
	int x, a, sum;

	FILE *f;

	f = fopen ("notes.txt", "r");
	
	for ( a = 0 ; a < 21 ; a ++){

	   printf("%d: ", a);
	   sum = 0;
	   while (fscanf (f, "%d", &x) != EOF){
		printf("/%d/\n ", x);
		if (x == a){
		   sum = sum + 1;
	   	}
	   }
	   printf("%d\n", sum);
	}  
	fclose(f);
}

freq[note [i]]++;
