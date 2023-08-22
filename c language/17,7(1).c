/*
2)2)2)

predefine function:
*/
#include<stdio.h>
int sum(int a ,int b);
main(){
	int a,b,ans;
	printf("enter the value :");
	scanf("%d %d",&a,&b);
	ans=sum(a,b);
	printf("this is your addition %d",ans);
}
int sum(int a,int b){
	return a+b;
}
