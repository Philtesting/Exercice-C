#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int i=0, count=1;
    printf("Entrer une phrase, terminee par un point.\n");
    while (c!=1){
        c = getchar();
        if (c=='.')
            c=1;
        if (c ==' ')
            count++;
    }
    printf ("%d\n", count);
    return 0;
}

