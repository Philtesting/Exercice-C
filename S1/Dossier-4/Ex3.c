#include <stdio.h>

int main()
{
    char n;
    scanf ("%c", &n);

   	switch (n) {
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
		case 'y' :
		case 'A' :
		case 'E' :
		case 'O' :
		case 'U' :
		case 'I' :
		case 'Y' :
			printf("Le caractere entre est une voyelle\n");
			break;
		case 'q' :
		case 'w' :
		case 'r' :
		case 't' :
		case 'p' :
		case 's' :
		case 'd' :
		case 'f' :
		case 'g' :
		case 'h' :
		case 'j' :	
		case 'k' :
		case 'l' :
		case 'z' :
		case 'x' :
		case 'c' :
		case 'v' :
		case 'b' :
		case 'n' :
		case 'm' :
		case 'Q' :
		case 'W' :
		case 'R' :
		case 'S' :
		case 'P' :
		case 'D' :
		case 'F' :
		case 'G' :
		case 'H' :
		case 'J' :
		case 'K' :
		case 'L' :
		case 'Z' :
		case 'X' :
		case 'C' :
		case 'V' :
		case 'B' :
		case 'N' :
		case 'M' :
			printf("Le caratere entre est une consonne\n");
			break;
		default :
			printf("Le caractere entre est un caractere de controle\n");
			break;

	}
}

