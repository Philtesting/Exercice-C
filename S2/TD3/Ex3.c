#include <stdio.h>

  char typedeconversion(){
	char k;
	printf ("Entrer la conversion voulut.\n Si vous voulez convertir des Fahrenheit en Celsius, entrez F.\n Sinon, entrez C.\n");
	scanf ("%c",&k);
	return k;
  }

  float recuptemperature(){
	float T;
	printf ("Entrer la temperature que vous souhaitez convertir.\n");
	scanf ("%f",&T);
	return T;
  }

  float convFtoC(float F){
	float cel;
	cel = (F - 32) / 1.8;
	return cel;
  }
  float convCtoF(float C){
	float fahr;
	fahr = 32 + (C * 1.8);
	return fahr;
  }
  void afficheresultat(float T){
	printf ("Le resultat est donc %.2f.\n", T);
  }

  int main(){
	float i, x;

	if (typedeconversion() == 'F'){
	   i = recuptemperature();
	   x = convFtoC(i);
	   afficheresultat(x);
	}
	else{
	   i = recuptemperature();
	   x = convCtoF(i);
	   afficheresultat(x);
	}
  }
