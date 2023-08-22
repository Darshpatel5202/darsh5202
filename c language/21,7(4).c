#include<stdio.h>
#include<string.h>
main()
{
	char str1[20],str2[20];
	printf("enter your string here :");
	gets(str1);
	gets(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("equal");
	}else{
		printf("not equal");
	}
}

/*
here gets work as scanf;
*/
