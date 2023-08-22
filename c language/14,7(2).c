/*
there are 4 types of function.
1)with argument and without return type;
2)with argument and with return type;
3)without argument and without return type;
4)without argument and with return type;
1)1)1)*/
#include<stdio.h>
void display();
main(){
	printf("this is your entered amount");
	display();
}
void display(){
	int a,b;
	printf("enter your amount :");
	scanf("%d%d",&a,&b);
	printf("this is your a=%d this is your b=%d",a,b);
}
