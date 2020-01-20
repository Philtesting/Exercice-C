#include<stdio.h>

int main () {


   char c;
   int ascii;

   printf("Entrer un caractere: ");
   c = getchar();
   ascii = (int) c;

printf("code ASCII de %c est %d\n", c, ascii);	
}

