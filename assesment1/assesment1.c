#include<stdio.h>
main(){
	int order;
	printf("1.\t\tpizaa=180\n");
	printf("2.\t\tburger=100\n");
	printf("3.\t\tdosa=120\n");
	printf("4.\t\tidli=50\n");
	
	printf("enter no.");
	scanf("%d",&order);
				
				
					
	switch(order){
		case 1:
			printf("pizza");
			printf("\n\tTotal Bill:-180");
			break;
			
		case 2:
			printf("burger");
			printf("\n\tTotal Bill:-120");
			break;
			
		case 3:
			printf("dosa");
			printf("\n\tTotal Bill:-100");
			break;
			
		case 4:
			printf("idli");
			printf("\n\tTotal Bill:50-");
			break;
			}
			
}
