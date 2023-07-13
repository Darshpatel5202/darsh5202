#include<stdio.h>
main(){
	int i,j,arr[4][4],arr1[4][4],arr2[4][4];
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("enter value [%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
		for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("enter value [%d][%d] : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d \t",arr1[i][j]);
		}
		printf("\n");
	}
}
