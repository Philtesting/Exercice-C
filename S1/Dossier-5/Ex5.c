#include <stdio.h>

int main()
{
    int i = 0;
    float n, som = 0 , moy;

    while(i < 10)
    {
        printf(" Enter note : ");
        scanf("%f", &n);
        som = som + n;
	i = i + 1;
    }

    moy = som / 10;
    printf("Moyenne = %.2f \n", moy);
}
