#include<stdio.h>
#include<string.h>




int main()
{
	char str[]="Hello World";
	char subStr[]="orl";
	char subStr2[]="lo";
	char *sub_match	=strstr(str,subStr);
	printf("found %s : %s\n" ,subStr,sub_match);
	printf("found %s : %s\n" ,subStr2,strstr(str, subStr2));
}
