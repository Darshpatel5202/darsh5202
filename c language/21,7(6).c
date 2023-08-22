#include<stdio.h>
#include<string.h>
main()
{
	char str1[20],str2[20];
	printf("enter your string here :");
	gets(str1);
	gets(str2);
	printf("%s \n",str1);
	printf("this is your lower case %s\n",strlwr(str1));
	printf("%s \n",str2);
	printf("this is your upper case %s\n",strupr(str2));
}
