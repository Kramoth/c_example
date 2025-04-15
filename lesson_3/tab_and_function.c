#include<stdio.h>

void displayCharTab(char *tab, int tab_size)
{
	for(int i=0;i<tab_size;i++)
	{
		 printf("%c",tab[i]);
	}
	printf("\n");
}
int main()
{
	char hello[5]={'h','e','l','l','o'};
	displayCharTab(hello,5);
}
