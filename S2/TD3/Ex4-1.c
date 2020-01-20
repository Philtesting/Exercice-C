#include <stdio.h>

  int entier(){
	int N;
	printf ("Donner moi un nombre entier: ");
	scanf ("%d",&N);
	return N;
  }

  int puissance(){
	int n;
	printf ("Donner moi sa puissance nième: ");
	scanf ("%d",&n);
	return n;
  }

  float calc(int n, int N){
	int x, a;
	a = N;
	if ( n !=0 ){
	    for(x = 1 ; x < n ; x ++){
		N = N * a;
	    }
	}
	else {
	    N = 1;
	}
	return N;
  }

  int main(){
	int x;
	x = calc(puissance(), entier());
	printf("Le resultat est %d\n", x);
  }
