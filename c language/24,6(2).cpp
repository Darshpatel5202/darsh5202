/*
elseif ledder :
syntax:
if(condition){
statement;
}else if(condition){
statement;
}
else {
statement;
}
*/

#include<stdio.h>
main(){
	int num;
	printf("enter your number ");
	scanf("%d",&num);
	if(num>=90 && num<100){
		printf("A Grade !!!");
	}else if(num>=80 && num<90){
		printf("B Grade !!");
	}else if(num>=60 && num<80){
		printf("C Grade !");
	}else if(num>=45 && num<60)
{
	printf("D Grade");
}else{
	printf("Fail");
}
}
