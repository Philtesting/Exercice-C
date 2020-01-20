#include<stdio.h>

int main () { // Inicialisation du programme

  int a, b;   // Declare variable a et b

  printf ("Entrer a: ");  // Affiche ce message a l'utilisateur
  scanf ("%d", &a);  // Donne valeur de a

  printf ("Entrer b: ");  // Affiche ce message a l'utilisateur
  scanf ("%d", &b);  // Donne valeur de b

  if (b > a) {  // On a condition de b > a
  	printf (" b > a \n");  // Affiche ce message a l'utilisateur
  }

  else if (a > b) {  // On a condition de a > b
  	printf (" a > b \n");  // Affiche ce message a l'utilisateur
  } 

  else {  // Sinon
  	printf (" a est egale a b \n");  // Affiche ce message a l'utilisateur  
  }
}

