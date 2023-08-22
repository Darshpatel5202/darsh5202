#include<stdio.h>
struct demo{
	int age;
	char name[20];
}s1;

main()
{
	printf("enter your name :");
	scanf("%s",&s1.name);
	printf("enter your age :");
	scanf("%d",&s1.age);
	printf(" \nyour name : %s",s1.name);
	printf(" \nyour age : %d",s1.age);
	struct demo s2;
	printf("\n\nenter your name :");
	scanf("%s",&s1.name);
	printf("enter your age :");
	scanf("%d",&s1.age);
	printf(" \nyour name : %s",s1.name);
	printf(" \nyour age : %d",s1.age);
	
}
