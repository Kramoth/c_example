#include<stdio.h>
#include<string.h>

int main()
{
	char hello[]="hello";
	char bye[]="bye";
	char bonjour[]="hello";
	int compare=strcmp(hello, bye);
	if (compare)
		printf("hello and bye are not the same\n");
	else
		printf("hello and bye are the same\n");
	compare=strcmp(hello, bonjour);
	if (compare)
		printf("hello and bonjour are not the same\n");
	else
		printf("hello and bonjour are the same\n");
}
