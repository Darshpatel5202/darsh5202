#include<stdio.h>
int main(){
	int i=0;
	while(i<=10){
		
		if(i==5){
			printf("*");
			i++;
		}else{
			printf("%d \n",i);
			i++;
		}
	}
}
