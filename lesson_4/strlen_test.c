#include<stdio.h>
#include<string.h>




int main()
{
	char hello[] ="hello";
	char bye[] ="bye";
	int count=strlen(hello);
	printf("there are %d caracters in %s\n" ,count, hello);
	printf("there are %d caracters in %s\n" ,(int)strlen(bye), bye);
}
