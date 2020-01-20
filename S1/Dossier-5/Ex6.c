#include <stdio.h>

int main()
{
    float fah = 0;
    float cel;

    printf("Fahrenheit\t Celcius\t \n");

    while(fah < 100)
    {
        cel = 5 * (fah - 32) / 9;
	fah = fah + 5;
	

        printf("%.2f\t          %.2f\t \n", fah, cel);
    }
}

