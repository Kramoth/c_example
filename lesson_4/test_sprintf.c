#include<stdio.h>

int main()
{
	char str[100];
	char nom[15];
	int age;
	printf("quelle est ton nom?\n");
	scanf("%[^\n]",nom);
	printf("quelle est ton age?\n");
	scanf("%d",&age);
	sprintf(str,"tu t'appelles %s, tu as %d ans",nom,age);
	printf("%s\n",str);
}
