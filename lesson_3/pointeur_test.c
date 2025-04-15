#include<stdio.h>
int main()
{
	int toto = 42;
	printf("la valeur de toto est : %d\n" ,toto);
	printf("la valeur de l'adresse de toto est : %p\n", &toto);
	int *pointeur_sur_toto = &toto;
	printf("la valeur de pointeur_sur_toto est : %p\n", pointeur_sur_toto);
	printf("pointeur_sur_toto renvoie à la valeur : %d\n", *pointeur_sur_toto); 
}
