#include<stdio.h>


int add(int i_a, int i_b)
{
	int o_res = i_a + i_b;
	return o_res;
}

void pAdd(int i_a, int i_b, int* i_c)
{
	*i_c=i_a+i_b;
}

int main()
{
	int a, b, res =0;
	printf("mettre une valeur pour a: \n");
	scanf("%d", &a);
	printf("mettre une valeur pour b: \n");
        scanf("%d", &b);
	printf("%d + %d= %d \n", a, b, add(a,b));
	pAdd(a, b, &res);
	printf("%d + %d= %d \n", a, b, res);
}
