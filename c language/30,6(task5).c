#include<stdio.h>
main()
{
	int i,a,b,c,min=0;
	for(i=1;i<=3;i++){
		if(a<min){
			min=a;
		}else if(b<min){
			min=b;
		}else if(c<min){
			min=c;
		}
		a=5;
		b=9;
		c=-12;
	}
	printf("among %d, %d ,%d minimumnumber is %d \n",a,b,c,min);
}
