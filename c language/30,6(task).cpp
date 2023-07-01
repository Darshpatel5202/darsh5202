#include<stdio.h>
main(){
	int i,a,total_even=0,total_odd=0,C_odd=0,C_even=0;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a);
		if(a%2==0)
		{
			printf("even number \n");
			total_even+=a;
			C_even++;
		}else{
			printf("odd number \n");
			total_odd+=a;
			C_odd++;
		}
		
	}
	printf("this is total of even number :%d\n",total_even);
	printf("this is total of odd number :%d\n",total_odd);
	printf("this manny even numbers are there :%d\n",C_even);
	printf("this manny odd numbers are there :%d\n",C_odd);
}
