#include<stdio.h>
int main()
{
	printf("choisissez 1 ou 2\n");
	int val;
	scanf("%d",&val);
	switch(val)
	{
		case 1:
			printf("vous avez choisi 1\n");
			break;
		case 2:
			printf("vous avez choisi 2\n");
			break;
		default:
			printf("vous deviez choisir 1 ou 2\n");
			break;
	}
}
