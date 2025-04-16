#include<stdio.h>
#include<string.h>




int main()
{
	char str[]="Bonjour les amis on va séparer ce string";
	char sep[]=" ";
	char *token=strtok(str,sep);
	while( token != NULL)
	{
		printf("%s\n",token);
		token=strtok(NULL, sep);
	}
}
