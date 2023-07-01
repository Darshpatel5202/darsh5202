#include<stdio.h>
main(){
	int i,n;
	printf("input number of terms : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("number is : %d and cube of the %d is :%d \n",i,i, (i*i*i) );
	}
}
