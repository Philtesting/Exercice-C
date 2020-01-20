#include <stdio.h>
int main()
{
    int n;
    int fact;
    int i;

    printf("Enter n: ");
    scanf("%d",&n);

    fact = 1;
    i = n;

    while (n > 0)
    {
        fact = fact * n ;
        n = n - 1;
    }

    printf("Factoriel de %d est %d \n", i, fact );
}
