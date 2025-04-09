#include<stdio.h>
#include<math.h>

int main()
{
	int base;
	int exponent;
	printf("select base\n");
	scanf("%d",&base);
	printf("select exponent\n");
	scanf("%d",&exponent);
	printf("%d pow %d = %f\n",base, exponent, pow(base,exponent));
}
