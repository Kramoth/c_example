#include<stdio.h>
#include<stdlib.h>
int main()
{
	int tab_size;
	int *dynTab=NULL;	
	printf("what is the size of the tab?\n");
	scanf("%d",&tab_size);
	dynTab=malloc(sizeof(int)*tab_size);
	if(dynTab==NULL)
		exit(1);
	for(int i=0; i<tab_size;i++)
		dynTab[i]=i*2+1;
	for(int i=0; i<tab_size;i++)
		printf("%d ",dynTab[i]);
	printf("\n");
	free(dynTab);
}
