/*
4)4)4)
*/
#include<stdio.h>
main(){
	int ans;
	ans=sum();
	printf("this is your addition : %d",ans);
	
}
int sum()
{
	int a,b;
	printf("enter the value :");
	scanf("%d%d",&a,&b);
	return a+b;
}
