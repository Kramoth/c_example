#include<stdio.h>
int main()
{
	int toto =10;
	printf( "la variable toto a pour valeur %d\n",toto);
	printf("la variable toto est stockée  l'adresse suivante %p\n", &toto);
	int* pToto=NULL;// attention veillez à intitialiser un pointeur avec NULL
	pToto=&toto;
	printf( "la variable pToto a pour valeur %p\n",pToto);
	printf("la variable ptoto est stockée  l'adresse suivante %p\n", &pToto);
	//les adresses sont exprimées en hexadecimal 	 
}
