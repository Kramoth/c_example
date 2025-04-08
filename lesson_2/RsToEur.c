#include<stdio.h>

double RsToEur(double roupie)
{
	double eur=0.0;
	double taux=49.49;
	eur=roupie/taux;
	return eur;
}

int main()
{
	double roupie=0;
	printf("entrer une valeur à convertir\n");
	scanf("%lf",&roupie);
	printf("rs.%.2f vaut %.2f €\n",roupie, RsToEur(roupie));
}
