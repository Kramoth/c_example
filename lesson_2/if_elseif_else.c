#include<stdio.h>
int main()
{
	int val;
	printf("entrez une valeur\n");
	scanf("%d",&val);
	if(val==12)
	{
		printf("bingo\n");
	}
	else if(val<12)
	{
		printf("trop petit\n");
	}
	else
	{
		printf("trop grand\n");
	}
}
