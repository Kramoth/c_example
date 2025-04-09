#include<stdio.h>

int main()
{
	float note1;
	float note2;
	float note3;

	printf("please enter first mark :\n");
	scanf("%f",&note1);
        printf("please enter second mark :\n");
        scanf("%f",&note2);
        printf("please enter third mark :\n");
        scanf("%f",&note3);
	printf("the mean for %.2f, %.2f, %.2f is %.2f\n", note1, note2, note3, (note1+note2+note3)/3.0);
}
