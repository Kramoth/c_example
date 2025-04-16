#include<stdio.h>


int sumTab(int* i_tab, int i_size)
{
	int o_counter=0;
        for(int i=0;i<i_size;i++)
        {
                o_counter+=i_tab[i];
        }
	return o_counter;
}
int main()
{
	int tab_size=1000;
	int uneven[tab_size];
	for(int i=0;i<tab_size;i++)
	{
		uneven[i]=2*i+1;
	}
	int sum=sumTab(uneven, tab_size);
	printf("the sum of the first thousand odd number is: %d\n", sum);
}
