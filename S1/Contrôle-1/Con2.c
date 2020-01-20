#include<stdio.h>

int main () { // Inicialisation du programme

  int i, j;   // Declare variable i et j
  float x = 2.5;  // Declare variable x egale a 2.5 

  printf ("Saisissez j: ");  // Affiche ce message a l'utilisateur
  scanf ("%d", &j);  // Donne valeur de j

  i = j + x;  // On dit que i est l'addition de j et x
  x = x + i;  // On dit que x devient la somme de x et i

  printf ("%f\n", x);  // Affiche x

}

