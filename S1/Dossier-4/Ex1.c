#include <stdio.h>

int main()
{
    int choix;
    
    printf ("Indiquer votre preference :\n");
    printf ("I=============================I\n");
    printf ("I [1] - Menu salade            \n");
    printf ("I [2] - Menu sand. + salade    \n");
    printf ("I [3] - Menu burguer    \n");
    printf ("I [4] - Menu burguer frites    \n");
    printf ("I [5] - Aucun des precedents   \n");
    printf ("I=============================I\n");
    printf ("\n");

    printf ("Choix :");
    scanf ("%d", &choix);

   	switch (choix) {
		case 1 :
			printf ("Choix : Menu salade \n");
			printf ("        Bravo ! Votre sante vous remercie.\n");
			break;
		case 2 :
			printf ("Choix : Menu sand. + salade \n");
			printf ("        C'est bien de faire attention a votre ligne.\n");
			break;
		case 3 :
			printf ("Choix : Menu burguer \n");
			printf ("        Attention aux repas non-equilibres.\n");
			break;
		case 4 :
			printf ("Choix : Menu burguer frites \n");
			printf ("        Attention a votre cholesterol.\n");
			break;
		case 5 :
			printf ("Choix : Aucun des precedents \n");
			printf ("   N'oublier pas qu'il faut manger equilibre.\n");
			break;
		default :
			printf ("Choix invalide! \n");
		}
}

