#include<stdio.h>



int main()
{
	char hello[6]={'h','e','l','l','o','\0'};
	for(int i =0;i<6;i++)
	{
		printf("%c",hello[i]);
	}
	printf("\n");
}
