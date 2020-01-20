#include <stdio.h>
#include <stdlib.h>


int main()
{
    char A[50];
    int count=1, i;
    printf("Entrer une chaine caracteres : ");
    scanf ("%s", A);
    for (i=0; A[i]!='\0'; i++){
        if (A[i]>='A' && A[i]<='Z')
            A[i] = A[i] +'a' - 'A';
        else if (A[i]>='a' && A[i]<='z')
            A[i] = A[i] + 'A' -'a';
    }
    printf ("%s\n", A);
}

