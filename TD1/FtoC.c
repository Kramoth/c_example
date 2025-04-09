#include<stdio.h>

int main()
{
	float degreeF;
	printf("please specify degree in fahrenheit: \n");
	scanf("%f",&degreeF);
	printf("%.2f degrees fahrenheit = %.2f degrees celcius\n", degreeF, (degreeF-32.0)*(5.0/9.0));
}
