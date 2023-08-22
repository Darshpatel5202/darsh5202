#include<stdio.h>
#include<string.h>
main()
{
	char str1[20],str2[20];
	printf("enter your string here :");
	gets(str1);
	printf("%s",str1);
	printf("this is your reverse %s",strrev(str1));
}
