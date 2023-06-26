/*
if else:
syntax:
if(condition){
statement;
}else {
statement;
}
*/

#include<stdio.h>
main(){
	int num;
	printf("\tenter your number ");
	scanf("%d",&num);
	if(num>18){
		printf("eligible");
	}else{
		printf("not eligible");
	}
}
