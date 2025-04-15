#include<stdio.h>

int toto(int input)
{
	if( input>42)
	{
		printf("c'est plus grand que 42\n");
		return 42;
	}
}

int main()
{
	toto(44);
	toto(18);
}
