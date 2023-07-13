#include<stdio.h>
main()
{
	int j=0,k=0,i,arr[10],even[10],odd[10],c_even=0,c_odd=0;
	for(i=0;i<10;i++){
		printf("enter your value :");
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			even[j]=arr[i];
			c_even++;
			j++;
		}else{
			odd[k]=arr[i];
			c_odd++;
			k++;
		}
	}
	printf("this is even numbers :");
	for(j=0;j<=c_even;j++){
		printf("%d \t",even[j]);
	}
	printf("\n this is odd numbers :");
	for(k=0;k<=c_odd;k++){
		printf("%d \t",odd[k]);
	}
}
