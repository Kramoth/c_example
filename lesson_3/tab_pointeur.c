#include<stdio.h>



int main()
{
	char hello[5]={'h','e','l','l','o'};
	printf("%p\n", hello);
	for(int i=0;i<5;i++)
	{
		printf("%c",*(hello+i));
		// on peut faire +i car dans un tableau les cases 		//mémoires se succèdent cf plus tôt dans le cours
	}
	printf("\n");
}
