#include<stdio.h>
main(){
	int i,a,maxi=0,mini=0;
	
		printf("input #%d: ",i);
		scanf("%d",&a);
		maxi=a;
		mini=a;
		for(i=1;i<=5;i++){
			printf("input #%d :",i);
			scanf("%d",&a);
			if(a>maxi){
				maxi=a;
			}if(a<mini){
				mini=a;
			}
	}
	printf("the maximum # is %d\n",maxi);
	printf("the minimum # is %d\n",mini);
}
