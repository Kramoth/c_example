#include<stdio.h>

int main()
{
	int res;
	float resf;
	float a=12.5;
	int b=85;
	res=a+b;
	resf=a+b;
	printf("a + b = %d\n",res);
	printf("a + b = %f\n",resf);
	int c=12;
	int d=75;
	res=c/d;
	resf=c/d;
	printf("c / d = %d\n",res);
	printf(" c / d = %f\n",resf);
	resf=(float)c/(float)d;
	printf("after trantyping:\n");
	printf(" c / d = %f\n",resf);
}
