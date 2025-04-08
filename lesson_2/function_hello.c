#include<stdio.h>

void hello()
{
	printf("hello\n");
}


void hello_1(int nombreDeFois)
{
	for(int i=0; i<=nombreDeFois;i++)
	{
		printf("hello\n");
	}
}
void hello_2(int nombreDeFois, int test)
{
	for(int i=0; i<=nombreDeFois;i++)
	{
		printf("hello, %d\n",test);
	}
}

int main()
{
	hello();
	hello_1(3);
	hello_2(4,12);
}
