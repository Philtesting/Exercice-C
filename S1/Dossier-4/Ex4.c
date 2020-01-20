#include <stdio.h>

int main()
{
    float a, b, d;
    char c;

    printf ("Entez l'operation [+ - * /] : \n");
    scanf ("%c", &c);
    printf ("Entez a: \n");
    scanf ("%f", &a);
    printf ("Entez b: \n");
    scanf ("%f", &b);
   	switch (c) {
		case '+' :
			d = a + b;
			printf ("%f + %f = %f\n", a, b, d);
			break;
		case '-' :
			d = a - b;
			printf ("%f - %f = %f\n", a, b, d);
			break;
		case '*' :
			d = a * b;
			printf ("%f * %f = %f\n", a, b, d);
			break;
		case '/' :
			d = a / b;
			printf ("%f / %f = %f\n", a, b, d);
			break;
		}
}

